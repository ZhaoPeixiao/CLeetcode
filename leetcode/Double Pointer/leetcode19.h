//
// Created by Peixiao on 2021/6/17.
//

#ifndef DOUBLE_POINTER_LEETCODE19_H
#define DOUBLE_POINTER_LEETCODE19_H

#endif //DOUBLE_POINTER_LEETCODE19_H

#include <iostream>
#include "ListNode.h"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast, *slow;
        fast = slow = head;
        while (n-- > 0) {
            fast = fast->next;
        }
        if (fast == nullptr) {
            return head->next;
        }
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
