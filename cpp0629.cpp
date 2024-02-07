#include <bits/stdc++.h>

using namespace std;


class DoanhNghiep {
    private:
        string ten; 
    public:
        int sv;
        string ma;
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        
};

DoanhNghiep::DoanhNghiep() {
    ma = ten ="";
    sv = 0;
}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    getline(mycin, x.ma);
    getline(mycin, x.ten);
    mycin >> x.sv;
    cin.ignore();
    return mycin;

}

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if(a.sv > b.sv ) return true;
    if(a.sv == b.sv && a.ma < b.ma) return true;
    return false; 

}

void sapxep(DoanhNghiep ds[], int n) {
    sort(ds, ds + n, cmp);
}

ostream &operator << ( ostream& mycout, DoanhNghiep x) {
    cout << x.ma << " " << x.ten << " " << x.sv << endl;
    return mycout;
}

int main(){
    DoanhNghiep ds[1001];
    int N;
    cin >> N;
    cin.ignore();
    for(int i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    int q; cin >> q;
    while(q--) {
        int a, b; cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for(int i = 0; i < N; i++) {
            if (ds[i].sv >= a && ds[i].sv <=b) cout << ds[i];
        }
    }
    return 0;
}