#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma;
	string ten, gt, ns,dc,msthue, ngayki;
	
};

void nhap(DoanhNghiep &A) {
    getline(cin, A.ten); 
    cin >> A.gt;
    cin >> A.ns;
    cin.ignore();
    getline(cin, A.dc);
    A.ma = "00001";
    cin >> A.msthue;
    cin >> A.ngayki;

    
}


void in(DoanhNghiep A) {
    cout << A.ma << " " << A.ten << " "<< A.gt << " " << A.ns << " " << A.dc << " " << A.msthue << " " << A.ngayki << endl;
}


int main(){
    struct DoanhNghiep a;
    nhap(a);
    in(a);
    return 0;
}


