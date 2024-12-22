#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Khai bao lop SinhVien
class SinhVien {
public:
    string maSV;
    string hoTen;
    string lop;
    string email;

    // Ham khoi tao lop SinhVien
    SinhVien(string _maSV, string _hoTen, string _lop, string _email) {
        maSV = _maSV;
        hoTen = _hoTen;
        lop = _lop;
        email = _email;
    }
};

// Ham so sanh giua hai sinh vien theo lop va ma sinh vien
bool soSanh(const SinhVien& a, const SinhVien& b) {
    if (a.lop != b.lop) {
        return a.lop < b.lop;  // So sanh theo lop
    }
    return a.maSV < b.maSV;  // Neu lop giong nhau, so sanh theo ma sinh vien
}

int main() {
    int n;
    cin >> n;  // Nhap so luong sinh vien
    vector<SinhVien> sinhVienList;

    // Nhap thong tin cua tung sinh vien va them vao danh sach
    for (int i = 0; i < n; i++) {
        string maSV, hoTen, lop, email;
        cin >> maSV;
        cin.ignore();  // Bo qua ky tu newline ('\n')
        getline(cin, hoTen);
        cin >> lop;
        cin >> email;

        // Tao doi tuong SinhVien va them vao danh sach
        sinhVienList.push_back(SinhVien(maSV, hoTen, lop, email));
    }

    // Sap xep danh sach sinh vien
    sort(sinhVienList.begin(), sinhVienList.end(), soSanh);

    // In ra ket qua da sap xep
    for (int i = 0; i < n; i++) {
        const SinhVien& sv = sinhVienList[i];  // Lay sinh vien theo chi so
        cout << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.email << endl;
    }

    return 0;
}
