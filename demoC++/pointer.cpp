//
// Created by wangzhaosheng on 19-10-14.
// 指针的传递跟二级指针的传递，还有引用的传递

#include <malloc.h>
#include <iostream>
struct persion {
    int age;
};
void pointerDeliver();

void changeP(persion *pPersion);

void quoteDeliver();

void changQuote(persion * & pPersion);

void freeReference(persion * & pPersion) ;

int main10151146() {

    pointerDeliver();

    quoteDeliver();//传递引用
}




using namespace std;

//todo 传递指针
void pointerDeliver() {

    struct persion *p = (struct persion *) malloc(sizeof(struct persion) * 3);//todo c++中必须强制转换   c中不用
    p->age =4;
    changeP(p);
    cout<< p->age<<endl;//8或4

    //释放指针
    free(p);

}

void changeP(persion *pPersion) {
//    pPersion = (struct persion *) malloc(sizeof(struct persion) * 3);  todo 如果不改变指向，改变他的值就是改变外面的p的值，如果改变指向，就是改变的里面的p的值，这个p是外面p的拷贝
    pPersion->age=8;
}

//传递指针需要传递二级指针才能修改一级指针，传递引用不用二级
void quoteDeliver() {
    struct persion *p = (struct persion *) malloc(sizeof(struct persion) * 3);
    p->age =4;
    changQuote(p);
    cout<< p->age<<endl;//一直是8

    //释放引用

    freeReference(p);
}

void changQuote(persion * & pPersion) { //todo 注意看参数类型   相当于二级指针
    pPersion = (struct persion *) malloc(sizeof(struct persion) * 3);
    pPersion->age=8;
}

void freeReference(persion * & pPersion) { //todo 注意看参数类型   相当于二级指针
    if(pPersion!=NULL){
        free(pPersion);
        pPersion=NULL;
    }

}
