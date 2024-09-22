/*
    재귀함수
        자기 자신을 호출하는 함수
        반복문 비슷

        장점 : 변수 선언 줄어듦 / 가독성 좋을 수 있다?
        단점 : 스택메모리 오버플로우 발생 / 경우에 따라서 코드 찾기 힘듦!

    (낮은주소)
    main()
        sayHello()
            sayHello()
                sayHello()
                    sayHello()
                        sayHello()

    (높은주소)
*/

#include <stdio.h>

int sayHello(int count)
{
    if(count==3) {
        return count;
    }

    printf("Hello!\n");
    sayHello(count+1);
}

int main(void)
{
    // 재귀함수 호출
    int count = sayHello(0);

    printf("%d\n", count);

    return 0;
}