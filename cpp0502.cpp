#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ten, ns;
	float diem1, diem2, diem3, gpa;
};

void nhap(DoanhNghiep &A) {
    getline(cin, A.ten); 
    cin >> A.ns;
    cin >> A.diem1;
    cin >> A.diem2;
    cin >> A.diem3;
    A.gpa= A.diem1+A.diem2+A.diem3;

    if(A.ns[1]=='/') {
        A.ns="0" + A.ns;
    }
    if(A.ns[4]=='/') {
        A.ns.insert(3,"0");
    }

    
}


void in(DoanhNghiep A) {
    cout << A.ten << " " << A.ns << " " << fixed << setprecision(1) << A.gpa << endl;
}



int main(){
    struct DoanhNghiep A;
    nhap(A);
    in(A);
    return 0;
}


