#pragma once
#include "CanBo.h"
class GiangVien:public CanBo
{
private:
	string Khoa, TrinhDo;
	unsigned short soTietDay;
public:
	GiangVien();
	void Nhap();
	void Xuat(ostream& os);
	unsigned int TinhLuong();
};

