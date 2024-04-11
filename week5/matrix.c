#include <stdio.h>
#include <stdlib.h>
void print_matrix(int **matrix,int row ,int col); //print_matrix 함수 선언
int free_matrix(int **matrix, int row, int col); //free_matrix 함수 선언
int addition_matrix(int **a,int **b, int rowA, int colA, int rowB, int colB); // addition_matrix 함수 선언
int subtraction_matrix(int **a, int **b, int rowA, int colA, int rowB, int colB); //subtraction_matrix 함수 선언
int multiply_matrix(int **a, int **b, int rowA, int colA, int rowB, int colB); //multiply_matrix 함수 선언
void transpose_matrix(int **a, int row, int col); //transpose_matrix 함수 선언

int main()
{
    printf("-----[신혜원] [2023041057]-----");

    int rowA, colA, rowB, colB;

    printf("\n행렬 A의 행과 열 입력:"); //행렬 A의 행과 열 입력 받기
    scanf("%d %d",&rowA, &colA);

    printf("행렬 B의 행과 열 입력:"); //행렬 B의 행과 열 입력 받기
    scanf("%d %d",&rowB, &colB);

    int **A= (int **)malloc(rowA*sizeof(int *)); //행렬 A의 행만큼 동적메모리 할당
    for(int i=0;i<rowA;i++)
    {
        A[i]=(int*)malloc(colA*sizeof(int)); //행렬 A의 열만큼 동적 메모리 할당
    }

    int **A_t = (int **)malloc(rowA*sizeof(int *)); //행렬 A_t의 행만큼 동적메몰; 할당
    for(int i=0;i<rowA;i++)
    {
        A[i]=(int *)malloc(colA*sizeof(int)); //행렬 A의 열만큼 동적메모리 할당
    }

    printf("matrix A:\n"); //행렬 A 입력 받기
    for(int i=0; i<rowA;i++) //행렬 A의 행만큼 반복
    {
        for(int j=0; j<colA;j++) //행렬 A의 열만큼 반복
        {
            printf("[%d][%d]입력:\n",i,j); //행렬 A 값 입력받기
            scanf("%d", &A[i][j]); //입력받은 값 A[i][j]에 저장
        }
    }

    int **B=(int**)malloc(rowB*sizeof(int*)); //행렬B의 행만큼 동적메모리 할당
    for(int i=0;i<rowB;i++)
    {
        B[i]=(int*)malloc(colB*sizeof(int)); //행렬 B의 열만큼 동적메모리 할당
    }

    int **B_t=(int**)malloc(rowB*sizeof(int*)); //행렬 B_t의 행만큼 동적메모리 할당
    for(int i=0;i<rowB;i++)
    {
        B[i]=(int*)malloc(colB*sizeof(int)); //행렬 B의 열만큼 동적메모리 할당
    }

    printf("matrix B:\n"); //행렬 B 입력 받기
    for(int i=0;i<rowB;i++) //행렬 B의 행만큼 반복
    {
        for(int j=0;j<colB;j++) //행렬B의 열만큼 반복
        {
            printf("[%d][%d]입력: \n",i,j); //행렬 B의 값 입력받기
            scanf("%d",&B[i][j]); //입력받은 값 B[i][j]에 저장
        }
    }

    printf(" matrix A: \n"); 
    print_matrix(A,rowA,colA); //print_matrix를 이용해 A행렬 출력

    printf(" matrix B: \n");
    print_matrix(B, rowA,colB); //print_matrix를 이용한 B행렬 출력

    addition_matrix(A,B,rowA,colA,rowB,colB); //addition_matrix 함수 출력
    subtraction_matrix(A,B,rowA,colA,rowB,colB); //substraction_matrix 함수 출력
    multiply_matrix(A,B,rowA,colA,rowB,colB); //multiply_matrix 함수 출력
    transpose_matrix(A,rowA,colA);//transpose_matrix A로 함수 출력
    transpose_matrix(B,rowB,colB);//transpose_matrix B로 함수 출력
    free_matrix(A,rowA,colA); //A행렬 동적메모리 할당 해제
    free_matrix(B,rowB,colB); //B행렬 동적메모리 할당 해제
    
    return 0;
}

void print_matrix(int **matrix, int row, int col) //int형의 이중포인터 변수 matrix와 int형 변수 row,col를 매개변수로 갖는 void형 함수
{
    printf("\n matrix is: \n");
    for(int i=0;i<row;i++) //행렬의 행만큼 반복
    {
        for(int j=0;j<col;j++) //행렬의 열만큼 반복
        {
            printf("%3d",matrix[i][j]); //행렬 출력
        }
        printf("\n");
    }
}

