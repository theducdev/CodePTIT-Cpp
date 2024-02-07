#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (a!=b) {
        if (a>b) a=a-b;
        else b=b-a;

    }
    return a;
    
}


long long kq( int n) {
    long long a=1;
    for (long long i=2; i<=n;i++) {
        a=a*i/gcd(a, i);
    } return a;
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << kq(n) << endl;


    }
}