//
// Created by wangzhaosheng on 19-10-15.
//


#include <cstdio>
#include <sys/stat.h>
#include "Stud.h"


//#include <stdio.h>
//#include <unistd.h>
//#include <sys/stat.h>
//#include <sys/types.h>
//
//#include <stdlib.h>
#include <time.h>

struct ddd {
    int age;
};

int add(int a, int b) {

    return a + b;
}

typedef int(MY_ADD)(int, int);

Stud& getSt() {
//    Stud stud(20);//  可以       栈中开辟空间
//    Stud stud2(); //也可以    栈中开辟空间
//    new Stud; todo 不要用不带括号的new 有坑
    Stud *a = new Stud(); //也可以    堆中开辟空间   todo 只有new 创建的对象才走构造，回收才走析构。上面创建的都不走
//    delete a;//todo 不主动调用是不会销毁释放的，这个不是栈
    cout << "getSt end" << endl;
    return *a;//todo !!! 返回的匿名对象没有进行拷贝构造或析构，有可能是编译器优化了
}
int main1028() {

    //todo c++有重载 跟java一样 ，c中没有重载，只要方法名字相同就报错

    ddd a;//c中前面必须加struct   c++ 不用
    a.age;//结构体引用用箭头访问变量   结构体直接用点   这一点c跟c++一样

    MY_ADD *add1 = NULL;
    add1 = add;
    int c = add1(2, 3);
//    Stud *ss = new Stud;

    int m = 4;
    int *d = &m;

//    Stud s(10);
//
//    Stud s1(s);
//    Stud s2 = s;//todo 调用了s2的拷贝构造函数  如果先定义s2再让他等于s，就不是调用s2的拷贝构造函数了
//
//    s.~Stud();//调用析构函数
//   getSt();
//   Stud stud =getSt();
//   delete &stud;

    Stud stud;
    Stud stud1(stud);//拷贝构造函数

//    cout << "getSt end Android" << endl;
//    struct stat buf;
//    int result;
//
//    //获得文件状态信息
//
//    result = stat("/home/wangzhaosheng/file/b.txt", &buf);
//
//    //显示文件状态信息
//
//    if (result != 0) {
//        perror("显示文件状态信息出错");//并提示出错的原因，如No such file or directory（无此文件或索引）
//    } else {
//
////        printf("文件大小: %d", buf.st_size);
//        printf("文件创建时间: %s", ctime(&buf.st_ctime));
//        printf("访问日期: %s", ctime(&buf.st_atime));
//        printf("最后修改日期: %s", ctime(&buf.st_mtime));
//
//    }


}

