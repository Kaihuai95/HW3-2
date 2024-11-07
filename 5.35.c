#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("請輸入一個數 n: ");
    scanf("%d", &n);

    int result = fibonacci(n); // 計算第 n 項
    printf("第 %d 項的費氏數列值為: %d\n", n, result);

    return 0;
}