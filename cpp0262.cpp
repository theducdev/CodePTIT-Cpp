#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while(t-- ) {
        long long n, m; cin >> n >> m;
        long long tong = n*(n+1)/2;
        long long x = (tong+m)/2;
        long long y = (tong-m)/2;
        if(__gcd(x,y) == 1 && (tong + m)%2==0) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}