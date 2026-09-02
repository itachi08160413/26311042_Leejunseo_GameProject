#include "glc2d.h"
#include <stdio.h>

int main()
{
    // SDK 초기화
    g2_InitSdk();

    printf("Starting ...\n\n");

    // 윈도우 생성
    g2_CreateWin(100, 100, 1024, 600, "My First Game Window");

    // 실행
    g2_Run();

    // 윈도우 해제
    g2_DestroyWin();

    return 0;
}