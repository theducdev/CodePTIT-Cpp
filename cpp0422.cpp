#include<bits/stdc++.h>

using namespace std;



int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >>n;
        long long a[n];
        for( long long i=0;i<n;i++) {
            cin >>a[i];
        }
        int c=0;
        for( long long i=0;i<n;i++) {
            if(a[i]==0) c++;
            else cout << a[i] << " ";
        }
        for( long long  i=0;i<c;i++) {
            cout << 0 << " ";
        }
        cout << endl;
    }
}