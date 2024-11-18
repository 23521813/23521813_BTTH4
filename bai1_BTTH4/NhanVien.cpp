#include <bits/stdc++.h>
#include "NhanVien.h"

using namespace std;

// Triển khai constructor cho NhanVien
NhanVien::NhanVien(string m, string t, double l) : maso(m), ten(t), luongcoban(l) {}

// Triển khai phương thức xuất cho NhanVien
void NhanVien::xuat() {
    cout << "Ma so: " << maso << endl;
    cout << "Ten: " << ten << endl;
    cout << "Luong co ban: " << luongcoban << endl;
}

// Constructor cho QuanLy
QuanLy::QuanLy(string m, string t, double l, double tlt) : NhanVien(m, t, l), tylethuong(tlt) {}

// Triển khai phương thức tính tiền thưởng cho QuanLy
double QuanLy::tienthuong() {
    return luongcoban * tylethuong;
}

// Triển khai phương thức xuất cho QuanLy
void QuanLy::xuat() {
    NhanVien::xuat();
    cout << "Ty le thuong: " << tylethuong << endl;
    cout << "Tien thuong: " << tienthuong() << endl;
}

// Constructor cho KySu
KySu::KySu(string m, string t, double l, int sgl) : NhanVien(m, t, l), sogiolamthem(sgl) {}

// Triển khai phương thức tính tiền thưởng cho KySu
double KySu::tienthuong() {
    return sogiolamthem * 100000;
}

// Triển khai phương thức xuất cho KySu
void KySu::xuat() {
    NhanVien::xuat();
    cout << "So gio lam them: " << sogiolamthem << endl;
    cout << "Tien thuong: " << tienthuong() << endl;
}
