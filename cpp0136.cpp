#include<bits/stdc++.h>

using namespace std;

int snt(long long n) {
    if(n<2) return 0; 
    for(long long i = 2; i<=sqrt(n); i++) if(n%i==0) return 0; 
    return 1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,dem=0;
        cin >> n;
        for(long long i = 1; i<=sqrt(n); i++) {
            if(snt(i)==1) dem++; }
            cout << dem<< endl;
        
        } 
    }

