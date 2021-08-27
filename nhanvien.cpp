#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

class NhanVien
{
private:
	string hoten, chucvu, gioitinh, quequan;
	int namsinh, namvaolam;
public:
	NhanVien();
	friend istream& operator >> (istream& is, NhanVien &b);
	friend ostream& operator << (ostream& os, NhanVien b);
	int getnamvaolam() {
		return namvaolam;
	}
};

NhanVien::NhanVien() {
	string hoten = chucvu = gioitinh = quequan = " ";
	int namsinh = namvaolam = 0;
}

istream& operator >> (istream& is, NhanVien& b)
{
	is.ignore();
	cout << "\nHo ten Nhan Vien: ";    getline(is, b.hoten);
	cout << "\nChuc Vu: ";			getline(is, b.chucvu);
	cout << "\nGioi Tinh: ";       getline(is, b.gioitinh);
	cout << "\nQue Quan: ";		getline(is, b.quequan);
	cout << "\nNam Sinh: "; is >> b.namsinh;
	cout << "\nNam Vao Lam Viec: "; is >> b.namvaolam;
	return is;
}
ostream& operator << (ostream& os, NhanVien b)
{
	os << setw(20) << left << b.hoten;
	os << setw(20) << left << b.chucvu;
	os << setw(20) << left << b.gioitinh;
	os << setw(20) << left << b.quequan;
	os << setw(20) << left << b.namsinh;
	os << setw(20) << left << b.namvaolam;
	os << endl;
	return os;
}
int main() {
	int n;
	cout << "Nhap so luong Nhan Vien: ";
	cin >> n;
	NhanVien * nv;
	nv = new NhanVien[n];
	for (int i = 0; i < n; i++) {
		cin >> nv[i];
	}
	cout << setw(20) << left << "Ho Va Ten";
	cout << setw(20) << left << "Cong Viec";
	cout << setw(20) << left << "Gioi Tinh";
	cout << setw(20) << left << "Que Quan";
	cout << setw(20) << left << "Nam Sinh";
	cout << setw(20) << left << "Nam vao lam viec ";
	cout << endl;
	for (int i = 0; i < n; ++i) {
		if (int count = 2021 - nv[i].getnamvaolam() >= 20) {
		cout << nv[i];
		}
	}
	delete[] nv;
	return 0;
}
