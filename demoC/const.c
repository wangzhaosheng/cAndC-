//
// Created by wangzhaosheng on 19-9-12.
//todo const修饰符相关
//

#include <stdio.h>

void canChange3();

void canChange(const char *ch);

void main0912() {

    canChange3();
    char ch[] = "qwer";
    char *ch1 = ch;
//    char * ch1 ="wqer";//todo 如果 用这种方式赋值,字符串存储在常量区,就彻底不能改了,任何指针都不能改
    canChange(ch1);
}

void canChange3() {

    const int a = 1;
//    a=2;  语法错误

//todo 一个常量不能变  可以根据指针让他变
    int *b = &a;//只能写指针,如果写死成1  就不能改了  1放在常量区了   //todo c++中情况不一样，c++彻底不能修改a
    *b = 2;
    printf("%d\n", a);


}

void canChange(const char *ch) { //todo const修饰 char *代表不能修改指针指向的值的内容,  const修饰ch,不能修改ch的指向
    ch="sdf";
//    *ch ='1';语法错误

    char *ch3 = ch;//todo 虽然ch中的值被const修饰不能改,但是用其他指针指向他又能改了
    ch3[1] = 'm';
    printf("%s\n", ch);
    printf("%s\n", ch3);

}

void canChange(const char *ch);


void canChange2(char *const ch) { //todo const修饰 char *代表不能修改指针指向的值,  const修饰ch,不能修改ch指向的字符数组

//    ch = "sdf"; 语法错误


}


