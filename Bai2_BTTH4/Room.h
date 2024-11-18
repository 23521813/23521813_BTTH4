#include<bits/stdc++.h>

using namespace std;

// Lớp cơ sở Room
class Room {
protected:
    string roomname;   // Tên phòng
    int sodem;         // Số đêm
    double phidichvu;  // Phí dịch vụ
    double phiphucvu;  // Phí phục vụ (chỉ dành cho Deluxe)

public:
    Room(string name, int nights, double phidv, double phipv = 0);
    virtual double tinhdoanhthu() = 0; // Phương thức ảo thuần túy
    virtual void Xuat();
    virtual ~Room() {} // Destructor ảo
};

// Lớp Deluxe
class Deluxe : public Room {
public:
    Deluxe(string name, int nights, double phidv, double phipv);
    double tinhdoanhthu() override;
};

// Lớp Premium
class Premium : public Room {
public:
    Premium(string name, int nights, double phidv);
    double tinhdoanhthu() override;
};

// Lớp Business
class Business : public Room {
public:
    Business(string name, int nights);
    double tinhdoanhthu() override;
};

