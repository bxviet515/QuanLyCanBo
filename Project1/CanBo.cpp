#include "CanBo.h"
void CanBo::Nhap() {
	cout << "Nhap ho ten: \n";
	cin.ignore();
	getline(cin, this->hoTen);
	cout << "Nhap he so luong:\n";
	cin >> this->heSoLuong;
}
void CanBo::Xuat(ostream& os) {
	os << "Ho ten: " << this->hoTen << "- He so luong: " << this->heSoLuong;
}
CanBo::CanBo() {
	hoTen = "NA";
	heSoLuong = 0;
}
