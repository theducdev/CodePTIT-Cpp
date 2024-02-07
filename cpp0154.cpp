#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,k,s=0;
        cin >> n >>k;
        for (long long i=1;i<=n;i++) {
            s+=(i%k);
        }
        
        if(s==k) cout << "1";
        else cout << "0";
        cout << endl;
    }


}

