//
// Created by wangzhaosheng on 19-9-16.
//

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void mallocFun();

void memsetFun();

void memmoveFun();

void passPoint1();

void passPoint2();

void passPoint3();

void changePoint1(int *pInt);


void changePoint2(int **pInt);

void changePoint3(int *pInt);

void main09171045() {
    mallocFun();

    memsetFun();

    memmoveFun();

    //指针传递易错的问题
    passPoint1();
    passPoint2();
    passPoint3();

}


void passPoint1() {


    int *p = NULL;
    //todo 传递指针是值传递
    changePoint1(p);

    printf("%p\n", p);
}


void passPoint2() {

    int *p = NULL;
    //todo 传递指针地址才是引用传递
    changePoint2(&p);
    printf("%p\n", p);
}


void passPoint3() {
    int a = 5;
    int *p = &a;
    //todo 传递指针是值传递   解释: https://zhuanlan.zhihu.com/p/70209061
    changePoint3(p);
    printf("%d\n", *p);
}


void changePoint1(int *p) {
    p = malloc(sizeof(int) * 2);
}

void changePoint2(int **p) {
    *p = malloc(sizeof(int) * 2);
}

void changePoint3(int *p) {
    //解释: https://zhuanlan.zhihu.com/p/70209061
    p = malloc(sizeof(int) * 2);
    *p = 100;
}


void memmoveFun() {

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8, 9};
    memmove(arr2, arr1, sizeof(int) * 2);

    for (int i = 0; i < 4; ++i) {
        printf("%d\n", arr1[i]);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", arr2[i]);
    }


}


void mallocFun() {
    //todo 分配的内容不能确定  一般用memset初始化
    int *p = malloc(sizeof(int) * 2);
    *p = 1;
    *(p + 1) = 2;
    for (int i = 0; i < 2; ++i) {
        printf("%d\n", p[i]);
    }

    free(p);
    *p = 3;
    for (int i = 0; i < 2; ++i) {
        printf("%d\n", p[i]);
    }
    p = NULL;
}

void memsetFun() {
    int *p = malloc(sizeof(int) * 2);
    memset(p, 0, sizeof(int) * 2);//todo 只对0有效  如果设置为1是针对每个字节设置为了1,就会有奇妙的结果出现

    for (int i = 0; i < 2; ++i) {
        printf("%d\n", p[i]);
    }

}