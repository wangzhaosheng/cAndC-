//
// Created by wangzhaosheng on 19-9-10.
//
#include <stdio.h>
#include "swap.h"


int main09001() {

    int a = 12;
    int b = 32;
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);

}

void swap(int *a, int *b) {
    int temp = *a;  //todo 这里不是交换指针,而是交换指针所指向的值
    *a = *b;
    *b = temp;
}


