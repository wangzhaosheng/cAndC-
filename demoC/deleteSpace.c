//
// Created by wangzhaosheng on 19-9-11.
//
#include "deleteSpace.h"
#include <stdio.h>
#include <memory.h>


void main09121151() {

    char ch1[] = "q w e r  ty   ui";

    deleteSpace(ch1);
}


void deleteSpace(const char *ch) { //todo const修饰 char *代表不能修改指针指向的值,  const修饰ch,不能修改ch指向的字符数组

//    char *first;  //todo 必须用下面数组的方式定义  不能用这种指针的方式定义
    char first[100];
    int i = 0;
    int j = 0;
    while (ch[i] != '\0') {
        if (ch[i] != ' ') {
            *(first + j) = ch[i];
            j++;
        }
        i++;
    }
    printf("%s\n", first);

}
