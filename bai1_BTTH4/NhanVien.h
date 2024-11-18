#include <bits/stdc++.h>

using namespace std;

// Lớp cơ sở NhanVien
class NhanVien {
protected:
    string maso;
    string ten;
    double luongcoban;

public:
    NhanVien(string m, string t, double l);
    virtual double tienthuong() = 0;
    virtual void xuat();
    virtual ~NhanVien() {}
};

// Lớp con QuanLy
class QuanLy : public NhanVien {
private:
    double tylethuong;

public:
    QuanLy(string m, string t, double l, double tlt);
    double tienthuong() override;
    void xuat() override;
};

// Lớp con KySu
class KySu : public NhanVien {
private:
    int sogiolamthem;

public:
    KySu(string m, string t, double l, int sgl);
    double tienthuong() override;
    void xuat() override;
};

