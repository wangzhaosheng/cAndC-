//
// Created by wangzhaosheng on 19-9-9.
//
#include <stdio.h>
#include <memory.h>


int main0910() {
    printf("%d\n", 1);
//   printf("sdf\0sdfd");

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};
    int *arr[] = {a, b, c};//todo 这里有数组的方括号 []
    int **p = arr;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\n", *(*(p + i) + j));
        }
    }

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {

            printf("%d\n",p[i][j]);

        }
    }



//      int m[1]={2};
//      printf("%d\n",**p);
//      printf("%d\n",*p[0]);

//   for (int i = 0; i < 3; ++i) {
//      for (int j = 0; j <3; ++j) {
//         printf("%d\n", *(*(p+i)+j));
//      }
//   }



}
