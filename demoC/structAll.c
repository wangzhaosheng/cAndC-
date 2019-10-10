//
// Created by wangzhaosheng on 19-9-17.
// 结构体应该在.h文件中声明  这里声明在当前文件也可以
//

#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include "structAll.h"




void oneStudent();

void multipleStudent();

void multipleStudentMalloc();

void multipleStruct();

void structParame();

void changeStruct(struct student student);

void changStructPointer(struct student *pStudent);

void structConst();

typedef struct student ss;

void main0920() {
//    oneStudent();
//    multipleStudent();
//    multipleStudentMalloc();
//    multipleStruct();
//    structParame();
    structConst();

}


void oneStudent() {
    struct student stu = {"张三", 18, 100, "了深刻的接口来福建省地方"}; //todo 最常用的赋值方式
//    strcpy(stu.name,"张三");
//    stu.age=18;
//    stu.score=100;
//    strcpy(stu.addr,"了深刻的接口来福建省地方");


    printf("%s\n", stu.name);
    printf("%d\n", stu.age);
    printf("%d\n", stu.score);
    printf("%s\n", stu.addr);
}

void multipleStudent() {
    struct student stuList[] = {
            {"张三", 25, 100, "了深刻的接口来福建省地方"},
            {"李四", 18, 48,  "领导说减肥了"},
            {"王五", 39, 67,  "d菲哥"}
    };

    printf("%d\n", sizeof(stuList));
    printf("%d\n", sizeof(stuList[0]));

    for (int i = 0; i < 3; ++i) {
        struct student stu = stuList[i];
        printf("结构体长度%d\n", sizeof(stu));
        printf("%s\n", stu.name);
        printf("%d\n", stu.age);
        printf("%d\n", stu.score);
        printf("%s\n", stu.addr);
    }

}

typedef struct student ss;

void multipleStudentMalloc() {

    struct student student1 = {"张三", 18, 100, "了深刻的接口来福建省地方"};

    printf("%p\n", &student1);

    struct student *stu = malloc(sizeof(struct student) * 3);//这种必须用具体值赋值   不能用结构体直接赋值了
    printf("%p\n", stu);

//    *stu=student1;//todo 这种赋值方式  指针stu的值完全一样
    stu = &student1;//todo 这种赋值方式   stu 的地址跟student1一样了
    printf("%p\n", stu);

//    int a =-+"%p\n", b);

}


/**
 * 嵌套结构体
 */
struct liuShui {
    int jinE;
    char bianHao[20];
};

struct yinHangKa {
    int num;
    struct liuShui bb;

};

void multipleStruct() {

    struct yinHangKa aa = {23, {1000, "编号"}};//内层括号加不加都可以

    struct yinHangKa cc = aa;//todo  更改cc  aa并不会更改

    printf("%d\n", aa.num);
    printf("%d\n", aa.bb.jinE);
    printf("%s\n", aa.bb.bianHao);
}

//结构体也是值传递
void structParame() {
    struct student ss = {"松江", 32, 45, "来思考地方"};

//    changeStruct(ss);

    changStructPointer(&ss);

    printf("%s\n", ss.name);

}

void changStructPointer(struct student *pStudent) {
    strcpy(pStudent->name, "卢俊义");// todo name是字符指针   就会改变原来的值了   ->写法是结构体指针直接访问属性用的
}

void changeStruct(struct student student) {
    strcpy(student.name, "卢俊义");// todo 如果name是字符指针   就会改变原来的值了  这个是值传递

}


/**
 * const 修饰结构体
 */
void structConst() {
    ss const stu = {"张三", 18, 100, "了深刻的接口来福建省地方"};
    const ss stu1 = {"张三", 18, 100, "了深刻的接口来福建省地方"};
//     stu.age=20;   不能赋值
//    stu1.age = 20; 不能赋值

    ss *sPointer1 = &stu;
    sPointer1->age = 20;
    printf("%d\n", stu.age);//根据指针可以改const
    printf("%d\n", sPointer1->age);//根据指针可以改const

    //结构体指针 const 修饰
    ss stu3 = {"张三", 18, 100, "了深刻的接口来福建省地方"};
    const ss *sPointer2 = &stu3;
//    sPointer2 = &stu;  可以赋值
//    sPointer2->age =30; 不可以赋值
    ss *const sPointer3 = &stu3;
//        sPointer3 = &stu;  不可以赋值
//    sPointer3->age =30; //可以赋值
    ss **pointer4 = &sPointer3;
//    *pointer4 = &stu;// 可以  二级指针(多级指针)可以解决一切const问题
    (*pointer4)->age=70;
    printf("%d\n",stu3.age);


//todo  const修饰指针前后的情况都一样   对待结构体跟对待其他类型都一样     二级指针(多级指针)可以解决一切const问题
//    int a = 1;
//    const int *b;
//    *b = a;  这个不行
//    b = &a;  这个行

}