#include<bits/stdc++.h>
#include "Room.h"

using namespace std;

int main() {
    // Khởi tạo các phòng
    Deluxe a("Deluxe A", 5, 200000, 150000);
    Deluxe b("Deluxe B", 3, 100000, 100000);
    Premium c("Premium C", 7, 50000);
    Premium d("Premium D", 4, 60000);
    Business e("Business E", 10);

    // Tạo danh sách các phòng
    vector<Room*> rooms = {&a, &b, &c, &d, &e};

    // Tìm phòng có doanh thu cao nhất
    Room* maxRoom = rooms[0];
    double maxdoanhthu = rooms[0]->tinhdoanhthu();

    for (auto room : rooms) {
        double doanhThu = room->tinhdoanhthu();
        if (doanhThu > maxdoanhthu) {
            maxdoanhthu = doanhThu;
            maxRoom = room;
        }
    }

    // Xuất thông tin phòng có doanh thu cao nhất
    cout << "Phong co doanh thu cao nhat:" << endl;
    maxRoom->Xuat();
    cout << "Doanh thu: " << setprecision(2) << fixed << maxdoanhthu << endl;
    return 0;
}
