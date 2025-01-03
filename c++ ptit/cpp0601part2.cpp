#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string id, name, birth, lop;
    float gpa;

public:
    SinhVien() {}

    void nhap() {
        id = "B20DCCN001";
        getline(cin, name);
        getline(cin, lop);
        getline(cin, birth);
        cin >> gpa;
        if (birth[1] == '/') birth.insert(0, "0");
        if (birth[4] == '/') birth.insert(3, "0");
    }

    void xuat() {
        cout << id << " " << name << " " << lop << " " << birth << " " << fixed << setprecision(2) << gpa;
    }
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

