#pragma once
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool checkInclusion(string t, string s) {
    unordered_map<char, int> need, window;
    for (char c : t) {
        need[c]++;
    }
    int left = 0, right = 0;
    int valid = 0;
    while (right < s.size()) {
        char c = s[right];
        right++;
        // ���д��������ݵ�һϵ�и���
        if (need.count(c)) {
            window[c]++;
            if (window[c] == need[c]) {
                valid++;
            }
                
        }

        // �ж���ര���Ƿ�Ҫ����
        while (right - left >= t.size()) {
            // �������ж��Ƿ��ҵ��˺Ϸ����Ӵ�
            if (valid == need.size()) {
                return true;
            }
            char d = s[left];
            left++;
            // ���д��������ݵ�һϵ�и���
            if (need.count(d)) {
                if (window[d] == need[d]) {
                    valid--;
                }
                window[d]--;
            }
        }
    }
    // δ�ҵ������������Ӵ�
    return false;
}
