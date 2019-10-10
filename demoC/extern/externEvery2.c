//
// Created by wangzhaosheng on 19-9-16.
//

#include <stdio.h>
#include "externEvery2.h"
#include "externEvery.h"

void changeB();
void main09161417(){
    printf("%d\n",b);
    printf("%p\n",&b);
    changeB();
    printf("%d\n",b);
    printf("%p\n",&b);
}