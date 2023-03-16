#include <stdio.h>

int main(){
    int i = 7; // ������ ���� i�� 7�� �ʱ�ȭ.
    int *ptr = &i; // ������ ���� ptr ����. ������ ���� i�� �ּҰ��� ����.
    int **dptr = &ptr; // ���� ������ dptr ����. ������ ���� ptr�� �ּҰ��� ����. ��������� **dptr�� i�� �޸��� ���� ����Ŵ.

    printf("[----- [������] [2022041043] -----]");
    printf("\n[checking values after dptr = &ptr] \n"); // int **dptr = &ptr�� ����� ���Ŀ� �ʱ�ȭ�� ���� Ȯ��.
    printf("value of i == %d\n", i); // i�� �� 7 ���.
    printf("address of i == %p\n", &i); // i�� �ּҰ� ���(&i = *ptr, �������̹Ƿ� %p ���.).
    printf("value of ptr == %p\n", ptr); // ptr�� ����Ű�� ��, �� i�� �ּҰ� ���.
    printf("address of ptr == %p\n", &ptr); // ptr�� �ּҰ� ���.
    printf("value of *ptr == %d\n", *ptr); // ������ ptr�� i�� ���� ����Ű�Ƿ� 7 ���.
    printf("value of dptr == %p\n", dptr); // dptr�� &ptr�� ����Ű�Ƿ� ptr�� �ּҰ� ���.
    printf("address of dptr == %p\n", &dptr); // dptr�� �ּҰ� ���.
    printf("value of *dptr == %p\n", *dptr); // *dptr�� &ptr�� ���� &i�� ����Ű�Ƿ� i�� �ּҰ� ���.
    printf("value of **dptr == %d\n", **dptr); // ���� ������ **dptr�� i�� ���� ����Ű�Ƿ� 7 ���.
    
    *ptr = 7777; // *ptr�� i�� ���� ����Ű��, **dptr�� i�� ���� ����Ű�Ƿ� i, *ptr, **dptr�� ȣ���ϸ� ��� 7777�� ��µ�.

    printf("\n[after *ptr = 7777]\n"); // *ptr = 7777���� ������ ����.
    printf("value of i == %d\n", i); // i�� �� 7777 ���.
    printf("value of *ptr == %d\n", *ptr); // *ptr�� i�� ���� ����Ű�Ƿ� 7777 ���.
    printf("value of **dptr == %d\n", **dptr); // **dptr�� i�� ���� ����Ű�Ƿ� 7777 ���.

    **dptr = 8888; // **dptr�� i�� ���� ����Ű��, *ptr�� i�� ���� ����Ű�Ƿ� i, *ptr, **dptr�� ȣ���ϸ� ��� 8888�� ��µ�.

    printf("\n[after **dptr = 8888] \n"); // **dptr = 8888���� ������ ����.
    printf("value of i == %d\n", i); // **dptr = 8888���� �����߱� ������ i�� ���� 8888�� �����Ƿ� 8888 ���.
    printf("value of *ptr == %d\n", *ptr); // *ptr�� i�� ���� ����Ű�Ƿ� 8888 ���.
    printf("value of **dptr == %d\n", **dptr); // **dptr�� i�� ���� ����Ű�Ƿ� 8888 ���.

    return 0;
}