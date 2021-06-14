//
// Created by Peixiao on 2021/6/14.
//

#ifndef NESTED_ITERATOR_NESTEDINTEGER_H
#define NESTED_ITERATOR_NESTEDINTEGER_H

#endif //NESTED_ITERATOR_NESTEDINTEGER_H


class NestedInteger {
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector <NestedInteger> &getList() const;
};