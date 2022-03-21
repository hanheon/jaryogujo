#include <stdio.h>
int main()
{
    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    int i;
    int *ptr;
    int **dptr;  

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);  
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);


    ptr = &i; /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);  //포인터 값은 가리키는 변수의 주소이다.
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);  

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);  // 포인터 dptr은 변수 ptr을 가리킨다. 
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);  //포인터 dptr은 ptr의 주소를 가진다.
    printf("value of **dptr == %d\n", **dptr);  //이중포인터dptr은 i의 값을 가진다.

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    // *ptr = i이고 **dptr = i이다.

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    //**dptr = i 이고 i = *ptr이다.
    
    return 0;
}