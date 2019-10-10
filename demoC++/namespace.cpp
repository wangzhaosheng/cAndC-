//
// Created by wangzhaosheng on 19-10-10.
//

#include <iostream>
#include "namespace.h"
namespace spaceA{
    int g_a =1;
}
using namespace std;//常用的声明方式

using namespace spaceA;//todo 必须在命名空间的下面


//第二种声明方式
//using std::cout;
//using std::endl;
int main10101429(){
    cout << "Hello, World!11111" << endl;
    g_a=2;

    bool flag = false;//新增了boo类型在c++

    return 0;
}



