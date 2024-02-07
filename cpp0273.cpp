#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
        int n; cin >> n;
        int a[n];
        long long tongday = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tongday+= a[i];
        }
        int kq = -1, i = 1, tongtrai = 0;
        for ( i = 0; i < n; i++) {
            tongtrai+=a[i];
            if(tongtrai == 0.5 * (tongday - a[i+1])) {
                kq = i+2;
                break;
            } 
        
        cout << kq;
        cout << endl;
	}
}