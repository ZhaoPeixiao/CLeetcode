//
// Created by Peixiao on 2021/6/18.
//

#ifndef HW_Q2_H
#define HW_Q2_H

#endif //HW_Q2_H

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits>

using namespace std;


// 待实现函数，在此函数中填入答题代码;
int BatchCalculation(int m, const vector<int> &numbers) {
    int result = 0;
    if (m >= numbers.size()) {
        return 10000;
    }

    vector<int> segments(numbers.size() + 1);
    segments[0] = numbers[0] - 1;
    for (int i = 1; i < segments.size() - 1; i++) {
        segments[i] = numbers[i] - numbers[i-1] - 1;
    }
    segments[segments.size() - 1] = 10000 - numbers[numbers.size() - 1];

    // sliding window
    int sliding_window_size = m + 1;
    for (int i = 0; i <= segments.size() - sliding_window_size; i++) {
        int sum = 0;
        for (int j = 0; j < sliding_window_size; j++) {
            sum += segments[i + j];
        }
        result = max(result, sum);
    }
    result += m;
    return result;
}

