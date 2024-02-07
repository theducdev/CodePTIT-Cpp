#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        int tonghang[n]={};
        // for (int i = 0; i < n; i++) tonghang[i]=0;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                tonghang[i] += a[i][j];
            }
        }
        sort(tonghang, tonghang + n);

        int tongcot[n]={};
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                tongcot[j] += a[i][j];
            }
        }
        sort(tongcot, tongcot + n);
        int kq = 0;
        if(tonghang[n-1] >= tongcot[n-1]) {
            kq = tonghang[n-1]*n;
            for (int i = 0; i < n; i++) {
                kq -= tongcot[i];

            }
        }
        else {
            kq = tongcot[n-1]*n;
            for (int i = 0; i < n; i++) {
                kq -= tonghang[i];

            }

        }
        cout << kq;
        cout << endl;
    }
}