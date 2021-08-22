#include<iostream>
#include "matrix.cpp"

using namespace std;
int main() {
    MT a;
    a.nhap();
    MT b;
    b.nhap();
    MT c;
    c = a + b;
    c.xuat();
    return 0;
}
