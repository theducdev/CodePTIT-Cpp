#include <bits/stdc++.h>

using namespace std;

struct ThoiGian {
    int h, m, s;
};

void nhap(ThoiGian ds[], int n) {
    for(int i = 0; i < n; i++) cin >> ds[i].h >>ds[i].m >>ds[i].s;
}

int tong(ThoiGian a) {
    long long tong = a.h*3600 + a.m*60 + a.s;
    return tong;
}

bool cmp(ThoiGian a, ThoiGian b) {
    return tong(a) < tong(b);
}

void sapxep(ThoiGian ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in(ThoiGian ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<ds[i].h << " " << ds[i].m << " " <<ds[i].s << endl;
    }
}

int main() {
    int n;
    cin >> n;
    ThoiGian ds[n];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}

