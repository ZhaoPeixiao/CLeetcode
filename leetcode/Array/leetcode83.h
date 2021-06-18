//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE83_H
#define ARRAY_LEETCODE83_H

#endif //ARRAY_LEETCODE83_H

#include "header.h"
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