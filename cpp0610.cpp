#include <bits/stdc++.h> 

using namespace std;

long long gcd(long long a, long long b) 
{   if(b==0) return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b) {
    return a*b/gcd(a,b);
}

class PhanSo
{
    private:
        long long tu, mau;
    public:
        PhanSo(long long tu, long long mau);
        friend istream &operator >> (istream &in, PhanSo &a);
        friend ostream &operator << (ostream &out, PhanSo a);
        friend PhanSo operator + (PhanSo, PhanSo);
        
};

PhanSo::PhanSo(long long tu, long long mau)
{
    this->tu = tu;
    this->mau = mau;
}
ostream &operator << (ostream &out, PhanSo a)
{
    out << a.tu << "/" << a.mau;
    return out;
}
istream &operator >> (istream &in, PhanSo &a) 
{
    in >> a.tu >> a.mau;
    return in;
}



PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo tong(1,1);
    tong.tu=(a.tu) * (b.mau) + (a.mau) * (b.tu);
    tong.mau = (a.mau) * (b.mau);
    long long k = gcd(tong.tu, tong.mau);
    tong.tu/=k;
    tong.mau/=k;
    return tong;
}


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}