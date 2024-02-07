#include<bits/stdc++.h>

using namespace std;



int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int j=0;j<n;j++) {
           b[j]=-1;
        }
        for(int i=0;i<n;i++) {
            if (a[i] >=0 && a[i] <= n-1) {
                b[a[i]]=a[i];
            } 
        }
        for(int j=0;j<n;j++) {
           cout << b[j] << " ";
        }
        cout << endl;

    }
}