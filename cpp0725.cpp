#include <bits/stdc++.h>
using namespace std;
#define modu 1000000007
long long c[1005][1005];

void solve(int n, int r) {
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j <= i; j++ ) {
            if(j==0||j==i) c[i][j] = 1;
            else c[i][j] = (c[i-1][j] + c[i-1][j-1]) % modu;
        }
    }
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, r; cin >> n >> r;
        solve(n, r);
        cout << c[n][r];
		cout << endl;
	}
	
}