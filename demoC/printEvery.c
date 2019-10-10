//
// Created by wangzhaosheng on 19-9-11.
//

#include <stdio.h>
//todo 以下打印都没毛病
void mainPrint() {
    char ch1[] = "qwertyui";
    char *ch2 = ch1;//todo 这种方式定义的字符串都可以修改   如果用指针直接指向字符串就不能修改字符串
    printf("%s", ch1);  //todo 打印整体字符串不用*号,只打印一个字符用*号
    printf("\n");
    printf("%s", ch2);//todo 打印整体字符串不用*号,只打印一个字符用*号
    printf("\n");
    for (int i = 0; i < sizeof(ch1) / sizeof(char); ++i) {
        printf("%c", ch1[i]);
        printf("%c", *(ch1 + i));//todo 打印整体字符串不用*号,只打印一个字符用*号
        printf("%c", ch2[i]);
        printf("%c", *(ch2 + i));
    }
    printf("\n");
}