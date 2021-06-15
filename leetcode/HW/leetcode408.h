//
// Created by Peixiao on 2021/6/15.
//

#ifndef HW_LEETCODE408_H
#define HW_LEETCODE408_H

#endif //HW_LEETCODE408_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validWordAbbreviation()
{
	// please define the C input here. For example: int n; scanf("%d",&n);
    char s[100], abbr[100];
    scanf("%s", s);
    scanf("%s", abbr);
    int s_len = strlen(s);
    int abbr_len = strlen(abbr);
    int res = 1;
	// please finish the function body here.
    if (s_len < abbr_len) {
        printf("-1");
        return 0;
    }
    int i = 0, j = 0, number = 0;
    while (i < s_len && j < abbr_len) {
        if(isdigit(abbr[j])) {
            if (abbr[j] == '0') {
                res = -1;
                break;
            }
            number = 0;
            while (j < abbr_len && isdigit(abbr[j])){
                number = number * 10 + abbr[j++] - '0';
            }
            i += number;
        }
        else{
            if(s[i] != abbr[j]) {
                res = -1;
                break;
            }
            i++;
            j++;
        }
    }
	// please define the C output here. For example: printf("%d\
",a);
    if(i != s_len || j != abbr_len){
        res = -1;
    }
    printf("%d", res);
	return 0;
}