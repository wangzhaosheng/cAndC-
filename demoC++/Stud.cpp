//
// Created by wangzhaosheng on 19-10-22.
//

#include "Stud.h"

void Stud::setAge(int age1) { //实现头文件中的方法

    age=age1;

}

Stud::Stud() {
//    this->ch =(char *)malloc(sizeof(100));
    this->ch = new char[100];
    age = 2;
    cout<<"调用了无参数构造函数"<<endl;
}

Stud::Stud(int age) {
    this->ch =(char *)malloc(sizeof(100));
//    this->ch = new char[100];
 this->age =age;
    cout<<"调用了有参数构造函数"<<endl;
}
int Stud::a=1; //todo 静态成员变量必须在类外面赋值
