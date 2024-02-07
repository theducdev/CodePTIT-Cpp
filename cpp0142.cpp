#include <bits/stdc++.h>

using namespace std;

long long snt(long long n) {
    if(n<2) return 0;
    for(long long i=2;i<=sqrt(n);i++) {
        if(n%i==0) return 0;
    } return 1;
}

long long gcd(long long a, long long b) {
    while (a!=b) {
        if (a>b) a=a-b;
        else b=b-a;

    }
    return a;
    
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int dem=0;
        for(int i=1;i<=x;i++) {
            if(gcd(x,i)==1) dem++;
        }
        if(snt(dem)) cout << "1";
        else cout << "0";
        cout << endl;
    }
}