int free_matrix(int **matrix, int row, int col) //int형 이중포인터 변수 matrix와 int형 변수 rows, cols를 매개변수로 갖는 free_matrix 함수
{
    for(int i=0;i<row;i++) //행렬의 행만큼 반복
    {
        free(matrix[i]); //행렬의 행들 메모리 해제
    }
    free(matrix); //행렬의 열들 메모리 해제
}

int addition_matrix(int **a, int **b, int rowA, int colA, int rowB, int colB) //이중포인터 변수 a,b와 행렬A,B의 행과 열을 각각 매개변수로 받는 함수
{
    int **madd;
    madd=(int**)malloc(rowA*sizeof(int*)); //행렬A와 B의 합을 저장할 행렬의 행만큼 동적 할당
    for(int i=0;i<rowA;i++)
    {
        madd[i]=(int*)malloc(colA*sizeof(int)*rowA); //열만큼 동적 할당
    }
    if((rowA==rowB)&&(colA==colB)) //행렬 A,B의 행과 열이 모두 동일할 때
    {
        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<colA;j++)
            {
                madd[i][j]=a[i][j]+b[i][j]; //행렬의 합 구하기
            }
        }
        printf("\n");
        print_matrix(madd,rowA,colA); //행렬의 합 출력
        free_matrix(madd,rowA,colA); //행렬의 합을 저장한 행렬의 동적 메모리 해제
    }
    else
    {
        printf("합 구할 수 없음\n"); //행렬의 합 구할 수 없음
    }
}

int subtraction_matrix(int **a, int **b, int rowA, int colA, int rowB, int colB) //이중포인터 변수 a,b와 행렬A,B의 행과 열을 각각 매개변수로 받는 함수
{
    int **mminus;
    mminus=(int**)malloc(rowA*sizeof(int*)); //행렬 A와 B의 차를 저장할 행렬의 행만큼 동적 할당
    for(int i=0;i<rowA;i++)
    {
        mminus[i]=(int*)malloc(colA*sizeof(int)); //행렬 A와 B의 차를 저장할 행렬의 열만큼 동적 할당
    }
    if((rowA==rowB)&&(colA==colB)) //행렬A와B의 행과 열이 각각 같을때
    {
        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<colA;j++)
            {
                mminus[i][j]=a[i][j]-b[i][j]; //행렬의 차 구하기
            }
        }
        printf("\n");
        print_matrix(mminus,rowA,colA); //행렬의 차 출력
        free_matrix(mminus,rowA,colA); //mminus 동적메모리 해제
    }
    else
    {
        printf("차 구할 수 없음\n");
    }
}

int multiply_matrix(int **a, int **b, int rowA, int colA, int rowB, int colB)  //이중포인터 변수 a,b와 행렬A,B의 행과 열을 각각 매개변수로 받는 함수
{
    int i,j=0; //int형 변수 선언
    int **mmulti;
    mmulti=(int**)malloc(rowA*sizeof(int*)); //행렬A의 행만큼 동적 할당
    for(int i=0; i<rowA;i++)
    {
        mmulti[i]=(int*)malloc(colB*sizeof(int)); //행렬 B의 열만큼 동적 할당
    }
    if(colA==rowB) //행렬의 곱은 행렬A의 열과 행렬B의 행이 같을때 실행
    {
        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<rowA;j++)
            {
                int temp=0; //int형 변수 temp선언
                for(int k=0;k<colB;k++)
                {
                    temp+=a[i][k]*b[i][k]; //temp= temp+a[i][k]*b[i][k]
                    mmulti[i][j]=temp; //mmulti에 tmep값 할당
                }
            }
            printf("\n");
        }
        printf("\n");
        print_matrix(mmulti,rowB,colA); //mmulti출력
        free_matrix(mmulti,rowB,colA); //mmulti 동적 메모리 해제
    }
    else 
    {
        printf("곱 구할 수 없음");
    }
}

void transpose_matrix(int **a, int row, int col) //int형 이중포인터 변수, 행, 열을 매개변수로 받는 함수//int형 이중포인터 변수, 행, 열을 매개변수로 받는 함수//int형 이중포인터 변수
{ 
    int **b; //전치행렬을 저장 할 b선언
    b=(int**)malloc(col*sizeof(int*)); //b의 열만큼 동적메모리 할당
    for(int i=0;i<col;i++)
    {
        b[i]=(int*)malloc(row*sizeof(int)); //b의 행만큼 동적메모리 할당
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            b[i][j]=a[i][j]; //전치행렬 구하기
        }
        printf("\n");
    }
    print_matrix(b,col,row); //전치행렬 출력
    print_matrix(b,col,row); //전치행렬 동적메모리 해제
}