//
// Created by wangzhaosheng on 19-9-16.
//

#include <stdio.h>

int a;//未初始化肯定为0

static int m;//未初始化肯定为0

struct temp {
    int p;//未初始化肯定为0
} temp1;

void main09161126() {

    int b;//未初始化值不确定,有可能是0

    printf("%d\n", a);
    printf("%d\n", b);

    static int n;//未初始化肯定为0


    printf("%d\n", m);
    printf("%d\n", n);

    struct temp {
        int p;//未初始化值不确定,有可能是0
    } temp1;
}

