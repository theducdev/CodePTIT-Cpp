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

long long lcm(long long a, long long b) {
    return a*b/__gcd(a,b);
}

PhanSo tong(PhanSo p, PhanSo q){
    long long mc = lcm(p.mau, q.mau);
    PhanSo a;
    a.tu=0;
    a.tu+=mc / p.mau * p.tu;
    a.tu+=mc / q.mau * q.tu;
    a.mau=mc;
    rutgon(a);
    return a;

}



void in(PhanSo &A) {
    cout << A.tu << "/"<< A.mau<<endl;
}



int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


