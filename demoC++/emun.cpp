//
// Created by wangzhaosheng on 19-10-10.
//


#include <iostream>

enum season{
    SPRI,
    SUMMER,
    AUTO=2,//用等于号赋值
    WIN
};
int main10101439(){
    season season1 = AUTO;//todo c++只能用枚举常量赋值  不能用数字赋值   c都可以

    std::cout<<season1<<std::endl;
    return 0;

}

