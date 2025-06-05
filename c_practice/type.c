#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <stdbool.h>

int main() {
    printf("===============================================\n");
    printf("         C언어 데이터 타입 완전 정리\n");
    printf("===============================================\n\n");

    // ===========================================
    // 1. 정수형 데이터 타입
    // ===========================================
    printf("📊 === 정수형 데이터 타입 ===\n");

    int number = 42;
    printf("int 크기: %lu 바이트\n", sizeof(int));
    printf("int 최솟값: %d\n", INT_MIN);
    printf("int 최댓값: %d\n", INT_MAX);
    printf("저장된 값: %d\n\n", number);

    // 기본 정수형
    char c = 'A';                          // 1바이트 (-128 ~ 127)
    short s = 32767;                       // 2바이트 (-32,768 ~ 32,767)
    int i = 2147483647;                    // 4바이트 (-2^31 ~ 2^31-1)
    long l = 2147483647L;                  // 4바이트 이상
    long long ll = 9223372036854775807LL;  // 8바이트

    printf("char:      %2lu바이트 (%d ~ %d) → 값: %d ('%c')\n",
           sizeof(c), CHAR_MIN, CHAR_MAX, c, c);
    printf("short:     %2lu바이트 (%d ~ %d) → 값: %d\n",
           sizeof(s), SHRT_MIN, SHRT_MAX, s);
    printf("int:       %2lu바이트 (%d ~ %d) → 값: %d\n",
           sizeof(i), INT_MIN, INT_MAX, i);
    printf("long:      %2lu바이트 (%ld ~ %ld) → 값: %ld\n",
           sizeof(l), LONG_MIN, LONG_MAX, l);
    printf("long long: %2lu바이트 (%lld ~ %lld) → 값: %lld\n\n",
           sizeof(ll), LLONG_MIN, LLONG_MAX, ll);

    // 부호 없는 정수형
    printf("🔢 === 부호 없는 정수형 ===\n");
    unsigned char uc = 255;         // 0 ~ 255
    unsigned short us = 65535;      // 0 ~ 65,535
    unsigned int ui = 4294967295U;  // 0 ~ 2^32-1
    unsigned long ul = 4294967295UL;// 0 ~ 2^32-1 이상
    unsigned long long ull = 18446744073709551615ULL; // 0 ~ 2^64-1

    printf("unsigned char:      %2lu바이트 (0 ~ %u) → 값: %u\n",
           sizeof(uc), UCHAR_MAX, uc);
    printf("unsigned short:     %2lu바이트 (0 ~ %u) → 값: %u\n",
           sizeof(us), USHRT_MAX, us);
    printf("unsigned int:       %2lu바이트 (0 ~ %u) → 값: %u\n",
           sizeof(ui), UINT_MAX, ui);
    printf("unsigned long:      %2lu바이트 (0 ~ %lu) → 값: %lu\n",
           sizeof(ul), ULONG_MAX, ul);
    printf("unsigned long long: %2lu바이트 (0 ~ %llu) → 값: %llu\n\n",
           sizeof(ull), ULLONG_MAX, ull);

    // ===========================================
    // 2. 실수형 데이터 타입
    // ===========================================
    printf("💫 === 실수형 데이터 타입 ===\n");

    float pi = 3.14159f;                    // f 접미사 권장
    float scientific = 1.23e-4f;           // 과학적 표기법
    double precise_pi = 3.141592653589793; // 배정밀도
    long double extended_pi = 3.1415926535897932384626433832795L; // 확장 정밀도

    printf("float 크기: %lu 바이트\n", sizeof(float));
    printf("float 정밀도: %d 자리\n", FLT_DIG);
    printf("float 범위: %e ~ %e\n", FLT_MIN, FLT_MAX);
    printf("PI 값: %.6f\n", pi);
    printf("과학적 표기: %.6f (%.6e)\n\n", scientific, scientific);

    printf("double 크기: %lu 바이트\n", sizeof(double));
    printf("double 정밀도: %d 자리\n", DBL_DIG);
    printf("double 범위: %e ~ %e\n", DBL_MIN, DBL_MAX);
    printf("정밀한 PI: %.15f\n\n", precise_pi);

    printf("long double 크기: %lu 바이트\n", sizeof(long double));
    printf("long double 정밀도: %d 자리\n", LDBL_DIG);
    printf("확장 정밀도 PI: %.19Lf\n\n", extended_pi);

    // float vs double 정밀도 비교
    printf("🔍 === 정밀도 비교 ===\n");
    float f_pi = 3.141592653589793f;
    double d_pi = 3.141592653589793;

    printf("float PI:  %.15f (7자리 정밀도)\n", f_pi);
    printf("double PI: %.15f (15자리 정밀도)\n\n", d_pi);

    // ===========================================
    // 3. 문자형 데이터 타입
    // ===========================================
    printf("📝 === 문자형 데이터 타입 ===\n");

    // 기본 문자
    char grade = 'A';
    char symbol = '@';
    char newline = '\n';
    char tab = '\t';

    // ASCII 코드로 저장
    char ascii_A = 65;        // 'A'와 동일
    char ascii_zero = 48;     // '0'과 동일

    printf("문자 '%c'의 ASCII 코드: %d\n", grade, grade);
    printf("문자 '%c'의 ASCII 코드: %d\n", symbol, symbol);
    printf("ASCII 65로 저장한 문자: '%c'\n", ascii_A);
    printf("ASCII 48로 저장한 문자: '%c'\n", ascii_zero);

    // 이스케이프 시퀀스
    printf("\n이스케이프 시퀀스 예시:\n");
    printf("줄바꿈: 첫째줄\\n둘째줄\n");
    printf("탭 문자: A\\tB → A\tB\n");
    printf("백슬래시: \\\\\n");
    printf("따옴표: \\' → ' / \\\" → \"\n");

    // 문자열 (문자 배열)
    printf("\n📚 === 문자열 (문자 배열) ===\n");
    char name[20] = "Hello";
    char message[] = "C Programming";  // 크기 자동 계산
    char greeting[50] = {'H', 'i', '\0'}; // 개별 문자로 초기화

    printf("이름: \"%s\" (길이: %lu)\n", name, strlen(name));
    printf("메시지: \"%s\" (길이: %lu)\n", message, strlen(message));
    printf("인사: \"%s\" (길이: %lu)\n", greeting, strlen(greeting));
    printf("문자열 배열 크기: name[%lu], message[%lu], greeting[%lu]\n\n",
           sizeof(name), sizeof(message), sizeof(greeting));

    // ===========================================
    // 4. 부울형 데이터 타입 (C99 이후)
    // ===========================================
    printf("✅ === 부울형 데이터 타입 ===\n");

    bool is_true = true;
    bool is_false = false;
    _Bool another_bool = 1;  // _Bool은 C99 표준

    printf("bool 크기: %lu 바이트\n", sizeof(bool));
    printf("true 값: %d\n", is_true);
    printf("false 값: %d\n", is_false);
    printf("_Bool 값: %d\n\n", another_bool);

    // ===========================================
    // 5. 포인터 데이터 타입
    // ===========================================
    printf("👉 === 포인터 데이터 타입 ===\n");

    int value = 100;
    int* ptr = &value;
    char* str_ptr = name;
    void* void_ptr = &value;

    printf("포인터 크기: %lu 바이트 (시스템 의존적)\n", sizeof(ptr));
    printf("int 변수 주소: %p\n", (void*)&value);
    printf("int 포인터 값: %p\n", (void*)ptr);
    printf("int 포인터가 가리키는 값: %d\n", *ptr);
    printf("문자열 포인터: %p → \"%s\"\n", (void*)str_ptr, str_ptr);
    printf("void 포인터: %p\n\n", void_ptr);

    // ===========================================
    // 6. 열거형 (enum)
    // ===========================================
    printf("🏷️  === 열거형 (enum) ===\n");

    enum Color {RED, GREEN, BLUE};
    enum Status {STOPPED = 0, RUNNING = 1, PAUSED = 2};

    enum Color favorite_color = GREEN;
    enum Status current_status = RUNNING;

    printf("enum 크기: %lu 바이트\n", sizeof(enum Color));
    printf("RED: %d, GREEN: %d, BLUE: %d\n", RED, GREEN, BLUE);
    printf("선택한 색상: %d (GREEN)\n", favorite_color);
    printf("현재 상태: %d (RUNNING)\n\n", current_status);

    // ===========================================
    // 7. 상수와 리터럴
    // ===========================================
    printf("💎 === 상수와 리터럴 ===\n");

    const int MAX_SIZE = 100;          // const 상수
    #define PI_VALUE 3.14159           // 매크로 상수

    // 다양한 리터럴
    int decimal = 42;        // 10진수
    int octal = 052;         // 8진수 (앞에 0)
    int hexadecimal = 0x2A;  // 16진수 (앞에 0x)
    int binary = 0b101010;   // 2진수 (C23/GCC 확장)

    printf("const 상수: %d\n", MAX_SIZE);
    printf("매크로 상수: %.5f\n", PI_VALUE);
    printf("10진수: %d\n", decimal);
    printf("8진수 052: %d (10진수)\n", octal);
    printf("16진수 0x2A: %d (10진수)\n", hexadecimal);
    printf("2진수 0b101010: %d (10진수)\n\n", binary);

    // ===========================================
    // 8. 크기 비교 및 메모리 사용량
    // ===========================================
    printf("📏 === 전체 데이터 타입 크기 비교 ===\n");
    printf("┌─────────────────┬──────────┬────────────────┐\n");
    printf("│   데이터 타입   │   크기   │      범위      │\n");
    printf("├─────────────────┼──────────┼────────────────┤\n");
    printf("│ char            │ %6lu바이트 │ %5d ~ %6d │\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("│ unsigned char   │ %6lu바이트 │ %5d ~ %6u │\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("│ short           │ %6lu바이트 │ %5d ~ %6d │\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("│ unsigned short  │ %6lu바이트 │ %5d ~ %6u │\n", sizeof(unsigned short), 0, USHRT_MAX);
    printf("│ int             │ %6lu바이트 │       huge     │\n", sizeof(int));
    printf("│ unsigned int    │ %6lu바이트 │       huge     │\n", sizeof(unsigned int));
    printf("│ long            │ %6lu바이트 │       huge     │\n", sizeof(long));
    printf("│ long long       │ %6lu바이트 │       huge     │\n", sizeof(long long));
    printf("│ float           │ %6lu바이트 │ %5d자리 정밀도 │\n", sizeof(float), FLT_DIG);
    printf("│ double          │ %6lu바이트 │ %5d자리 정밀도 │\n", sizeof(double), DBL_DIG);
    printf("│ long double     │ %6lu바이트 │ %5d자리 정밀도 │\n", sizeof(long double), LDBL_DIG);
    printf("│ bool            │ %6lu바이트 │    true/false  │\n", sizeof(bool));
    printf("│ pointer         │ %6lu바이트 │   주소 저장    │\n", sizeof(void*));
    printf("└─────────────────┴──────────┴────────────────┘\n\n");

    // ===========================================
    // 9. 타입 변환 (Type Casting)
    // ===========================================
    printf("🔄 === 타입 변환 (Type Casting) ===\n");

    // 암시적 변환 (자동)
    int int_num = 10;
    float float_result = int_num;  // int → float 자동 변환

    // 명시적 변환 (강제)
    float float_num = 9.8f;
    int int_result = (int)float_num;  // float → int 강제 변환

    // 산술 연산에서의 변환
    int a = 5, b = 2;
    float division1 = a / b;           // 정수 나눗셈 → 2.0
    float division2 = (float)a / b;    // 실수 나눗셈 → 2.5

    printf("암시적 변환: int %d → float %.1f\n", int_num, float_result);
    printf("명시적 변환: float %.1f → int %d\n", float_num, int_result);
    printf("정수 나눗셈: %d / %d = %.1f\n", a, b, division1);
    printf("실수 나눗셈: %d / %d = %.1f\n\n", a, b, division2);

    // ===========================================
    // 10. 실무 사용 가이드
    // ===========================================
    printf("💡 === 실무 사용 가이드 ===\n");
    printf("📌 용도별 데이터 타입 선택:\n");
    printf("• 일반적인 정수 → int\n");
    printf("• 큰 정수 (파일 크기, 인구 등) → long long\n");
    printf("• 0~255 범위 (색상, 나이 등) → unsigned char\n");
    printf("• 일반적인 실수 계산 → double (권장)\n");
    printf("• 메모리 절약이 중요한 실수 → float\n");
    printf("• 문자 하나 → char\n");
    printf("• 문자열 → char 배열\n");
    printf("• 참/거짓 → bool\n");
    printf("• 메모리 주소 → 포인터\n\n");

    printf("⚠️  주의사항:\n");
    printf("• float보다 double을 권장 (정밀도)\n");
    printf("• unsigned 타입 사용 시 음수 주의\n");
    printf("• 배열 크기는 컴파일 시점에 결정\n");
    printf("• 포인터는 초기화 후 사용\n");
    printf("• 문자열 끝에는 항상 \\0 필요\n\n");

    printf("===============================================\n");
    printf("           데이터 타입 정리 완료! 🎉\n");
    printf("===============================================\n");

    return 0;
}

// 데이터 타입 선택 가이드
// 1. 카운터, 인덱스 → int
int student_count = 30;
int array_index = 0;

// 2. 큰 정수 → long long
long long population = 51780579; // 대한민국 인구
long long file_size = 2147483648LL; // 2GB

// 3. 0~255 범위 → unsigned char
unsigned char rgb_red = 255;
unsigned char age = 25;

// 4. 일반적인 계산 → double (float보다 정밀)
double price = 19.99;
double pi = 3.141592653589793;

// 5. 메모리 절약이 중요 → float
float game_position_x = 123.45f;
float temperature = 36.5f;

// 6. 문자 하나 → char
char grade = 'A';
char answer = 'Y';

