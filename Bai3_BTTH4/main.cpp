#include<bits/stdc++.h>
#include "Animal.h"

using namespace std;

int main() {
    srand(time(0));

    // Khởi tạo các loại gia súc
    Bo bo(10);       // 10 con bò ban đầu
    Cuu cuu(15);     // 15 con cừu ban đầu
    De de(20);       // 20 con dê ban đầu

    // Lưu các con trỏ động vật vào danh sách
    vector<Animal*> giaSuc = {&bo, &cuu, &de};

    // a) Tiếng kêu khi đói
    cout << "Cac tieng keu nghe duoc khi gia suc doi:" << endl;
    for (auto gs : giaSuc) {
        gs->keu();
    }

    // b) Thống kê sau một lứa sinh và một lượt cho sữa
    cout << "\nThong ke sau mot lua sinh va mot luot cho sua:" << endl;
    for (auto gs : giaSuc) {
        int soConSinh = gs->sinhcon();
        int luongSua = gs->chosua();
        cout << "Loai: " << endl;
        gs->xuatthongtin();
        cout << "So con sinh: " << soConSinh << endl;
        cout << "Luong sua vua cho: " << luongSua << " lit\n" << endl;
    }

    return 0;
}
