#ifndef SQLIST_H_INCLUDED
#define SQLIST_H_INCLUDED

#include <iostream>
#include <string>

#define MaxSize 100

// ����վ��ṹ��
struct Station {
    std::string name; // վ������
    int distance;     // ����
};

// ����˳���ṹ��
typedef Station ElemType;

struct SqList {
    ElemType data[MaxSize]; // �洢վ�������
    int length;             // ��ǰ����
};

// ��������
void InitList(SqList *&L);          // ��ʼ��վ��˳���
void DestoryList(SqList *&L);       // ����վ��
void ListInsert(SqList *&L, int i, ElemType e); // ����վ��
void ListDelete(SqList *&L, int i, ElemType &e); // ɾ��վ��
void GetElem(SqList *&L, int i, ElemType &e); // ��ȡվ��
int ListLength(SqList *&L);         // ��ȡվ�㳤��
void DispList(SqList *&L);          // ���վ��

#endif // SQLIST_H_INCLUDED
