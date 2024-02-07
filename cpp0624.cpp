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
    cin.ignore();
    while(q--) {
        string s; getline(cin, s);
        string a; 
        for (int i = 0; i < s.length(); i++) a.push_back(toupper(s[i]));
        cout << "DANH SACH SINH VIEN NGANH " << a << ":" << endl;
        for (int i = 0; i < N; i++) {
            if(ds[i].msv[5] == s[0]) {
                if ((s[0] == 'K' || s[0] == 'V' || s[0] == 'D'))cout << ds[i];
				else if (ds[i].lop[0] != 'E') cout << ds[i];
            }
        }
    }

    return 0;
}