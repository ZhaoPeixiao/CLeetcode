//
// Created by Peixiao on 2021/6/18.
//

#ifndef HW_Q1_H
#define HW_Q1_H

#endif //HW_Q1_H

#include <iostream>
#include <vector>

using namespace std;
unsigned int GetMinArea(int stopPoint, const vector<pair<int, int>> &operations)
{
    int res = 0;
    int last_x = 0;
    int last_y = 0;
    for (int i = 0; i < operations.size(); i++) {
        int current_x = operations[i].first;
        int current_offsety = operations[i].second;
        res += (current_x - last_x) * abs(last_y);
        last_x = current_x;
        last_y = last_y + current_offsety;
    }
    res += (stopPoint - last_x) * abs(last_y);
    return res;
}
