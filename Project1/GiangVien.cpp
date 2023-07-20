#include "GiangVien.h"

void GiangVien::Nhap() {
	CanBo::Nhap();
	cin.ignore();
	cout << "Nhap ten khoa: ";
	getline(cin, this->Khoa);
	int chon;
	do {
		cout << "1. Cu nhan\n";
		cout << "2. Thac si\n";
		cout << "3. Tien si\n";
		cout << "Chon trinh do: ";
		cin >> chon;
		switch (chon) {
		case 1: TrinhDo = "Cu nhan"; this->phuCap = 300; break;
		case 2: TrinhDo = "Thac si"; this->phuCap = 500; break;
		case 3: TrinhDo = "Tien si"; this->phuCap = 1000; break;
		default:
			cout << "Nhap sai. Nhap lai!\n"; system("pause");
			break;
		}
	} while (chon < 1 || chon>3);
	cout << "Nhap so tiet day: ";
	cin >> this->soTietDay;
}

void GiangVien::Xuat(ostream& os) {
	CanBo::Xuat(os);
	os << "- Ten khoa: " << this->Khoa << "- Trinh do: " << this->TrinhDo << "- So tiet day: " << this->soTietDay << endl;;
}

unsigned int GiangVien::TinhLuong() {
	return this->heSoLuong * 730 + this->phuCap + this->soTietDay * 45;
}
GiangVien::GiangVien() {
	Khoa = "CNTT";
	TrinhDo = "Cu nhan";
	soTietDay = 0;
}
