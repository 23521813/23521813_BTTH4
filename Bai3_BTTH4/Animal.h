#include<bits/stdc++.h>

using namespace std;

// Lớp cơ sở Animal
class Animal {
protected:
    string loai;
    int soluong; // Số lượng gia súc hiện tại
    int tongsua; // Tổng lượng sữa đã cho

public:
    Animal(string loaigiasuc, int soluongbandau);
    virtual void keu() = 0; // Tiếng kêu của gia súc (ảo thuần túy)
    virtual int sinhcon();  // Sinh con (ngẫu nhiên)
    virtual int chosua() = 0; // Cho sữa (ảo thuần túy)
    virtual void xuatthongtin();
    virtual ~Animal() {}
};

// Lớp Bò
class Bo : public Animal {
public:
    Bo(int soluongbandau);
    void keu() override;
    int sinhcon() override;
    int chosua() override;
};

// Lớp Cừu
class Cuu : public Animal {
public:
    Cuu(int soluongbandau);
    void keu() override;
    int sinhcon() override;
    int chosua() override;
};

// Lớp Dê
class De : public Animal {
public:
    De(int soluongbandau);
    void keu() override;
    int sinhcon() override;
    int chosua() override;
};
