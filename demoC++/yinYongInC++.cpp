//
// Created by wangzhaosheng on 19-10-10.
//
//todo c++中的引用 (1声明就赋值   2 不可更改指向)  引用的本质是常指针   常量的特性是必须声明就赋值    所以就是常指针  类似 int * const a   注意const不是放到最前面

#include <iostream>

void change(int & p);

int main(){
    int a=3;
    int b =5;
    int & p =a;
    change(a);

    std::cout<< a<<std::endl;
    std::cout<< p<<std::endl;

}
//todo 这里传递是传递的引用    c中的传递都是值传递
void change(int & p){

    p=4;

}


