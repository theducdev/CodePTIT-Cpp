#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[300][300], b[3][3];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> b[i][j];
            }
        }
        long long sum = 0;
        for (int i = 0; i <= n - 3;i++) {
			for (int j = 0; j <= m - 3; j++) {
				for (int l = 0; l < 3; l++) {
					for (int k = 0; k < 3; k++) {
						sum += b[l][k] * a[i + l][k + j];
					}
				}
			
			}
		}
        
       
         cout << sum <<endl;

    }
}