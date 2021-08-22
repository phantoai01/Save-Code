#include<iostream>

using namespace std;
        bool Check(int nam) {
        return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
        }
int main(){
        int a;
        cout << "Nhap gia tri cua a = " ;
        cin >> a;
        if(a > 0){
                cout << a << " la so duong"<< endl;
        }else if(a < 0){
                cout << a << " la so am"<< endl;
        }else{
                cout << "a = " << 0;
        }
        cout << "Hello anh em lai la minh ne" << endl;
        return 0;
}
