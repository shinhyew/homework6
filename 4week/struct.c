 #include <stdio.h>
 struct student1 //구조체1 선언
 {
    char lastName;
    int  studentId;
    char grade;
 };
 typedef struct 
{
    char lastName;
    int  studentId;
    char grade;
 } student2; //구조체2 선언
 int main() 
 {
    printf("-----[신혜원] [2023041057]-----\n");
    struct student1 st1 = {'A', 100, 'A'}; //구조체 student1의 변수 초기화
    printf("st1.lastName = %c\n", st1.lastName); //구조체1의 변수 lastname 출력
    printf("st1.studentId = %d\n", st1.studentId); //구조체1의 변수 studentid 출력
    printf("st1.grade = %c\n", st1.grade); //구조체1의 변수 grade 출력
    student2 st2 = {'B', 200, 'B'}; //r구조체 student2의 변수 초기화
    printf("\nst2.lastName = %c\n", st2.lastName); //구조체2의 변수 lastname 출력
    printf("st2.studentId = %d\n", st2.studentId); //구조체2의 변수 studentid 출력
    printf("st2.grade = %c\n", st2.grade); //구조체2의 변수 grade 출력
    student2 st3; //구조체 자료형을 가진 st3 변수 선언 
    st3 = st2; //st3에 st2 값 할당
    printf("\nst3.lastName = %c\n", st3.lastName); //변수 st3의 구조체 변수 lastname 출력
    printf("st3.studentId = %d\n", st3.studentId); ///변수 st3의 구조체 변수 studentid 출력
    printf("st3.grade = %c\n", st3.grade); ///변수 st3의 구조체 변수 grade 출력
    /* equality test */
    if(st3.lastName==st2.lastName&&st3.studentId==st2.studentId&&st3.grade==st2.grade) //구조체 st2와 st3의 각 변수가 동일한지 각각 비교한다.
    printf("equal\n");
    else
    printf("not equal\n");
    return 0;
 }
