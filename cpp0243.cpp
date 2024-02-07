#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t-- ) {
        int n, m; cin >> n >> m;
        map <int, int> a1;
        int a[n], b[m];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            a1[a[i]]++;
        }
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < a1[b[i]]; j++) {
                cout << b[i] << " ";
            }
                a1.erase(b[i]);
        }
        for(auto x:a1) {
            while(x.second--) cout << x.first << " ";
        }
        cout << endl;
    }
}