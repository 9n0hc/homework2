#include <stdio.h>
int main()
{
char charType; // ������ ���� charType ����.
int integerType; // ������ ���� integerType ����.
float floatType; // �Ǽ��� ���� floatType ����.
double doubleType; // �Ǽ��� ���� doubleType ����.

printf("[----- [������] [2022041043] -----]");
printf("Size of char: %ld byte\n",sizeof(charType)); // ������ ���� charType�� ũ��(byte) ���.
printf("Size of int: %ld bytes\n",sizeof(integerType)); // ������ ���� integerType�� ũ��(byte) ���.
printf("Size of float: %ld bytes\n",sizeof(floatType)); // �Ǽ��� ���� floatType�� ũ��(byte) ���.
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // �Ǽ��� ���� doubleType�� ũ��(byte) ���.

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); // ���� �ڷ��� char�� ũ��(byte) ���.
printf("Size of int: %ld bytes\n",sizeof(int)); // ���� �ڷ��� int�� ũ��(byte) ���.
printf("Size of float: %ld bytes\n",sizeof(float)); // �Ǽ� �ڷ��� float�� ũ��(byte) ���.
printf("Size of double: %ld bytes\n",sizeof(double)); // �Ǽ� �ڷ��� double�� ũ��(byte) ���.

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); // ������ ������ char�� ũ��(byte) ���.
printf("Size of int*: %ld bytes\n",sizeof(int*)); // ������ ������ int�� ũ��(byte) ���.
printf("Size of float*: %ld bytes\n",sizeof(float*)); // �Ǽ��� ������ float�� ũ��(byte) ���.
printf("Size of double*: %ld bytes\n",sizeof(double*)); // �Ǽ��� ������ float�� ũ��(byte) ���.

return 0;
}