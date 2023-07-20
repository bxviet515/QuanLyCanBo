#include "QuanLyCanBo.h"
#include <fstream>
#include <conio.h> // hoặc curses.h trên Linux

int main() {
    QuanLyCanBo QLCB;
    int chon = 0; // Bắt đầu ở lựa chọn 0
    char input;

    do {
        system("cls");
        cout << (chon == 0 ? "> " : "  ") << "0. Thoat\n";
        cout << (chon == 1 ? "> " : "  ") << "1. Nhap danh sach\n";
        cout << (chon == 2 ? "> " : "  ") << "2. In danh sach ra man hinh\n";
        cout << (chon == 3 ? "> " : "  ") << "3. In danh sach ra file\n";
        cout << (chon == 4 ? "> " : "  ") << "4. Tinh tong luong\n";
        cout << (chon == 5 ? "> " : "  ") << "5. Tim Giang vien luong cao nhat\n";
        cout << "\n[Di chuyen mui ten le xuong de lua chon!]\n\n";
        cout << "[Nhan Esc de thoat!]";

        // Đọc phím từ bàn phím
        input = _getch();

        // Xử lý phím mũi tên
        switch (input) {
        case 72: // Phím mũi tên lên
            chon = (chon - 1 + 6) % 6;
            break;
        case 80: // Phím mũi tên xuống
            chon = (chon + 1) % 6;
            break;
        case 13: // Phím Enter
            if (chon == 0) {
                return 0;
            }
            switch (chon) {
            case 0: break;
            case 1: QLCB.NhapDanhSach(); break;
            case 2: QLCB.InDanhSach(cout); system("pause"); break;
            case 3: {
                ofstream Outfile;
                Outfile.open("Danh sach.txt");
                QLCB.InDanhSach(Outfile);
                Outfile.close();
                break;
            }
            case 4: {
                unsigned TongLuong = QLCB.TongLuong();
                cout << "Tong luong: " << TongLuong;
                system("pause");
                break;
            }
            case 5: {
                QLCB.TimCanBoLuongCao();
                break;
            }
            default:cout << "Chon sai"; system("pause");
                break;
            }
            break;
        }
    } while (input != 27); // Nếu nhấn Esc (mã ASCII là 27) thì thoát

    return 0;
}








/*
 // Chon lua chon nhap tu ban phim
#include "QuanLyCanBo.h"
#include<fstream>
int main() {
	QuanLyCanBo QLCB;
	int chon;
	do
	{
		system("cls");
		cout << "0. Thoat\n";
		cout << "1. Nhap danh sach\n";
		cout << "2. In danh sach ra man hinh\n";
		cout << "3. In danh sach ra file\n";
		cout << "4. Tinh tong luong\n";
		cout << "5. Tim Giang vien luong cao nhat\n";
		cout << "Chon menu: \n";
		cin >> chon;
		switch (chon)
		{
		case 0: break;
		case 1: QLCB.NhapDanhSach(); break;
		case 2: QLCB.InDanhSach(cout); system("pause"); break;
		case 3: {
			ofstream Outfile;
			Outfile.open("Danh sach.txt");
			QLCB.InDanhSach(Outfile);
			Outfile.close();
			break;
		}
		case 4: {
			unsigned TongLuong = QLCB.TongLuong();
			cout << "Tong luong: " << TongLuong;
			system("pause");
			break;
		}
		case 5: {
			QLCB.TimCanBoLuongCao(); break;
		}
		default:cout << "Chon sai"; system("pause");
			break;
		}
	} while (chon != 0);
	return 0;
}
*/