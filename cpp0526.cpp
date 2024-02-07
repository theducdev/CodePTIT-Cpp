#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ten, ns;
};


int chuyenhoa(DoanhNghiep A) {
    string k = A.ns.substr(6,4) + A.ns.substr(3,2) + A.ns.substr(0,2);
    return stoi(k); 
}

bool cmp(DoanhNghiep a, DoanhNghiep b){ 
    return chuyenhoa(a) < chuyenhoa(b); 
}

void sapxep(DoanhNghiep a[],int n){ sort(a,a+n,cmp); }



int main(){
    int N,i;
    cin >> N;
    cin.ignore();
    struct DoanhNghiep ds[N];
    for(i = 0; i < N; i++) {
        cin >> ds[i].ten >> ds[i].ns;
    }
    sapxep(ds, N);
    cout << ds[N-1].ten << endl << ds[0].ten << endl;
    return 0;
}


