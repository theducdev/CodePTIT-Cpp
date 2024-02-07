#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma, ten, lop;
	float diem1, diem2, diem3;
};

void nhap(DoanhNghiep &A) {
    cin.ignore();
    getline(cin, A.ma);
    getline(cin, A.ten); 
    cin >> A.lop;
    cin >> A.diem1 >> A.diem2 >> A.diem3;

}


bool cmp(DoanhNghiep a, DoanhNghiep b) {
    return a.ma < b.ma;
}

void sap_xep(DoanhNghiep A[], int n) {
    sort(A, A + n, cmp);
}

void in_ds(DoanhNghiep A[], int n) {
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " " << A[i].ma << " " << A[i].ten << " "<< A[i].lop << " " << fixed << setprecision(1) << A[i].diem1 << " " << A[i].diem2 << " " << A[i].diem3 << endl;
    }
}



int main(){
    int n;
    cin >> n;
    struct DoanhNghiep *ds = new DoanhNghiep[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

