#include "LinkList.h"

// ��ʼ������
void InitList(Node *&head) {
    head = NULL; // �Ϳα���һ������Ϊһ���Ļ������ڴ��������
}

// ��������
void DestroyList(Node *&head) {
    Node* current = head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        delete current; // ʹ�� delete �ͷ��ڴ�
        current = nextNode;
    }
    head = NULL; // ��������ָ��
}

// ����վ��
void ListInsert(Node *&head, int i, Station e) {
    if (i < 1) {
        std::cout << "�����λ�ò��Ϸ�,������" << std::endl;
        return;
    }

    Node* newNode = new Node; // ʹ�� new �����½ڵ��ڴ�
    newNode->data = e;
    newNode->next = NULL;

    if (i == 1) { // ���뵽ͷ��
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        for (int j = 1; j < i - 1 && current != NULL; j++) {
            current = current->next;
        }
        if (current == NULL) {
            std::cout << "�����λ�ó���������,������" << std::endl;
            delete newNode; // �ͷ��ڴ�
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// ɾ��վ��
void ListDelete(Node *&head, int i, Station &e) {
    if (i < 1 || head == NULL) {
        std::cout << "ɾ��λ�ò��Ϸ��󱦱���" << std::endl;
        return;
    }

    Node* toDelete;
    if (i == 1) { // ɾ��ͷ��
        toDelete = head;
        head = head->next;
    } else {
        Node* current = head;
        for (int j = 1; j < i - 1 && current != NULL; j++) {
            current = current->next;
        }
        if (current == NULL || current->next == NULL) {
            std::cout << "ɾ��λ�ó���������,������" << std::endl;
            return;
        }
        toDelete = current->next;
        current->next = toDelete->next;
    }
    e = toDelete->data; // �洢Ҫɾ����Ԫ��
    delete toDelete; // ʹ�� delete �ͷ��ڴ�
}

// ��ȡվ��
void GetElem(Node *head, int i, Station &e) {
    if (i < 1) {
        std::cout << "λ�ò��Ϸ���" << std::endl;
        return;
    }

    Node* current = head;
    for (int j = 1; j < i && current != NULL; j++) {
        current = current->next;
    }
    if (current != NULL) {
        e = current->data;
    } else {
        std::cout << "λ�ó��������ȣ�" << std::endl;
    }
}

// ��ȡ������
int ListLength(Node *head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

// �������
void DispList(Node *head) {
    if (head == NULL) {
        std::cout << "�б�Ϊ�գ�" << std::endl; // ����б�Ϊ�գ������ʾ��Ϣ
        return;
    }

    Node* current = head;
    while (current != NULL) {
        std::cout << "վ������: " << current->data.name << ", ����: " << current->data.distance << std::endl;
        current = current->next;
    }
}
