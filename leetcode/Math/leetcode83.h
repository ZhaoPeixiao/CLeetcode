//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LEETCODE83_H
#define MATH_LEETCODE83_H

#endif //MATH_LEETCODE83_H

#include "headers.h"
#include "ListNode.h"

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode *slow, *fast;
        slow = fast = head;
        while (fast != nullptr) {
            if (fast->val != slow->val) {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = nullptr;
        return head;
    }
};