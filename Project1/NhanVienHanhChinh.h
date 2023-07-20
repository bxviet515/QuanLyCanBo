#pragma once
#include "CanBo.h"
class NhanVienHanhChinh :public CanBo {
private:
	string phongBan, chucVu;
	unsigned short soNgayCong;
public:
	void Nhap();
	void Xuat(ostream& os);
	unsigned int TinhLuong();
	NhanVienHanhChinh();
};