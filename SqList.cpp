#include "SqList.h"

// 初始化顺序表
void InitList(SqList *&L) {
    L = new SqList;
    L->length = 0;
}

// 销毁顺序表--xff写的
void DestoryList(SqList *&L) {
    delete L;
    L = nullptr; // 避免悬空指针
}

// 插入站点
void ListInsert(SqList *&L, int i, ElemType e) {
    if (L->length >= MaxSize || i < 1 || i > L->length + 1) {
        std::cout << "输入的位置不合法,宝宝！" << std::endl;
        return;
    }
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e; // 插入新元素
    L->length++;
    // 只在插入第一个站点时输出

}

// 删除站点
void ListDelete(SqList *&L, int i, ElemType &e) {
    if (i < 1 || i > L->length || L->length == 0) {
        std::cout << "删除位置不合法捏宝宝！" << std::endl;
        return;
    }
    e = L->data[i - 1]; // 存储要删除的元素
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
}
// Function to display the list
void DispList(SqList *&L) {
    if (L->length == 0) {
        std::cout << "列表为空！" << std::endl; // 如果列表为空，输出提示信息
        return;
    }

    for (int i = 0; i < L->length; i++) {
        std::cout << "站点名称: " << L->data[i].name << ", 距离: " << L->data[i].distance << std::endl;
    }
}

