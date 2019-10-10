//
// Created by wangzhaosheng on 19-9-23.
//文件操作主要有文本文件的操作还有二进制文件的操作
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <sys/stat.h>
#include "structAll.h"

void textWrite();

void textRead();

void binaryFileWrite();

void textWriteUseFWrite();

void structWriteToFile();


void structReadFromFile();

void getFileInfo();

void main0930() {

//    textWrite();
//    textRead();

//    binaryFileWrite();

//    textWriteUseFWrite();

//    structWriteToFile();

//    structReadFromFile();

      //获取文件的信息,比如文件大小,根据文件大小来开辟堆空间,进一步拷贝
//      getFileInfo();

}


/**
 * 写入文本   必须是文本  不能是二进制文件
 */
void textWrite() {
//    FILE *file = fopen("~/file/b.txt", "w+");//todo 不能识别~  必须用绝对路径     w+ w都不要用,只要用这种方式打开,文件就会清空
    FILE *file = fopen("/home/wangzhaosheng/file/b.txt", "r+");//todo 不能识别~  必须用绝对路径
    if (file == NULL) {
        printf("打开文件失败\n");
    }

    char *ch = "abcd";
    fputs(ch, file);
    fputs("\n", file);
    fputs(ch, file);

    fclose(file);
}

/**
 * 读取文本   必须是文本  不能是二进制文件
 */
void textRead() {
    FILE *file = fopen("/home/wangzhaosheng/file/b.txt", "r+");//todo 不能识别~  必须用绝对路径
    if (file == NULL) {
        printf("打开文件失败\n");
    }
//   char * ch; //todo 这种不初始化的不可以   下面的两种都可以
//    char *ch = malloc(sizeof(ch) * 100);
    char *ch[10];
    while (!feof(file)) {
        memset(ch, 0, sizeof(char) * 10);  //todo  没有这个不行   feof判断,读完文件会多读一次,造成最后一次读没东西,会把之前的ch打印出来
        fgets(ch, 10, file);
        printf("%s\n", ch);
    }

    fclose(file);
}


/**
 * fread fwrite 操作的是二进制文件,当然也可以操作文本文件
 */
void binaryFileWrite() {

    FILE *file = fopen("/home/wangzhaosheng/file/lock.png",
                       "r+");  //todo  r 代表打开只读文件,r+ 代表打开可读可写   如果用r打开可读可写的没问题,如果用r+打开只读的会读不出来.  这两种打开方式都必须保证文件存在
    FILE *file2 = fopen("/home/wangzhaosheng/aaa/lock.png",
                        "w");   //todo  w  代表打开只写文件,w+ 代表打开可读可写, 两种打开方式都会把原有文件清0,若文件不存在创建这个文件

    if (file == NULL) {
        printf("打开file失败");
    }
    if (file2 == NULL) {
        printf("打开file2失败");
    }

    char *ch = malloc(sizeof(char) * 1024);

    while (!feof(file)) {
        memset(ch, 0, 1024);
        int size = fread(ch, sizeof(char), 1024, file);
        fwrite(ch, sizeof(char), size, file2);//todo 注意第三个参数   不能用1024 ,否则最后一次写入会多写入空数据,应该用实际读取的数据的长度,是fread返回的数据
    }


    fclose(file);
    fclose(file2);
}


/**
 * fwrite 写文本进文件
 */
void textWriteUseFWrite() {


    FILE *test = fopen("/home/wangzhaosheng/aaa/test.txt",
                       "w+");//todo r+打开的文件  可读可写   不是说打开的文件类型是可读可写的,但是r+打开的文件写入不会清空原有文件,只会覆盖原有文件的内容,如果要写的东西少于原有东西,就不会完全覆盖

    if (test == NULL) {
        printf("%s\n", "打开file2失败");
        return;
    }
    char *ch = "bnm";
    fwrite(ch, sizeof(char), strlen(ch), test);

    fclose(test);
}

void structWriteToFile() {

    struct student *s = malloc(sizeof(struct student) * 1);
    s->age = 20;
    strcpy(s->name, "老子");
    strcpy(s->addr, "地址");
    s->score = 100;
    FILE *file = fopen("/home/wangzhaosheng/file/dd.txt", "w+");
    fwrite(s, sizeof(struct student),1,file);
    fclose(file);
    free(s);
}



void structReadFromFile() {
    struct student *s = malloc(sizeof(struct student) * 1);
    FILE *file = fopen("/home/wangzhaosheng/file/dd.txt", "r");
    fread(s, sizeof(struct student),1,file);

    fclose(file);
    free(s);
}

/**
 * 获取文件的信息,比如文件大小,根据文件大小来开辟堆空间,进一步拷贝
 */
void getFileInfo() {
    struct stat * st = malloc(sizeof(struct stat));//获取文件信息  如文件大小  文件创建 修改日期等
    stat("/home/wangzhaosheng/file/lock.png",st);
    printf("%d\n",st->st_size);
    free(st);
}

