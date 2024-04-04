#include<stdio.h>
 #include<stdlib.h>
 void main()
 {
 int **x; //int형 이중포인터 변수 x출력
 printf("-----[신혜원] [2023041057]-----\n");
 printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력 int형이므로 4bytes
 printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 포인터의 크기 출력 int형이므로 4bytes
 printf("sizeof(**x) = %lu\n", sizeof(**x)); //x를 이중참조하여 얻은 값의 크기 출력 int형이므로 4bytes
 }