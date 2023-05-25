//
// Created by BigMikey on 2023/5/25.
//

#ifndef SQLIST_SQLIST_H
#define SQLIST_SQLIST_H

#define MaxSize 100
#define ElemType char
#define OK 1
#define ERROR -1
#define OVERWRITE 2

typedef struct {
    int length;
    ElemType data[MaxSize];
}SqList;

SqList ListInsert(SqList L, int i, ElemType e);
SqList ListDelete(SqList L, int i);
int LocateElem(SqList L, ElemType e);
SqList UpdateElem(SqList L, int i, ElemType e);

#endif //SQLIST_SQLIST_H
