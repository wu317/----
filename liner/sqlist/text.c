#include <stdio.h>
#include "sqlist.h"

int main()
{
    sqlink L;
    L = list_create();
    if (L == NULL) {
        printf("�������Ա�ʧ�ܣ�\n");
        return -1;
    }
    printf("�������Ա�ɹ���\n");
    return 0;
}

