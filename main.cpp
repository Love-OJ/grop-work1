#include <bits/stdc++.h>
#include "SqList.h"

using namespace std;

int main() {
    SqList *busLine;
    InitList(busLine); // 确保 busLine 被正确初始化

    Station station1 = {"山东商务职业学院", 0};
    ListInsert(busLine, 1, station1);

    Station station2 = {"伯源科技", 15};
    ListInsert(busLine, 2, station2);

    Station station3 = {"华和美服饰", 23};
    ListInsert(busLine, 3, station3);

    // 插入更多站点
    ListInsert(busLine, 4, {"泰利模具", 78});
    ListInsert(busLine, 5, {"马山", 5});
    ListInsert(busLine, 6, {"南寨", 74});
    ListInsert(busLine, 7, {"职业学院西门", 1});
    ListInsert(busLine, 8, {"北斋南站", 8});
    ListInsert(busLine, 9, {"北斋", 6});
    ListInsert(busLine, 10, {"世界设计公园", 50});
    ListInsert(busLine, 11, {"烟台自然博物馆", 41});
    ListInsert(busLine, 12, {"东伯子", 23});
    ListInsert(busLine, 13, {"西伯子", 52});
    ListInsert(busLine, 14, {"天悦湾小区东门", 42});
    ListInsert(busLine, 15, {"天悦湾小区南门", 75});
    ListInsert(busLine, 16, {"烟台理工学院", 6});
    ListInsert(busLine, 17, {"橡树湾", 20});

    cout << "公交线路的站点: " << endl;
    DispList(busLine);

    cout << endl;

    Station station18 = {"国际博览中心", 20};
    ListInsert(busLine, 18, station18);

    // 输出新增的站点的名字和距离
    cout << "新增的站点: " << station18.name << ", 距离: " << station18.distance << endl;

   // cout << "增加后的公交线路的站点: " << endl;
   // DispList(busLine);

    Station deletedStation;
    ListDelete(busLine, 2, deletedStation); // 删除第二个站点

    // 输出删除的站点的名字和距离
    cout << "删除的站点: " << deletedStation.name << ", 距离: " << deletedStation.distance << endl;

   // cout << "删除后的公交线路的站点: " << endl;
   //  DispList(busLine);

    DestoryList(busLine); // 确保函数名拼写正确

    return 0;
}
