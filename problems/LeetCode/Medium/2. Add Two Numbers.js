/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
	const getNode = (n1, n2, rest = 0) => {
		if (!n1 && !n2 && !rest) return null;
		const newVal = (n1?.val || 0) + (n2?.val || 0) + rest;
		const nextNode = getNode(n1?.next, n2?.next, Math.floor(newVal / 10));
		return new ListNode(newVal % 10, nextNode);
	};
	return getNode(l1, l2);
};

var addTwoNumbers2 = function (l1, l2) {
	let dummyHead = new ListNode(0);
	let p = l1,
		q = l2,
		current = dummyHead;
	let carry = 0; // Дополнительный разряд, который может возникнуть при сложении

	while (p || q) {
		const x = p ? p.val : 0;
		const y = q ? q.val : 0;
		const sum = x + y + carry;
		carry = Math.floor(sum / 10);

		current.next = new ListNode(sum % 10);
		current = current.next;

		if (p) p = p.next;
		if (q) q = q.next;
	}

	// Если после сложения ещё остался дополнительный разряд, добавляем его
	if (carry > 0) {
		current.next = new ListNode(carry);
	}

	return dummyHead.next;
};
