#include<bits/stdc++.h>
#include "Room.h"

using namespace std;

// Constructor cho lớp Room
Room::Room(string name, int nights, double phidv, double phipv)
    : roomname(name), sodem(nights), phidichvu(phidv), phiphucvu(phipv) {}

// Phương thức Xuat cho lớp Room
void Room::Xuat() {
    cout << "Phong: " << roomname << endl;
    cout << "So dem: " << sodem << endl;
}

// Constructor cho Deluxe
Deluxe::Deluxe(string name, int nights, double phidv, double phipv)
    : Room(name, nights, phidv, phipv) {}

// Tính doanh thu cho Deluxe
double Deluxe::tinhdoanhthu() {
    return sodem * 750000 + phidichvu + phiphucvu;
}

// Constructor cho Premium
Premium::Premium(string name, int nights, double phidv)
    : Room(name, nights, phidv) {}

// Tính doanh thu cho Premium
double Premium::tinhdoanhthu() {
    return sodem * 500000 + phidichvu;
}

// Constructor cho Business
Business::Business(string name, int nights)
    : Room(name, nights, 0) {} // Business không có phí dịch vụ

// Tính doanh thu cho Business
double Business::tinhdoanhthu() {
    return sodem * 300000;
}
