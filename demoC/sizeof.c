//
// Created by wangzhaosheng on 19-9-11.
//

#include <stdio.h>
#include <memory.h>

void main09172001(){
    char ch[]={'s','d'};//todo sizeof  2
    char ch1[]="sf";    //todo sizeof  3 默认带了\0


    int a=sizeof(ch);  //todo sizeof(数组)  得到的数组内元素的个数,如果ch数组 1如果是{}类型 得到的是数组内的个数,如果是"abcd"类型的char数组,得到的是数组内元素个数+1,因为末尾自动填充了\0
    printf("%ld\n",a);
    printf("%ld\n",strlen(ch));//todo !!! c中不看怎么写  只看怎么读 ,读字符串的时候,多数都是找\0  找不到一直往下找

    for (int i = 0; i < 4; ++i) {
        printf("%c\n",ch[i]);
    }

    int b=sizeof(ch1);  //todo sizeof(数组)  得到的数组内元素的个数,如果ch数组 1如果是{}类型 得到的是数组内的个数,如果是"abcd"类型的char数组,得到的是数组内元素个数+1,因为末尾自动填充了\0
    printf("%ld\n",b);
    printf("%ld\n",strlen(ch1));

    int f = 9;
    int *m = &f;
    printf("%d\n", sizeof(m));//todo sizeof(指针)  得到的是指针本身所占的内存字节 不管指针p指向的是整型数据，还是字符型数据，short型数据，long型数据等  32位系统都是4,64位系统是8
    printf("%d\n", sizeof(f));//todo sizeof(数据类型)  得到的是该类型占的字节大小
    printf("%d\n", sizeof(9));//todo sizeof(数据)  得到的是该数据的类型占的字节大小





}