#include <bits/stdc++.h>

using namespace std;
int i = 0;

class DoanhNghiep {
    private:
        string mnv, hoten, gt, ns, dc, masothue, ngayki;
    public:
        int tuoi;
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        friend void chuanhoa_hoten(DoanhNghiep&);
        friend void sapxep(DoanhNghiep ds[], int n);

};

DoanhNghiep::DoanhNghiep() {
    mnv = hoten = gt = ns = dc = masothue = ngayki = "";

}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    i++;
    x.mnv = string(5 - to_string(i).length(), '0') + to_string(i);
    scanf("\n");
    getline(mycin, x.hoten);
    getline(mycin, x.gt);
    getline(mycin, x.ns);
    getline(mycin, x.dc);
    getline(mycin, x.masothue);
    getline(mycin, x.ngayki);
    if(x.ns[2] != '/' ) x.ns.insert(x.ns.begin(), '0');
    if(x.ns[5] != '/' ) x.ns.insert(x.ns.begin() + 3, '0');
    while(x.ns.length() < 10) x.ns.insert(x.ns.begin() +6, '0');
    string s = x.ns.substr(6,4) + x.ns.substr(0,2) + x.ns.substr(3,2); 
    x.tuoi = stoi(s);
    return mycin;
}

void chuanhoa_hoten(DoanhNghiep &a) {
    string s = "";
    stringstream ss(a.hoten);
    string token;
    while ( ss >> token) {
        s += toupper(token[0]);
        for (int i = 1; i < token.length(); i++) {
            s += tolower(token[i]);
        }
        s += " ";
    }
    s.erase(s.length() - 1);
    a.hoten = s;

}

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    return a.tuoi < b.tuoi;
}

void sapxep(DoanhNghiep ds[], int n) {
    sort(ds, ds + n, cmp);

}

ostream &operator<<(ostream &mycout, DoanhNghiep x) {
    chuanhoa_hoten(x);
    mycout << x.mnv << " " << x.hoten << " " << x.gt << " " << x.ns << " "  << x.dc << " " << x.masothue << " " << x.ngayki  << endl;
    return mycout;
}

int main(){
    DoanhNghiep ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}