/*

    printf() 함수
        콘솔 화면에 문자열 출력함수

        제어문자(이스케이프 문자)
            \t  탭(tab)
            \n  줄바꿈
            \b  한 칸 왼쪽으로 이동
            \r  맨 앞으로 이동
            \'  작은  따옴표
            \"  큰 따옴표
            \?  물음표
            \\  백슬래시

        형식문자(서식문자)
            %d : 부호있는 10진수
            %u : 부호없는 10진수
            %o : 부호없는 8진수
            %x : 부호없는 16진수
            %f : 10진수 방식의 부동소수점 실수(기본 소수점이하 6자리 표현)
            %e : 지수 표기법
            %c : 값에 대응하는 문자
            %s : 문자열
            %p : 포인터 주소값
            %% : %를 출력 문자로

        unsigned 자료형
            부호없는 데이터
            0이상 표현
            음수 포기하는 대신 양수 표현 범위가 그만큼 커진다.

*/

#include <stdio.h>

int main(void)
{
    // 콘솔에 출력하기
    printf("I Love C language!\n");
    printf("It is so funny! \n");

    /*
        이스케이프 시퀀스의 \ 기호는
        글꼴에 따라 ￦ 기호로 표현될 수 있다.
    */
    printf("\"I am a boy. \"\n");
    printf("I am a \'boy\'.\n");
    printf("I\tam\ta\tboy.\n");
    printf("I\bam a boy.\n");
    printf("I am a boy.\\\?\n");

    // unsigned 예
    char cnum = 128;              
    unsigned char u_cnum = 255;

    printf("%d\n", cnum);           // -128
    printf("%d\n", u_cnum);         // 255

    // 형식문자 예

    char character = 'X';
    int inumber = 92;
    double dnumber = 20.201005;

    printf("%c\n", character);      // X
    printf("%d\n", character);      // 88

    printf("%x\n", inumber);        // 5C
    printf("%o\n", inumber);        // 134

    printf("%f\n", dnumber);        // 20.201005
    printf("%e\n", dnumber);        // 2.020100e+01

    float fnum = 1.2345678f;
    printf("%10f\n", fnum);         //    1.234568
    printf("%-10f\n", fnum);        //  1.234568
    printf("%10.3f\n", fnum);       //       1.235
    printf("%-10.3f\n", fnum);      //  1.235

    char character2 = 'H';
    int num = 548;
    printf("%5c\n", character2);    //      H
    printf("%-5c\n", character2);   //  H
    printf("%10dc\n", num);         //         548c
    printf("%-10d\n", num);         //  548

    return 0;
}