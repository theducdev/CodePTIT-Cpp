#include <bits/stdc++.h> 
using namespace std; 
int cnt=0; 
struct DoanhNghiep{ 
    int stt; string msv,ten,lop,email,dn; 
}; 
void nhapSV(DoanhNghiep& p){ 
    cnt++; 
    p.stt=cnt; 
    cin>>p.msv; 
    cin.ignore(); 
    getline(cin,p.ten); 
    cin>>p.lop>>p.email>>p.dn; 
} 
void nhap(DoanhNghiep a[],int n){ 
    for (int i=0;i<n;i++){ 
        nhapSV(a[i]); 
    } 
} 
void in(DoanhNghiep p){ 
    cout<<p.stt<<" "<<p.msv<<" "<<p.ten<<" "<<p.lop<<" "<<p.email<<" "<<p.dn<<endl; 
} 
bool cmp(DoanhNghiep a,DoanhNghiep b){ 
    return a.ten<b.ten; 
} 
int main(){ 
    int n; cin >> n;
    DoanhNghiep ds[n];
    nhap(ds, n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string s;
        cin >> s;
        vector <DoanhNghiep> v;
        for (int i = 0; i < n; i++) {
            if (ds[i].dn == s) v.push_back(ds[i]);
        }
        sort(v.begin(),v.end(),cmp);
        for (auto x : v) in(x);
        cout << endl;
    }
}
