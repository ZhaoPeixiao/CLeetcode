//
// Created by Peixiao on 2021/6/17.
//

#ifndef DOUBLE_POINTER_LEETCODE876_H
#define DOUBLE_POINTER_LEETCODE876_H

#endif //DOUBLE_POINTER_LEETCODE876_H

#include <iostream>
#include "ListNode.h"


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;
        fast = slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};