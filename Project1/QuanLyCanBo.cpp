#include "QuanLyCanBo.h"
void QuanLyCanBo::NhapDanhSach() {
	CanBo* canBo;
	int chon;
	do {
		system("cls"); //xoa man hinh
		cout << "1. Nhap giang vien: \n";
		cout << "2. Nhap Nhan vien hanh chinh: \n";
		cout << "3. Tro ve\n";
		cout << "Chon menu: ";
		cin >> chon;
		switch (chon)
		{
		case 1: canBo = new GiangVien(); canBo->Nhap(); dsCanBo.push_back(canBo); break;
		case 2: canBo = new NhanVienHanhChinh(); canBo->Nhap(); dsCanBo.push_back(canBo); break;
		default:
			break;
		}
	} while (chon != 3);
}

void QuanLyCanBo::InDanhSach(ostream& os) {
	for (int i = 0; i < dsCanBo.size(); i++) {
		dsCanBo[i]->Xuat(os);
	}
}
unsigned int QuanLyCanBo::TongLuong() {
	unsigned Tong = 0;
	for (int i = 0; i < dsCanBo.size(); i++) {
		Tong += dsCanBo[i]->TinhLuong();
	}
	return Tong;
}
void QuanLyCanBo::TimCanBoLuongCao() {
	ofstream Outfile;
	Outfile.open("CanBoLuongCaoNhat.txt");
	CanBo* canBoLuongCao = NULL;
	for (int i = 0; i < dsCanBo.size(); i++) {
		if ((string)typeid(*dsCanBo[i]).name() == "class GiangVien") {
			if (canBoLuongCao == NULL) {
				canBoLuongCao = dsCanBo[i];
			}
			else {
				if (dsCanBo[i]->TinhLuong() > canBoLuongCao->TinhLuong()) {
					canBoLuongCao = dsCanBo[i];
				}
			}
		}
	}
	for (int i = 0; i < dsCanBo.size(); i++) {
		if (dsCanBo[i]->TinhLuong() == canBoLuongCao->TinhLuong()) {
			dsCanBo[i]->Xuat(Outfile);
		}
	}
	Outfile.close();
}
