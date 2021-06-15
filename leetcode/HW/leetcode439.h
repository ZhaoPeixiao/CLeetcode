//
// Created by Peixiao on 2021/6/15.
//

#ifndef HW_LEETCODE439_H
#define HW_LEETCODE439_H

#endif //HW_LEETCODE439_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int parseTernary()
{
    // please define the C input here. For example: int n; scanf("%d",&n);
    char expression[10001];
    scanf("%s", expression);
    int len = strlen(expression);
    int i = len - 1;
    // please finish the function body here.
    while (i >= 4) {
//        printf("at %d\n", i);
        char symbol = expression[i - 4];
        if(symbol == 'T'){
            expression[i-4] = expression[i-2];
        }
        else{
            expression[i-4] = expression[i];
        }
        i -= 4;
    }
    // please define the C output here. For example: printf("%d\
",a);
    printf("%c", expression[0]);
    return 0;
}



