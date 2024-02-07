#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], b[n];
        for (int i =0; i< n; i++) {
            cin >> a[i] ;
            b[i]=a[i];
        }
        vector <int> v(a, a+n);
        sort(a, a+n);

        for (int i = 0; i < n; i++) {
            int idx = lower_bound(a, a+n, b[i]) - a +1;
            while(a[idx]==b[i]) idx++;
            if (idx == n ) cout << "_" << " "; 
            else cout << a[idx] << " ";
        }
        
        cout << endl;
    }
}