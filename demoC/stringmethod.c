#include <memory.h>
#include <stdio.h>

void strcopy();

void strNCopy();

void strCat();

void strCompare();

void sScanf();

void strTok();

//
// Created by wangzhaosheng on 19-9-12.
//
void main09172052() {
    strcopy();

    strNCopy();

    strCat();

    strCompare();

//    sprintf(); 把字符串打印并且放到一个变量中

    sScanf();

//    strchr() 在一个字符串中查找一个字符  todo 如果找到返回第一次出现字符的地址   找不到返回NULL

//      strstr() 在一个字符串中查找一个字符串  todo 如果找到返回第一次出现字符串的地址   找不到返回NULL

    strTok();
}

void strTok() {
    char ch[] = "tre_wq_ll";
    char *ch1 = strtok(ch, "_"); //todo 返回的是第一个被切割的字符串的指针  而且ch也变成了第一个字符串tre
    printf("%s\n", ch1);
    while (ch1=strtok(NULL,"_")){ //todo 解释看源码 (利用局部静态变量根据是否传的是NULL做逻辑)  https://codeday.me/bug/20190217/684435.html
        printf("%s\n", ch1);
    }

    printf("%s\n", ch);




}

void sScanf() {
    int a;
    int b;
    int c;
    char ch[] = "1+2=3";
    sscanf(ch, "%d+%d=%d", &a, &b, &c);

}

void strCompare() {

    printf("%d\n", strcmp("fsdf", "fmdf"));// todo 返回0代表相等   不为0有多种情况,根据系统不同返回不同
    printf("%d\n", strncmp("fsdf", "fmdf", 1));// todo  比较前n个字符  返回0代表相等   不为0有多种情况,根据系统不同返回不同



}

void strCat() {
    //todo  这里是追加到ch1上面,不是把两个字符串生成一个新字符串,所有 ch1定义的时候就要足够长,够追加第二个的
    char ch1[100] = "jkylk";
    char *ch2 = "df";
    printf("%s\n", strcat(ch1, ch2)); //todo  还有追加指定个数的方法 strncat()

}

void strNCopy() {

    char *ch1 = "qwer";
    char ch[1000];
    //todo strcpy
    strncpy(ch, ch1, 2);
    printf("%s\n", ch);

}

void strcopy() {
    char *ch1 = "fsdfsdf";
    char ch[100];
    //todo strcpy
    strcpy(ch, ch1);
    printf("%s\n", ch);
}
