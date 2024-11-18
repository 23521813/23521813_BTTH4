#include <bits/stdc++.h>
#include "NhanVien.h"

using namespace std;

// Hàm nhập thông tin cho QuanLy
QuanLy nhapquanly() {
    string maso, ten;
    double luongcoban, tylethuong;

    cout << "Nhap ma so quan ly: ";
    cin >> maso;
    cout << "Nhap ten quan ly: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Nhap luong co ban: ";
    cin >> luongcoban;
    cout << "Nhap ty le thuong: ";
    cin >> tylethuong;

   return QuanLy(maso, ten, luongcoban, tylethuong);
}

// Hàm nhập thông tin cho KySu
KySu nhapkysu() {
    string maso, ten;
    double luongcoban;
    int sogiolamthem;

    cout << "Nhap ma so ky su: ";
    cin >> maso;
    cout << "Nhap ten ky su: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Nhap luong co ban: ";
    cin >> luongcoban;
    cout << "Nhap so gio lam them: ";
    cin >> sogiolamthem;

   return KySu(maso, ten, luongcoban, sogiolamthem);
}

int main() {
    QuanLy quanLy = nhapquanly();
    KySu kySu = nhapkysu();

    cout << "\nThong tin Quan Ly:" << endl;
    quanLy.xuat();

    cout << "\nThong tin Ky Su:" << endl;
    kySu.xuat();

    return 0;
}
