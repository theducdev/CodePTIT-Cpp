#include <bits/stdc++.h>

using namespace std;
int i = 0;

class DoanhNghiep {
    private:
        string hoten, email;
    public:
        string msv, lop;
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        friend void chuanhoa_hoten(DoanhNghiep&);
        friend void sapxep(DoanhNghiep ds[], int n);

};

DoanhNghiep::DoanhNghiep() {
    msv = hoten = lop  = email ="";
}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    getline(mycin, x.msv);
    getline(mycin, x.hoten);
    getline(mycin, x.lop);
    getline(mycin, x.email);
    return mycin;
}




ostream &operator<<(ostream &mycout, DoanhNghiep x) {
    
    mycout << x.msv << " " << x.hoten << " " << x.lop << " " << x.email << endl;
    return mycout;
}

int main(){
    DoanhNghiep ds[1001];
    int N;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q; cin >> q;
    while(q--) {
        int s; cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for (int i = 0; i < N; i++) {
            if(stoi(ds[i].lop.substr(1,2)) == s%100) cout << ds[i];
        }
    }

    return 0;
}