/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function (head) {
	const set = new Set();
	const checkNext = node => {
		if (node === null) {
			return false;
		}
		if (set.has(node)) {
			return true;
		} else {
			set.add(node);
		}
		return checkNext(node.next);
	};
	return checkNext(head);
};

// Мой персональный антирекорд

// Runtime
// 75ms
// Beats 8.60%of users with JavaScript
// Memory
// Details
// 46.86MB
// Beats 5.48%of users with JavaScript

var hasCycleTwoPointers = function (head) {
	let fast = head;
	while (fast && fast.next) {
		fast = fast.next.next;
		head = head.next;
		if (fast == head) {
			return true;
		}
	}
	return false;
};

// Runtime
// 50ms
// Beats 98.41%of users with JavaScript
// Memory
// Details
// 45.20MB
// Beats 40.41%of users with JavaScript
