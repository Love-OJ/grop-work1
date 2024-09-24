#include "SqList.h"

// ��ʼ��˳���
void InitList(SqList *&L) {
    L = new SqList;
    L->length = 0;
}

// ����˳���
void DestoryList(SqList *&L) {
    delete L;
    L = nullptr; // ��������ָ��
}

// ����վ��
void ListInsert(SqList *&L, int i, ElemType e) {
    if (L->length >= MaxSize || i < 1 || i > L->length + 1) {
        std::cout << "�����λ�ò��Ϸ�,������" << std::endl;
        return;
    }
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e; // ������Ԫ��
    L->length++;
    // ֻ�ڲ����һ��վ��ʱ���

}

// ɾ��վ��
void ListDelete(SqList *&L, int i, ElemType &e) {
    if (i < 1 || i > L->length || L->length == 0) {
        std::cout << "ɾ��λ�ò��Ϸ��󱦱���" << std::endl;
        return;
    }
    e = L->data[i - 1]; // �洢Ҫɾ����Ԫ��
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;

}
// Function to display the list
void DispList(SqList *&L) {
    if (L->length == 0) {
        std::cout << "�б�Ϊ�գ�" << std::endl; // ����б�Ϊ�գ������ʾ��Ϣ
        return;
    }

    for (int i = 0; i < L->length; i++) {
        std::cout << "վ������: " << L->data[i].name << ", ����: " << L->data[i].distance << std::endl;
    }
}

