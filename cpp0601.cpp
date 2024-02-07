#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep
{
    private: 
    string msv, hoten, lop,ns;
    float gpa;

    public: 
    DoanhNghiep();
    void nhap();
    void xuat();
    void chuan_hoa_ns(string s);

};

DoanhNghiep::DoanhNghiep()
{ 
    this -> msv = "B20DCCN001"; 
    this-> hoten = ""; 
    this-> lop = ""; 
    this-> ns = ""; 
    this->gpa = 0; 
}

void DoanhNghiep::chuan_hoa_ns(string s){
    if(ns[2] != '/' ) ns.insert(ns.begin(), '0');
    if(ns[5] != '/' ) ns.insert(ns.begin() + 3, '0');
    while(ns.length() < 10) ns.insert(ns.begin() +6, '0');
}
void DoanhNghiep::nhap() 
{
    getline(cin, hoten);
    getline(cin, lop);
    getline(cin, ns);
    cin>>gpa;
    chuan_hoa_ns(ns);
    
}

void DoanhNghiep::xuat()
{
    
    cout << msv << " " << hoten << " " << lop << " " << ns;
    cout << " " << fixed << setprecision(2) << gpa;

}

int main(){
    DoanhNghiep a;
    a.nhap();
    a.xuat();
    return 0;
}




