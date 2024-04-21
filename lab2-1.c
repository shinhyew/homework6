 #include <stdio.h>
 int main()
 {
 char charType;
 int integerType;
 float floatType;
 double doubleType;
 printf("-----[신혜원] [2023041057]------\n");
 printf("Size of char: %ld byte\n",sizeof(charType)); //char형의 charType 변수 크기 출력
 printf("Size of int: %ld bytes\n",sizeof(integerType));  //int형의 integerType 변수 크기 출력
 printf("Size of float: %ld bytes\n",sizeof(floatType));  //float형의 floatType 변수 크기 출력
 printf("Size of double: %ld bytes\n",sizeof(doubleType));  //double형의 doubleType 변수 크기 출력
 printf("-----------------------------------------\n"); 
 printf("Size of char: %ld byte\n",sizeof(char)); //char 타입의 정수형 크기 출력
 printf("Size of int: %ld bytes\n",sizeof(int)); //int 타입의 정수형 크기 출력
 printf("Size of float: %ld bytes\n",sizeof(float)); //float 타입의 정수형 크기 출력
 printf("Size of double: %ld bytes\n",sizeof(double)); //double 타입의 정수형 크기 출력
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*)); //char 포인터 타입의 크기 출력
 printf("Size of int*: %ld bytes\n",sizeof(int*)); //int 포인터 타입의 크기 출력
 printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 포인터 타입의 크기 출력
 printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 포인터 타입의 크기 출력
 return 0;
 }