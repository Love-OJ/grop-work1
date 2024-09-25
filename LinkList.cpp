#include "LinkList.h"

// 初始化链表
void InitList(Node *&head) {
    head = NULL; // 和课本不一样，因为一样的话会有内存分配问题
}

// 销毁链表
void DestroyList(Node *&head) {
    Node* current = head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        delete current; // 使用 delete 释放内存
        current = nextNode;
    }
    head = NULL; // 避免悬空指针
}

// 插入站点
void ListInsert(Node *&head, int i, Station e) {
    if (i < 1) {
        std::cout << "输入的位置不合法,宝宝！" << std::endl;
        return;
    }

    Node* newNode = new Node; // 使用 new 分配新节点内存
    newNode->data = e;
    newNode->next = NULL;

    if (i == 1) { // 插入到头部
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        for (int j = 1; j < i - 1 && current != NULL; j++) {
            current = current->next;
        }
        if (current == NULL) {
            std::cout << "输入的位置超出链表长度,宝宝！" << std::endl;
            delete newNode; // 释放内存
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// 删除站点
void ListDelete(Node *&head, int i, Station &e) {
    if (i < 1 || head == NULL) {
        std::cout << "删除位置不合法捏宝宝！" << std::endl;
        return;
    }

    Node* toDelete;
    if (i == 1) { // 删除头部
        toDelete = head;
        head = head->next;
    } else {
        Node* current = head;
        for (int j = 1; j < i - 1 && current != NULL; j++) {
            current = current->next;
        }
        if (current == NULL || current->next == NULL) {
            std::cout << "删除位置超出链表长度,宝宝！" << std::endl;
            return;
        }
        toDelete = current->next;
        current->next = toDelete->next;
    }
    e = toDelete->data; // 存储要删除的元素
    delete toDelete; // 使用 delete 释放内存
}

// 获取站点
void GetElem(Node *head, int i, Station &e) {
    if (i < 1) {
        std::cout << "位置不合法！" << std::endl;
        return;
    }

    Node* current = head;
    for (int j = 1; j < i && current != NULL; j++) {
        current = current->next;
    }
    if (current != NULL) {
        e = current->data;
    } else {
        std::cout << "位置超出链表长度！" << std::endl;
    }
}

// 获取链表长度
int ListLength(Node *head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

// 输出链表
void DispList(Node *head) {
    if (head == NULL) {
        std::cout << "列表为空！" << std::endl; // 如果列表为空，输出提示信息
        return;
    }

    Node* current = head;
    while (current != NULL) {
        std::cout << "站点名称: " << current->data.name << ", 距离: " << current->data.distance << std::endl;
        current = current->next;
    }
}
