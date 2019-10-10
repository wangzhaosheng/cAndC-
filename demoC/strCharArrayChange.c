//
// Created by wangzhaosheng on 19-9-17.
//字符串   字符数组 是否可修改的问题
//

#include <stdio.h>

void changeCharArray();

void changeCharStr();

void changeCharPoint();

void changeCharPoint2();

void changeCharPoint3();

void main09171121() {
    changeCharArray();
    changeCharStr();
    changeCharPoint();
    changeCharPoint2();
    changeCharPoint3();
}

void changeCharPoint3() {
//    char * ch = {'q', 'w', 'e'}; todo  不能这么初始化  指针初始化必须是个独立的对象,指针不完全等同于数组
}

void changeCharPoint2() {
    char ch[] = "qwe";
    char *ch2 = ch;
    *(ch2 + 1) = 'y';// 可以修改  实质是数组

    for (int i = 0; i < 3; ++i) {
        printf("%c\n", ch2[i]);
    }
}

void changeCharPoint() {
    char *ch = "qwe";
//    *(ch+1) = 'y'; todo 不可修改  修改报错

    for (int i = 0; i < 3; ++i) {
        printf("%c\n", ch[i]);
    }
}

void changeCharStr() {
    //可以修改
    char ch[] = "qwe";
    ch[1] = 'y';

    for (int i = 0; i < 3; ++i) {
        printf("%c\n", ch[i]);
    }

}

void changeCharArray() {
    //可以修改
    char ch[] = {'q', 'w', 'e'};
    ch[1] = 'y';

    for (int i = 0; i < 3; ++i) {
        printf("%c\n", ch[i]);
    }

}

