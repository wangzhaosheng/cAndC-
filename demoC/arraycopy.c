//
// Created by wangzhaosheng on 19-9-10.
//

#include <stdio.h>
#include <memory.h>
#include "arraycopy.h"

void main09111102() {

    int src[] = {1, 26, 4};
    int dest[100];
    copy(src, dest, 3, 3);

    int arr[100] = {0};//todo 其他99个默认都是0

}


void copy(int *src, int *dest, int srcLen, int destLen) {
    int i = 0;//todo 局部变量初始不为0
    while (i < srcLen) {
        dest[i] = src[i];
        i++;
    }
    for (int j = 0; j < 3; ++j) {

        printf("%d\n", dest[j]);
    }


}

void copyStr(char *ch) {
    printf("%s", ch);
    int i = 0;
    char c[100];

    while (ch[i] = '\0') { //todo  字符必须用单引号
        c[i] = *(ch + i);
        i++;
    }
    printf("%s\n", c);

}
