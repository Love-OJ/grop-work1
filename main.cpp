#include <bits/stdc++.h>
#include "SqList.h"

using namespace std;

int main() {
    SqList *busLine;
    InitList(busLine); // ȷ�� busLine ����ȷ��ʼ��

    Station station1 = {"ɽ������ְҵѧԺ", 0};
    ListInsert(busLine, 1, station1);

    Station station2 = {"��Դ�Ƽ�", 15};
    ListInsert(busLine, 2, station2);

    Station station3 = {"����������", 23};
    ListInsert(busLine, 3, station3);

    // �������վ��
    ListInsert(busLine, 4, {"̩��ģ��", 78});
    ListInsert(busLine, 5, {"��ɽ", 5});
    ListInsert(busLine, 6, {"��կ", 74});
    ListInsert(busLine, 7, {"ְҵѧԺ����", 1});
    ListInsert(busLine, 8, {"��ի��վ", 8});
    ListInsert(busLine, 9, {"��ի", 6});
    ListInsert(busLine, 10, {"������ƹ�԰", 50});
    ListInsert(busLine, 11, {"��̨��Ȼ�����", 41});
    ListInsert(busLine, 12, {"������", 23});
    ListInsert(busLine, 13, {"������", 52});
    ListInsert(busLine, 14, {"������С������", 42});
    ListInsert(busLine, 15, {"������С������", 75});
    ListInsert(busLine, 16, {"��̨��ѧԺ", 6});
    ListInsert(busLine, 17, {"������", 20});

    cout << "������·��վ��: " << endl;
    DispList(busLine);

    cout << endl;

    Station station18 = {"���ʲ�������", 20};
    ListInsert(busLine, 18, station18);

    // ���������վ������ֺ;���
    cout << "������վ��: " << station18.name << ", ����: " << station18.distance << endl;

   // cout << "���Ӻ�Ĺ�����·��վ��: " << endl;
   // DispList(busLine);

    Station deletedStation;
    ListDelete(busLine, 2, deletedStation); // ɾ���ڶ���վ��

    // ���ɾ����վ������ֺ;���
    cout << "ɾ����վ��: " << deletedStation.name << ", ����: " << deletedStation.distance << endl;

   // cout << "ɾ����Ĺ�����·��վ��: " << endl;
  //  DispList(busLine);

    DestoryList(busLine); // ȷ��������ƴд��ȷ

    return 0;
}
