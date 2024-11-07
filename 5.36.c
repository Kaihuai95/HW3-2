#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移到 %c\n", source, target);
    } else {
        hanoi(n - 1, source, target, auxiliary); // 將 n-1 個圓盤移到輔助塔
        printf("將圓盤 %d 從 %c 移到 %c\n", n, source, target); // 將第 n 個圓盤移到目標塔
        hanoi(n - 1, auxiliary, source, target); // 將 n-1 個圓盤從輔助塔移到目標塔
    }
}

int main() {
    int rings = 4; // 圓盤數量
    printf("四環河內塔的移動步驟：\n");
    hanoi(rings, 'A', 'B', 'C'); // 來源塔為 A，輔助塔為 B，目標塔為 C
    return 0;
}
