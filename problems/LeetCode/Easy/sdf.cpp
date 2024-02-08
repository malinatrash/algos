#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return head;

    vector<int> list;
    ListNode *fake = head;
    while (fake != nullptr) {
      list.push_back(fake->val);
      fake = fake->next;
    }

    reverse(list.begin(), list.end());

    ListNode *newHead = new ListNode(list[0]);
    ListNode *current = newHead;
    for (int i = 1; i < list.size(); ++i) {
      current->next = new ListNode(list[i]);
      current = current->next;
    }

    return newHead;
  }
};
