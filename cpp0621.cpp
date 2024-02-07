#include <bits/stdc++.h>

using namespace std;

struct DoanhNghiep {

        string hoten, email;
        string msv, lop;

};


void nhap(DoanhNghiep &a){  
    getline(cin >> ws , a.hoten); 
    getline(cin >> ws , a.lop); 
    getline(cin >> ws , a.email); 
}

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    
    if (a.msv < b.msv) return true;
    return false; 
}


void in(DoanhNghiep s){ 
    cout << s.msv << " " << s.hoten << " " << s.lop << " " << s.email << endl; 
}

int main() { 
    DoanhNghiep a[10001]; 

    int d = 0; 
    while( getline(cin>>ws, a[d].msv )){ 
        nhap(a[d]);
        d++; 
    } 
    sort(a,a+d,cmp); 
    for(int i=0; i<d;i++){ in(a[i]); } 
    return 0; 
}