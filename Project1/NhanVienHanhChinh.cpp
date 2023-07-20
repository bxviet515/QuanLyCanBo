#include "NhanVienHanhChinh.h"
void NhanVienHanhChinh::Nhap(){
	CanBo::Nhap();
cin.ignore();
cout << "Nhap phong ban: ";
getline(cin, this->phongBan);
int chon;
do {
	cout << "1. Truong phong\n";
	cout << "2. Pho phong\n";
	cout << "3. Nhan vien\n";
	cout << "Chon chuc vu: ";
	cin >> chon;
	switch (chon) {
	case 1: chucVu = "Truong phong"; this->phuCap = 2000; break;
	case 2: chucVu = "Pho phong"; this->phuCap = 1000; break;
	case 3: chucVu = "Nhan vien"; this->phuCap = 500; break;
	default:
		cout << "Nhap sai. Nhap lai!\n"; system("pause");
		break;
	}
} while (chon < 1 || chon>3);
cout << "Nhap so ngay cong: ";
cin >> this->soNgayCong;
}

void NhanVienHanhChinh::Xuat(ostream& os) {
	CanBo::Xuat(os);
	cout << "- Ten phong ban: " << this->phongBan << "- Chuc vu: " << this->chucVu << "- So ngay cong: " << this->soNgayCong << endl;;
}

unsigned int NhanVienHanhChinh::TinhLuong() {
	return this->heSoLuong * 730 + this->phuCap + this->soNgayCong * 200;
}


NhanVienHanhChinh::NhanVienHanhChinh() {
	soNgayCong = 0;
	phongBan = "NA";
	chucVu = "NA";
}
