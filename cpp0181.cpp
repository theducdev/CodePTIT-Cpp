#include <bits/stdc++.h>

using namespace std;

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
        long long a,x,y;
        cin >> a>> x >> y;
        for (int i=1;i<=gcd(x,y);i++) {
            cout << a;
        }
        cout << endl;
        
        
    }
}