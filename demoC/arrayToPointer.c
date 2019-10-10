#include <stdio.h>

void pointFirst();

void pointArray();

//
// Created by wangzhaosheng on 19-9-12.
//
void main09120955() {
    //todo 第一种 指针指向数组的第一个元素  就相当于指针数组了   错误说法,指针指向第一个元素   读取的时候是按照\0读取的字符串  所以会一直读
    pointFirst();
    //todo 第二种  指针指向数组
    pointArray();
}


void pointFirst() {

    char ch1[] = "zxcvbn";

    char *ch2 = &(ch1[0]);

    printf("%s\n",ch2);
}

void pointArray() {

    char ch1[] = "qwerty";

    char *ch2 = ch1;

    printf("%s\n",ch2);
}




