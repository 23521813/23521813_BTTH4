#include<bits/stdc++.h>
#include "Animal.h"

using namespace std;

// Constructor cho lớp Animal
Animal::Animal(string loaigiasuc, int soluongbandau)
    : loai(loaigiasuc), soluong(soluongbandau), tongsua(0) {}

// Sinh con ngẫu nhiên cho lớp Animal
int Animal::sinhcon() {
    int soCon = rand() % 5 + 1; // Mỗi con sinh ngẫu nhiên 1-5 con
    soluong += soCon;
    return soCon;
}

// Xuất thông tin chung
void Animal::xuatthongtin() {
    cout << "Loai: " << loai << endl;
    cout << "So luong: " << soluong << endl;
    cout << "Tong sua: " << tongsua << " lit" << endl;
}

// Constructor cho Bò
Bo::Bo(int soluongbandau) : Animal("Bo", soluongbandau) {}

// Tiếng kêu của Bò
void Bo::keu() {
    cout << "Bo: Moo Moo!" << endl;
}

// Sinh con cho Bò
int Bo::sinhcon() {
    return Animal::sinhcon();
}

// Cho sữa của Bò
int Bo::chosua() {
    int sua = rand() % 21; // Sữa ngẫu nhiên từ 0-20 lít
    tongsua += sua * soluong;
    return sua * soluong;
}

// Constructor cho Cừu
Cuu::Cuu(int soluongbandau) : Animal("Cuu", soluongbandau) {}

// Tiếng kêu của Cừu
void Cuu::keu() {
    cout << "Cuu: Baa Baa!" << endl;
}

// Sinh con cho Cừu
int Cuu::sinhcon() {
    return Animal::sinhcon();
}

// Cho sữa của Cừu
int Cuu::chosua() {
    int sua = rand() % 6; // Sữa ngẫu nhiên từ 0-5 lít
    tongsua += sua * soluong;
    return sua * soluong;
}

// Constructor cho Dê
De::De(int soluongbandau) : Animal("De", soluongbandau) {}

// Tiếng kêu của Dê
void De::keu() {
    cout << "De: Mee Mee!" << endl;
}

// Sinh con cho Dê
int De::sinhcon() {
    return Animal::sinhcon();
}

// Cho sữa của Dê
int De::chosua() {
    int sua = rand() % 11; // Sữa ngẫu nhiên từ 0-10 lít
    tongsua += sua * soluong;
    return sua * soluong;
}
