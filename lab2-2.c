#include <stdio.h>

int main(){
    int i = 7; // 정수형 변수 i를 7로 초기화.
    int *ptr = &i; // 포인터 변수 ptr 선언. 정수형 변수 i의 주소값을 저장.
    int **dptr = &ptr; // 더블 포인터 dptr 선언. 정수형 변수 ptr의 주소값을 저장. 결과적으로 **dptr은 i의 메모리의 값을 가리킴.

    printf("[----- [이은총] [2022041043] -----]");
    printf("\n[checking values after dptr = &ptr] \n"); // int **dptr = &ptr이 선언된 이후에 초기화된 값을 확인.
    printf("value of i == %d\n", i); // i의 값 7 출력.
    printf("address of i == %p\n", &i); // i의 주소값 출력(&i = *ptr, 포인터이므로 %p 사용.).
    printf("value of ptr == %p\n", ptr); // ptr이 가리키는 값, 즉 i의 주소값 출력.
    printf("address of ptr == %p\n", &ptr); // ptr의 주소값 출력.
    printf("value of *ptr == %d\n", *ptr); // 포인터 ptr은 i의 값을 가리키므로 7 출력.
    printf("value of dptr == %p\n", dptr); // dptr은 &ptr을 가리키므로 ptr의 주소값 출력.
    printf("address of dptr == %p\n", &dptr); // dptr의 주소값 출력.
    printf("value of *dptr == %p\n", *dptr); // *dptr은 &ptr을 거쳐 &i를 가리키므로 i의 주소값 출력.
    printf("value of **dptr == %d\n", **dptr); // 더블 포인터 **dptr은 i의 값을 가리키므로 7 출력.
    
    *ptr = 7777; // *ptr은 i의 값을 가리키고, **dptr도 i의 값을 가리키므로 i, *ptr, **dptr을 호출하면 모두 7777이 출력됨.

    printf("\n[after *ptr = 7777]\n"); // *ptr = 7777으로 변경한 이후.
    printf("value of i == %d\n", i); // i의 값 7777 출력.
    printf("value of *ptr == %d\n", *ptr); // *ptr은 i의 값을 가리키므로 7777 출력.
    printf("value of **dptr == %d\n", **dptr); // **dptr은 i의 값을 가리키므로 7777 출력.

    **dptr = 8888; // **dptr은 i의 값을 가리키고, *ptr도 i의 값을 가리키므로 i, *ptr, **dptr을 호출하면 모두 8888이 출력됨.

    printf("\n[after **dptr = 8888] \n"); // **dptr = 8888으로 변경한 이후.
    printf("value of i == %d\n", i); // **dptr = 8888으로 변경했기 때문에 i의 값이 8888이 됐으므로 8888 출력.
    printf("value of *ptr == %d\n", *ptr); // *ptr은 i의 값을 가리키므로 8888 출력.
    printf("value of **dptr == %d\n", **dptr); // **dptr은 i의 값을 가리키므로 8888 출력.

    return 0;
}