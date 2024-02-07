#include<bits/stdc++.h>

using namespace std;
struct MatHang {
    int stt;
    string ten, nhom;
    float giamua, giaban;
    float loinhuan;
};

void nhap( MatHang ds[], int n) {
    for(int i = 0; i < n; i++) {
        ds[i].stt = i + 1;
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].giamua;
        cin >> ds[i].giaban;
        ds[i].loinhuan = ds[i].giaban - ds[i].giamua;
    }
}

bool cmp1(MatHang a, MatHang b) {
    return a.loinhuan > b.loinhuan;
}

void sapxep(MatHang ds[], int n ) {
        sort(ds, ds+n, cmp1);
}

void in(MatHang ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].stt << " " << ds[i].ten << " " << ds[i].nhom << " " << fixed << setprecision(2) << ds[i].loinhuan << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct MatHang ds[n];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}






