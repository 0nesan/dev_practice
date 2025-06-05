#include <stdio.h>

int main() {
    printf("기본 출력");

    int number = 42;
    float pi = 3.14159;
    double precise = 3.141592653589793;
    char letter = 'A';
    char text[] = "Hello";

    printf("=== 정수 출력 ===\n");
    printf("기본: %d\n", number);
    printf("8자리 우측정렬: %8d\n", number);
    printf("8자리 좌측정렬: %-8d|\n", number);
    printf("0으로 채움: %08d\n", number);
    printf("16진수: %x, %X\n", number, number);
    printf("8진수: %o\n", number);

    printf("\n=== 실수 출력 ===\n");
    printf("기본: %f\n", pi);
    printf("소수점 2자리: %.2f\n", pi);
    printf("과학적 표기: %e\n", pi);
    printf("g 형식: %g\n", pi);
    printf("double 정밀도: %.10f\n", precise);

    printf("\n=== 문자 출력 ===\n");
    printf("문자: %c\n", letter);
    printf("문자열: %s\n", text);
    printf("문자열 폭 지정: %10s|\n", text);
    printf("문자열 좌측정렬: %-10s|\n", text);

    return 0;
}

