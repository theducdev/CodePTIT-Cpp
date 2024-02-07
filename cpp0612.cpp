#include <bits/stdc++.h>

using namespace std;
int i = 0;

class DoanhNghiep {
    private:
        string msv, hoten, lop, ns;
        float gpa;
    public:
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        friend void chuanhoa_hoten(DoanhNghiep&);

};

DoanhNghiep::DoanhNghiep() {
    msv = hoten = lop = ns = "";
    gpa = 0;
}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    i++;
    x.msv = "B20DCCN" + string(3 - to_string(i).length(), '0') + to_string(i);
    cin.ignore();
    getline(mycin, x.hoten);
    getline(mycin, x.lop);
    getline(mycin, x.ns);
    cin >> x.gpa;
    if(x.ns[2] != '/' ) x.ns.insert(x.ns.begin(), '0');
    if(x.ns[5] != '/' ) x.ns.insert(x.ns.begin() + 3, '0');
    while(x.ns.length() < 10) x.ns.insert(x.ns.begin() +6, '0');
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

ostream &operator<<(ostream &mycout, DoanhNghiep x) {
    chuanhoa_hoten(x);
    mycout << x.msv << " " << x.hoten << " " << x.lop << " " << x.ns << " " << fixed << setprecision(2) << x.gpa << endl;
    return mycout;
}

int main(){
    DoanhNghiep ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}