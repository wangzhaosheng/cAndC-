//
// Created by wangzhaosheng on 19-10-15.

//一种最简单的宏的形式如下：
//#define   宏名   替换文本

#define NUM  1  // todo  1不用等于号   2不用分号

#define SUM(X, Y) ((X)+(Y)) //todo   有参宏  C语言中宏是可以有参数的，这样的宏就成了外形与函数相似的类函数宏


#define M "hello the \
world"  //todo 拐弯要用反斜线

inline int neiLianFunction(int a, int b =1, int c=2 );

int main10152012() {
    int a = NUM;

    int b = SUM(2, 3);//b=5

    char *ch = M;

    int m =neiLianFunction(2);
}

void neiLianFunction(int i) {

}

inline int neiLianFunction(int a, int b  , int c) { //1 内联方法  2  默认参数  从左往右，一旦一个有默认值，后面的一定得有默认值
    return a+b+c;
}