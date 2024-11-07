#include <stdio.h>

int main() {
    char ch;
    printf("請輸入一個字母: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;
        printf("小寫字母為: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        ch -= 32;
        printf("大寫字母為: %c\n", ch);
    }else {
        printf("輸入錯了喔");
    }

    return 0;
}