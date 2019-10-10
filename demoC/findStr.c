//
// Created by wangzhaosheng on 19-9-12.
//

#include <stdio.h>
#include <memory.h>

int findStr(char *src, char *str);

void main09121829() {

    char *src = "abcqwerjklabcdqweraaaakljdfmndfsdf";
    char *str = "abcd";

    int i=findStr(src, str);
    printf("%d\n",i);
}

int findStr(char *src, char *str) {
    int i = 0;

    while (src[i] != '\0') {

        int j = 0;
        while (str[j] != '\0' && src[i + j] != '\0' && (str[j] == src[i + j])) {
            j++;
        }
        if (str[j] == '\0') {
            return i;
        }

        i++;
    }
}

