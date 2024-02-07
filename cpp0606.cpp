#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep
{
    private: 
    string manhanvien, hoten,gt,ns,diachi,masothue, ngayki;

    public: 
    DoanhNghiep();
    void nhap();
    void xuat();
    void chuan_hoa_ns(string s);

};

DoanhNghiep::DoanhNghiep()
{ 
    this-> manhanvien ="00001"; 
    this-> hoten = ""; 
    this-> gt = ""; 
    this-> ns = ""; 
    this-> diachi = ""; 
    this-> masothue = ""; 
    this-> ngayki = ""; 

}

void DoanhNghiep::chuan_hoa_ns(string s){
    int i=0;
    stringstream ss(s);
    string date[3], token;
    while(getline(ss, token, '/'))
        date[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<date[0]<<'/'
        <<setw(2)<<date[1]<<'/'
        <<setw(4)<<date[2]<<' ';
}
void DoanhNghiep::nhap() 
{
    getline(cin, hoten);
    getline(cin, gt);
    getline(cin, ns);
    getline(cin, diachi);
    getline(cin, masothue);
    getline(cin, ngayki);
    
}

void DoanhNghiep::xuat()
{
    cout << manhanvien << " " << hoten << " " << gt << " ";
    chuan_hoa_ns(ns);
    cout << " " << diachi << " "<< masothue << " ";
    chuan_hoa_ns(ngayki);

}

int main(){
    DoanhNghiep a;
    a.nhap();
    a.xuat();
    return 0;

}



