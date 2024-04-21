 #include <stdio.h>
 int main(){
    int i, *p;  //정수 변수 i와 포인터 변수 p 선언
    i = 10;     //i의 값을 10으로 할당
    printf("value of i = %d\n", i); //변수 i의 값을 출력
    printf("address of i = %p\n", &i); //변수 i의 주소 출력
    printf("value of p = %p\n", p); //변수 p의 값 출력
    printf("address of p = %p\n", &p);  //변수 p의 주소 출력
    p = &i; //포인터 p에 i의 주소를 할당
    printf("\n\n----- after p = &i------------\n\n");
    printf("value of p = %p\n", p);  //포인터 p의 값 출력
    printf("address of p = %p\n", &p);  //포인터 p의 주소(i의 주소를 할당받음) 출력
    printf("dereferencing *p = %d\n", *p); //포인터 p를 역참조하고 가리키는 값(i의 값)을 출력
    return 0;
    }