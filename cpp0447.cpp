#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        long long n,k;
        cin >>n>>k;
        cin.ignore();
        long long s[n];
        for(long long i=0;i<n;i++ ) {
            cin >> s[i];
        } 
        sort(s,s+n);
        for(long long i=n-1;i>n-k-1;i-- ) {
            cout << s[i] << " ";
        };
        cout << endl;
        

    }
}