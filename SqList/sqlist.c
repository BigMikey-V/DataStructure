//
// Created by BigMikey on 2023/5/25.
//

#include "sqlist.h"

#include <stdlib.h>
#include <stdio.h>

SqList ListInsert(SqList L, int i, ElemType e) {

    if(i < 1 || i > L.length + 1) exit(ERROR);
    if(L.length >= MaxSize) exit(OVERWRITE);
    for(int j = L.length + 1; j >= i; j--) L.data[j] = L.data[j - 1];
    L.data[i - 1] = e;
    L.length++;
    printf("Status: %d\n", OK);

    return L;
}

SqList ListDelete(SqList L, int i) {

    if(i < 1 || i > L.length) exit(ERROR);
    printf("%c\n", L.data[i - 1]);
    for(int j = i - 1; j < L.length; j++) L.data[j] = L.data[j + 1];
    L.length--;
    printf("Status: %d\n", OK);

    return L;
}

int LocateElem(SqList L, ElemType e) {

    for(int i = 0; i < L.length; i++) if(L.data[i] == e) return i + 1;

    return 0;
}

SqList UpdateElem(SqList L, int i, ElemType e) {

    if(i < 1 || i > L.length) exit(ERROR);
    L.data[i - 1] = e;
    printf("Status: %d\n", OK);

    return L;
}
