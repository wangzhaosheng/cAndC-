//
// Created by wangzhaosheng on 19-10-14.
// todo 返回值是引用的情况


#include <iostream>

int& getA();
int get();


int main101418(){

    int b =get();
    std::cout<<b<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<b<<std::endl;
//    std::cout<<"b"+b<<std::endl;  //todo 不能拼接字符串打印

    int c =getA();
    std::cout<<c<<std::endl;

}


int &getA() {
//    int a =10;  todo 如果这么返回会出现异常情况，栈中的数据方法运行完后就回收了
   static int a =10; //.todo 这个不存在栈中  没问题
    return a;
}

int get() {
    int a =10;
    return a;
}



