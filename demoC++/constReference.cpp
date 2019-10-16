//
// Created by wangzhaosheng on 19-10-15.
//

void change(const int *pInt);

void changeM(int m);

int main101514(){
    const int a =10;

//    int & b=a;    不行   这样赋值相当于别名可以修改，违背了a不可被修改的规则

//    int * c =&a; todo c中可以  c++不可以
    const int & b =a;//todo 对常量引用  必须用常量修饰的引用


    change(&a);


    int m =20;

    const int & n =m;

//    changeM(m);

}


void change(const int *pInt) {

//    *pInt =5;  c c++中都不可以
}


void changeM(int &m) {

}

