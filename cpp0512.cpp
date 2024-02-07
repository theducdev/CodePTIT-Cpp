#include <bits/stdc++.h>

using namespace std;

struct PhanSo {
    long long int tu, mau;
};

void rutgon(PhanSo &a) {
    long long tmp = __gcd(a.tu, a.mau);
    a.tu/=tmp;
    a.mau/=tmp;
}

PhanSo tong2phanso(PhanSo &a, PhanSo &b) {
    long long tmp1 = __gcd(a.mau, b.mau);
    long long tmp = a.mau*b.mau/tmp1;
    PhanSo c;
    c.tu = tmp/a.mau*a.tu + tmp/b.mau*b.tu;
    c.mau = tmp;
    rutgon(c);
    return c;
}

void process(PhanSo &a, PhanSo &b) {
    PhanSo x = tong2phanso(a, b);
    PhanSo c;
    c.tu = x.tu * x.tu;
    c.mau = x.mau * x.mau;
    rutgon(c);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    rutgon(d);
    cout << d.tu << "/" << d.mau << endl;

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}