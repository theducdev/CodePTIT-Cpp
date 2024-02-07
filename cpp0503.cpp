#include<bits/stdc++.h>

using namespace std;
struct PhanSo {
            long long tu, mau;
            
        };

void nhap(PhanSo &A) {
    cin >> A.tu >> A.mau;
}

void rutgon(PhanSo &A) {
    long long x=__gcd(A.tu, A.mau);
    A.tu/=x;
    A.mau/=x;
}

void in(PhanSo &A) {
    cout << A.tu << "/"<< A.mau<<endl;
}



int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


