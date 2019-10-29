//
// Created by wangzhaosheng on 19-10-22.
// 类的头文件  一般写类的属性和方法的声明   在类的cpp文件中才实现类的方法
//#pragma once
#ifndef UNTITLED_STUD_H  //todo 跟上面的两者选一
#define UNTITLED_STUD_H


#include <clocale>
#include <stdlib.h>
#include <iostream>
#include <cstring>

using namespace std;

class Stud {
public:
    int age;

    char *ch;//todo 除非是 char ch[100]这种方式声明的字符串（已经开辟好了空间）；如果用指针声明的，需要开辟空间赋值，不能用等号赋值，否则会导致受被赋值的值的影响


    static int a;// static 静态成员变量  跟java中一样
    Stud();

    Stud(int age);

    Stud(char *ch) {
        this->ch = (char *) malloc(sizeof(100));//todo 是stdlib.h 下的  不是malloc.h下的
    }

    void setAge(int age1);

    ~Stud() {
//        if (ch != NULL) {
//            free(ch);//todo 这里并不是加了非空判断就行，如果ch 不是用malloc开辟的空间，不为null，而且free会报错
//            ch =NULL;
//
//        }

        if (ch != NULL) {
            delete[]ch;
        }
        cout << "调用了析构函数" << endl;
    }

    Stud(const Stud &annother) { //todo 拷贝构造参数形式
        cout << "调用了拷贝构造函数" << endl;
        this->age =annother.age;

        this->ch = new char[strlen(annother.ch)+1];
        strcpy(this->ch,annother.ch);

    }

    Stud &operator=(const Stud &annother) {
        cout << "调用了等号赋值函数" << endl;
        this->age = annother.age;
        if (this != &annother) { //避免自赋值

            if (ch != NULL) {

            }


        }

        return *this;

    }


};


#endif //UNTITLED_STUD_H
