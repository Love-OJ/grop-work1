#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
#include <string>

// 结构体存数据
struct Station {
    std::string name; // 站点名称
    int distance;     // 距离
};

// 定义链表节点
struct Node {
    Station data;     // 节点数据
    Node* next;      // 指向下一个节点的指针
};

// 链表操作函数声明
void InitList(Node *&head);          // 初始化站点表
void DestroyList(Node *&head);       // 销毁站点
void ListInsert(Node *&head, int i, Station e); // 插入站点
void ListDelete(Node *&head, int i, Station &e); // 删除站点
void GetElem(Node *head, int i, Station &e); // 获取站点
int ListLength(Node *head);         // 获取站点长度
void DispList(Node *head);          // 输出站点

#endif // LINKLIST_H
