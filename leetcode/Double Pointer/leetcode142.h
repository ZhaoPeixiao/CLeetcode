//
// Created by Peixiao on 2021/6/17.
//

#ifndef DOUBLE_POINTER_LEETCODE142_H
#define DOUBLE_POINTER_LEETCODE142_H

#endif //DOUBLE_POINTER_LEETCODE142_H


#include <iostream>
#include "ListNode.h"

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow, *fast;
        fast = slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                break;
            }
        }
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }
        slow = head;
        while (slow != fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};