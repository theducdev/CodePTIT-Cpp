#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma;
	string ten, lop, ns;
	float gpa;
};

void nhapThongTinSV(DoanhNghiep &A) {
    getline(cin, A.ten); 
    cin >> A.lop;
    cin >> A.ns;
    cin >> A.gpa;
    A.ma = "N20DCCN001";
    if(A.ns[1]=='/') {
        A.ns="0" + A.ns;
    }
    if(A.ns[4]=='/') {
        A.ns.insert(3,"0");
    }

    
}


void inThongTinSV(DoanhNghiep A) {
    cout << A.ma << " " << A.ten << " "<< A.lop << " " << A.ns << " " << fixed << setprecision(2) << A.gpa << endl;
}



int main(){
    struct DoanhNghiep a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}


