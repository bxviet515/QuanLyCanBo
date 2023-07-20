#pragma once
#include<vector>
#include "CanBo.h"
#include "GiangVien.h"
#include "NhanVienHanhChinh.h"
#include<fstream>
class QuanLyCanBo
{
private:
	vector<CanBo*>dsCanBo;
public:
	void NhapDanhSach();
	void InDanhSach(ostream& os);
	unsigned int TongLuong();
	void TimCanBoLuongCao();
};

