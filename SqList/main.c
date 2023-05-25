#include <stdio.h>

#include "sqlist.h"

int main() {
    printf("Hello, World!\n");

    SqList L;
    ElemType x = NULL;
    int num = 0;

    L.length = 0;
    for(int i = 0; i < MaxSize; i++) L.data[i] = NULL;
    printf("Input Length: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        getchar();
        scanf("%c", &x);
        L = ListInsert(L, i, x);
    }
    for(int i = 0; i < L.length; i++) printf("%c ", L.data[i]);
    putchar('\n');
    printf("Insert!\n");
    scanf("%d %c", &num, &x);
    L = ListInsert(L, num, x);
    for(int i = 0; i < L.length; i++) printf("%c ", L.data[i]);
    putchar('\n');
    printf("Delete!\n");
    scanf("%d", &num);
    L = ListDelete(L, num);
    for(int i = 0; i < L.length; i++) printf("%c ", L.data[i]);
    putchar('\n');
    printf("Locate!\n");
    getchar();
    scanf("%c", &x);
    num = LocateElem(L, x);
    printf("%d\n", num);
    for(int i = 0; i < L.length; i++) printf("%c ", L.data[i]);
    putchar('\n');
    printf("Update!\n");
    scanf("%d %c", &num, &x);
    L = UpdateElem(L, num, x);
    for(int i = 0; i < L.length; i++) printf("%c ", L.data[i]);

    return 0;
}
