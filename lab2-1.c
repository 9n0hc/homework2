#include <stdio.h>
int main()
{
char charType; // 문자형 변수 charType 선언.
int integerType; // 정수형 변수 integerType 선언.
float floatType; // 실수형 변수 floatType 선언.
double doubleType; // 실수형 변수 doubleType 선언.

printf("[----- [이은총] [2022041043] -----]");
printf("Size of char: %ld byte\n",sizeof(charType)); // 문자형 변수 charType의 크기(byte) 출력.
printf("Size of int: %ld bytes\n",sizeof(integerType)); // 정수형 변수 integerType의 크기(byte) 출력.
printf("Size of float: %ld bytes\n",sizeof(floatType)); // 실수형 변수 floatType의 크기(byte) 출력.
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 실수형 변수 doubleType의 크기(byte) 출력.

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); // 문자 자료형 char의 크기(byte) 출력.
printf("Size of int: %ld bytes\n",sizeof(int)); // 정수 자료형 int의 크기(byte) 출력.
printf("Size of float: %ld bytes\n",sizeof(float)); // 실수 자료형 float의 크기(byte) 출력.
printf("Size of double: %ld bytes\n",sizeof(double)); // 실수 자료형 double의 크기(byte) 출력.

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); // 문자형 포인터 char의 크기(byte) 출력.
printf("Size of int*: %ld bytes\n",sizeof(int*)); // 정수형 포인터 int의 크기(byte) 출력.
printf("Size of float*: %ld bytes\n",sizeof(float*)); // 실수형 포인터 float의 크기(byte) 출력.
printf("Size of double*: %ld bytes\n",sizeof(double*)); // 실수형 포인터 float의 크기(byte) 출력.

return 0;
}