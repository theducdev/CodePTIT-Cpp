#include <bits/stdc++.h>

using namespace std;
int i = 0;

class DoanhNghiep {
    public:
        string stt;
        string hoten, bomon;
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        friend void chuanhoa_bomon(DoanhNghiep&);
        friend void sapxep(DoanhNghiep ds[], int n);

};

DoanhNghiep::DoanhNghiep() {
    hoten = bomon ="";
}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    i++;
    x.stt = "GV" + string(2 - to_string(i).length(), '0') + to_string(i);
    getline(mycin, x.hoten);
    getline(mycin, x.bomon);
    return mycin;
    chuanhoa_bomon(x);

}

void chuanhoa_bomon(DoanhNghiep &x) {
    string s;
    stringstream ss(x.bomon);
    string tmp;
    while(ss >> tmp) {
        s += toupper(tmp[0]);
    }
    x.bomon = s;

}



ostream &operator<<(ostream &mycout, DoanhNghiep x) {
    chuanhoa_bomon(x);
    mycout << x.stt << " " << x.hoten << " " << x.bomon << endl;
    return mycout;
}  

int main(){
    DoanhNghiep ds[1001];
    int N;
    cin >> N;
    cin.ignore();
    for(int j=0;j<N;j++){
        cin >> ds[j];
        
    }
    
    int q; cin >> q;
    cin.ignore();
    while(q--) {
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp, a;
        while(ss>>tmp) a+=toupper(tmp[0]);
        cout << "DANH SACH GIANG VIEN BO MON " << a << ":" << endl;
        for (int i = 0; i < N; i++) {
            if(ds[i].bomon[0] == s[0]) {
                cout << ds[i];
			
            }
        }
    }

    return 0;
}