#include <bits/stdc++.h> 
using namespace std; 

long long gcd( long long a, long long b) {
    if(b == 0 ) return a;
    return gcd(b, a%b);
}

long long find(char b[], long long a) {
    long long res = 0;
    for (int i = 0; i < strlen(b); i++) {
        res = (res*10 + b[i] - '0');
        res %= a;
    }
    return res;
}

int main() { 
    int t; cin >> t;
    while(t--) {
        char b[1001];
        long long a;
        cin >> a;
        cin >> b;
        long long du = find(b, a);
        cout << gcd(du, a) << endl;
    }
    
}

