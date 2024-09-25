#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
#include <string>

// �ṹ�������
struct Station {
    std::string name; // վ������
    int distance;     // ����
};

// ��������ڵ�
struct Node {
    Station data;     // �ڵ�����
    Node* next;      // ָ����һ���ڵ��ָ��
};

// ���������������
void InitList(Node *&head);          // ��ʼ��վ���
void DestroyList(Node *&head);       // ����վ��
void ListInsert(Node *&head, int i, Station e); // ����վ��
void ListDelete(Node *&head, int i, Station &e); // ɾ��վ��
void GetElem(Node *head, int i, Station &e); // ��ȡվ��
int ListLength(Node *head);         // ��ȡվ�㳤��
void DispList(Node *head);          // ���վ��

#endif // LINKLIST_H
