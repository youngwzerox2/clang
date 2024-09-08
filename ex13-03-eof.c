/*
    EOF(End of File)
        EOF는 C프로그램에서 파일 끝을 나타내는 상수
        EOf는 int형으로 정의되어 있으며, -1의 값이
        할당되어 있다.

    EOF 입력방법:
        입력 스트림(터미널)에서
            Ctrl + z(windows)
            Ctrl + D(Unix, Linux, macOS)

*/

#include <stdio.h>

int main(void)
{
    int ch;

    while (1)
    {
        ch = getchar();
        if(ch == EOF) {
            break;
        }

        putchar(ch);
        putchar('|');
    }

    

    return 0;
}