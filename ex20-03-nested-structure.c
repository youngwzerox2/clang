/*
    중첩 구조체
        멤버 변수 구조체 선언
*/

#include <stdio.h>

typedef struct 
{
    char title[100];
    int published;
}Book;

typedef struct 
{
    Book book;
}Bag;

int main(void)
{
    // 구조체 변수를 선언과 동시에 초기화
    Bag myBag = {
        {"지금 하지 않으면 언제 하겠는가", 2018}
    };

    // 멤버 변수로써의 구조체 변수에 접근할 때에도 사용 연산자 동일하다.
    printf("책 제목: %s\n", myBag.book.title);
    printf("출간년도: %d년\n", myBag.book.published);

    return 0;
}

