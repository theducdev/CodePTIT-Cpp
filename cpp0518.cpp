#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma;
	string ten, gt, ns,dc,msthue, ngayki;
	
};

int i=1;

void nhap(DoanhNghiep &A) {
    string s = to_string(i++);
    cin.ignore();
    A.ma = string(5 - s.size(), '0') + s;
    getline(cin, A.ten); 
    cin >> A.gt;
    cin >> A.ns;
    cin.ignore();
    getline(cin, A.dc);
    cin >> A.msthue;
    cin >> A.ngayki;   
}

int chuyenhoa(DoanhNghiep A) {
    string k = A.ns.substr(6,4) + A.ns.substr(0,2) + A.ns.substr(4,2);
    return stoi(k); 
}

bool cmp(DoanhNghiep a, DoanhNghiep b){ 
    return chuyenhoa(a) < chuyenhoa(b); 
}

void sapxep(DoanhNghiep a[],int n){ sort(a,a+n,cmp); }

void inds(DoanhNghiep A[], int n) {
    for(int i=0;i<n;i++) {
        chuyenhoa(A[i]); 
        cout << A[i].ma << " " << A[i].ten << " "<< A[i].gt << " " << A[i].ns << " " << A[i].dc << " " << A[i].msthue << " " << A[i].ngayki << endl;
    }
    
}


int main(){
    struct DoanhNghiep ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


