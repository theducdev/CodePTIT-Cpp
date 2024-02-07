#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma;
	string ten, gt, ns,dc,msthue, ngayki;
	
};

void nhap(DoanhNghiep &A) {
    cin.ignore();
    getline(cin, A.ten); 
    cin >> A.gt;
    cin >> A.ns;
    cin.ignore();
    getline(cin, A.dc);
    cin >> A.msthue;
    cin >> A.ngayki;

    
}


void inds(DoanhNghiep A[], int n) {
    for(int i=0;i<n;i++) {
        string res=to_string(i+1);
        while(res.size()<5) {
            res="0" + res;
        }
        cout << res << " " << A[i].ten << " "<< A[i].gt << " " << A[i].ns << " " << A[i].dc << " " << A[i].msthue << " " << A[i].ngayki << endl;
    }
    
}


int main(){
    struct DoanhNghiep ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}


