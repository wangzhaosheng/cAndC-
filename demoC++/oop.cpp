//
// Created by wangzhaosheng on 19-10-17.
// c++的类跟结构体的唯一区别就是默认内部访问权限   类默认私有   结构体默认公有

#include <cstring>
#include <iostream>
#include "../demoC/structAll.h"

using namespace std;

class teacher {
public:
    int age;//默认私有
    char name[20];

    void syso() {
        cout << age << endl;
        cout << name << endl;
    }
};

struct tea {
    int age;//默认公有
    char name[20];

    void syso() {
        cout << age << endl;
        cout << name << endl;
    }
};

int main00() {

    teacher teacher1;
    teacher1.age = 21;
    strcpy(teacher1.name, "tony");
    teacher1.syso();
//    cout<<teacher1.age<<endl;
//    cout<<teacher1.name<<endl;

    tea tea1;
    tea1.age = 22;
    strcpy(tea1.name, "tonyyy");
    tea1.syso();

//    cout<<tea1.age<<endl;
//    cout<<tea1.name<<endl;
}

