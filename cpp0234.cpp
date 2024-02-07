#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, x;
        cin >> n >> m >> x;
        int a[n][m];
        for (int i =0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin >> a[i][j];
            }
        }
        int tren = 0, duoi = n-1, trai = 0, phai = m - 1;
        int b[n*m];
        int k=0;
        while(tren <= duoi && trai <= phai) {
            for(int i = trai; i <= phai; i++) {
                b[k]=a[tren][i];
                k++;
            }
            tren++;
            for(int i = tren; i <= duoi; i++) {
                b[k]=a[i][phai];
                k++;
            }
            phai--;
            for(int i = phai; i >= trai; i--) {
                b[k]=a[duoi][i];
                k++;
            }
            duoi--;
            for(int i = duoi; i >= tren; i--) {
                b[k]=a[i][trai];
                k++;
            }
            trai++;


        }
        cout << b[x-1] << " ";
        cout << endl;
    }
}