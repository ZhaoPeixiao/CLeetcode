//
// Created by Peixiao on 2021/6/16.
//

#ifndef HW_LEETCODE1426_H
#define HW_LEETCODE1426_H

#endif //HW_LEETCODE1426_H

#include <stdio.h>
#include <stdlib.h>

int ElementsCount[1001];

int countElements()
{
    // please define the C input here. For example: int n; scanf("%d",&n);
    int res = 0;
    int len;
    int num;
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &num);
        ElementsCount[num]++;
    }
    for (int i = 1; i < 1001; i++) {
        if (ElementsCount[i] && ElementsCount[i - 1]) {
            res += ElementsCount[i - 1];
        }
    }
    // please finish the function body here.
    printf("%d", res);
    // please define the C output here. For example: printf("%d\
",a);

    return 0;
}