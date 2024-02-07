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
        friend void chuanhoa_hoten(DoanhNghiep&);
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

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    string tmpa;
    stringstream ssa1(a.hoten);
    vector <string> ssa;
    while(ssa1 >> tmpa) {
        ssa.push_back(tmpa);
    } 

    string tmpb;
    stringstream ssb1(b.hoten);
    vector <string> ssb;
    while(ssb1 >> tmpb) {
        ssb.push_back(tmpb);
    } 

    if(ssa[ssa.size()-1] < ssb[ssb.size()-1]) return true;
    else if (ssa[ssa.size()-1] == ssb[ssb.size()-1] && a.stt < b.stt) return true;
    return false;

}

void sapxep(DoanhNghiep ds[], int n) {
    sort(ds, ds + n, cmp);
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
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}