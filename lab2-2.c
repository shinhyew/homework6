#include <stdio.h>
 int main()
 {
 int i;
 int *ptr;
 int **dptr;
 i = 1234;
 printf("======[신혜원] [2023041057]======\n");
 printf("[checking values before ptr = &i] \n");
 printf("value of i == %d\n", i); // i에 할당해준 값을 출력
 printf("address of i == %p\n", &i); //i의 주소값 출력
 printf("value of ptr == %p\n", ptr); // ptr의 값(쓰레기 값) 출력
 printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
 ptr = &i; //ptr에 i의 주소를 할당함
 printf("\n[checking values after ptr = &i] \n"); 
 printf("value of i == %d\n", i); //i의 출력
 printf("address of i == %p\n", &i); //i의 주소값 출력
 printf("value of ptr == %p\n", ptr); // ptr이 가리키는 i의 주소값 출력
 printf("address of ptr == %p\n", &ptr); //ptr의 주소값 출력(이전과 동일)
 printf("value of *ptr == %d\n", *ptr); //ptr에 i의 주소값을 가리켜 i의 값이 출력
  dptr = &ptr; //dptr에 ptr의 주소를 할당함
 /* dptr is now holding the address of ptr */
 printf("\n[checking values after dptr = &ptr] \n");
 printf("value of i == %d\n", i); //i의 값 출력
 printf("address of i == %p\n", &i); //i의 주소값 출력
 printf("value of ptr == %p\n", ptr); //포인터 변수 ptr(i의 주소) 출력
 printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 주소값 출력
 printf("value of *ptr == %d\n", *ptr); // ptr가 가리키는 값(i 값)출력
 printf("value of dptr == %p\n", dptr); // 이중 포인터 dptr 출력
 printf("address of dptr == %p\n", &dptr); //dptr의 주소 출력
 printf("value of *dptr == %p\n", *dptr); //dptr이 가리키는 ptr의 값(i의 주소) 출력
 printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 ptr이 가리키는 i의 값 출력
 *ptr = 7777; //포인터 ptr의 값을 777로 할당함(포인터 ptr이 i를 가리키기 때문에 i의 값도 7777로 바뀜)
 /* changing the value of *ptr */
 printf("\n[after *ptr = 7777] \n"); 
 printf("value of i == %d\n", i);//i의 값(포인터 ptr로 값 바뀜=7777)을 출력
 printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i의 값 출력=7777
 printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 ptr이 가리키는 i의 값 출력=7777
 **dptr = 8888;
 /* changing the value of **dptr */
 printf("\n[after **dptr = 8888] \n"); //이중포인터 dptr이 가리키는 ptr이 가리키는 i를 8888로 할당
 printf("value of i == %d\n", i); //i의 값 8888출력
 printf("value of *ptr == %d\n", *ptr); //포인터 ptr이 가르키는 값(i) 출력
 printf("value of **dptr == %d\n", **dptr); //이중포인터 dptr이 가르키는 ptr가 가르키는 i의 값 출력(8888)
 return 0;
 } 