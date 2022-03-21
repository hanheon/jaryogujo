#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    
    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("Size of char: %ld byte\n",sizeof(charType));
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));
// 변수의 크기는 사용하는 자료형의 크기와 동일하다.
    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
//포인터의 크기는 4byte로, 모든 주소값들이 4byte로 표현이 가능하다.
    return 0;
}