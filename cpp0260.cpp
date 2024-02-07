#include <bits/stdc++.h>

using namespace std;

int main() {
    
    
        int n; cin >> n;
        int b[n*n];
        for(int i = 0; i < n*n; i++) cin >> b[i];
        sort(b, b+n*n);

        int a[n][n];
        int tren = 0, duoi = n-1, trai = 0, phai = n - 1;
        int k=0;
        while(tren <= duoi && trai <= phai) {
            for(int i = trai; i <= phai; i++) {
                a[tren][i]=b[k];
                k++;
            }
            tren++;
            for(int i = tren; i <= duoi; i++) {
                a[i][phai]=b[k];
                k++;
            }
            phai--;
            for(int i = phai; i >= trai; i--) {
                a[duoi][i]=b[k];
                k++;
            }
            duoi--;
            for(int i = duoi; i >= tren; i--) {
                a[i][trai]=b[k];
                k++;
            }
            trai++;


        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            } cout << endl;
        }
        
        

    
}