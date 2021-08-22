#include<iostream>
using namespace std;

class MT {
private:
    int n, m, a[100][100];
public:
    void nhap() {
        cout << "Nhap so hang cua ma tran: ";
        cin >> n;
        cout << "Nhap So cot cua ma tran: ";
        cin >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << "a[" << i << "]" << "[" << j << "] = ";
                cin >> a[i][j];
            }
        }
    }
    void xuat() {
        cout << "Mang vua nhap la." << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend MT operator + (MT a, MT b) {
        if (a.n != b.n || a.m != b.m) {
            return a;
        }
        MT c;
        c.n = a.n;
        c.m = a.m;
        for (int i = 0; i < c.n; i++) {
            for (int j = 0; j < c.m; j++) {
                c.a[i][j] = a.a[i][j] + b.a[i][j];
            }
        }
        return c;
    }

};