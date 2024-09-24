#ifndef SQLIST_H_INCLUDED
#define SQLIST_H_INCLUDED

#include <iostream>
#include <string>

#define MaxSize 100

// 定义站点结构体
struct Station {
    std::string name; // 站点名称
    int distance;     // 距离
};

// 定义顺序表结构体
typedef Station ElemType;

struct SqList {
    ElemType data[MaxSize]; // 存储站点的数组
    int length;             // 当前长度
};

// 函数声明
void InitList(SqList *&L);          // 初始化站点顺序表
void DestoryList(SqList *&L);       // 销毁站点
void ListInsert(SqList *&L, int i, ElemType e); // 插入站点
void ListDelete(SqList *&L, int i, ElemType &e); // 删除站点
void GetElem(SqList *&L, int i, ElemType &e); // 获取站点
int ListLength(SqList *&L);         // 获取站点长度
void DispList(SqList *&L);          // 输出站点

#endif // SQLIST_H_INCLUDED
