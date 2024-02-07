#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++ ) {
            cin >> a[i];
        }
        long long sum = 0, best = -10000000;
        for(int i = 0; i < n; i++ ) {
            sum+=a[i];
            if(sum < 0) sum = 0;
            best = max(best, sum);
            
        }
        if( best <= 0 ) cout << "-1"; else
        cout << best << endl;
    }
}