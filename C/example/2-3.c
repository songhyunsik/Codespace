/*
작성자 : 정현우
제목 : 제어 문자를 사용한 출력
*/

#include <stdio.h>

int main(void)
{
    printf("Be happy\n");               // "Be happy"를 출력하고 줄을 바꿈(\n)
    printf("12345678901234567890\n");   // 화면에 열 번호 출력하고 줄을 바꿈(\n)
    printf("My\tfriend\n");
    // "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
    printf("Goot\bd\tchance\n");
    // t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
    printf("Cow\rW\a\n");
    // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)printf("Be happy\n");

    return 0;
}