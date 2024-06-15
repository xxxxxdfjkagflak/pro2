#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    int y;
    int z;

    printf("10의 자리 숫자를 입력하십시오 (10, 20, 30, 40, 50, 60, 70, 80): ");
    scanf("%d", &x);

    if (x != 10 && x != 20 && x != 30 && x != 40 && x != 50 && x != 60 && x != 70 && x != 80) {
        printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    printf("1의 자리 숫자를 입력하십시오 (1~9): ");
    scanf("%d", &y);

    if (y < 1 || y > 9) {
        printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    if (y % 2 == 0) { // 입력받은 1의 자리가 짝수인지 확인
        printf("짝수는 자리가 다 찼습니다.\n");
        return 1;
    }

    z = x + y;

    printf("나의 자리: %d\n", z);

    return 0;
}
