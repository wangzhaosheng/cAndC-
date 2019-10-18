//
// Created by wangzhaosheng on 19-10-15.
//


#include <cstdio>

struct ddd {
    int age;
};

int add(int a, int b) {
    return a + b;
}

typedef int(MY_ADD)(int,int);

int main() {

    //todo c++有重载 跟java一样 ，c中没有重载，只要方法名字相同就报错

    ddd a;//c中前面必须加struct   c++ 不用
    a.age;//结构体引用用箭头访问变量   结构体直接用点   这一点c跟c++一样


    MY_ADD * add1 = NULL;
    add1=add;
    int c=add1(2,3);


    int m=4;
    int * d =&m;
}