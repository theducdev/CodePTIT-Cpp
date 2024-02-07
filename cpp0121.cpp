#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (a!=b) {
        if (a>b) a=a-b;
        else b=b-a;

    }
    return a;
    
}

long long lcm(long long a, long long b) {
    return a*b/gcd(a,b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << lcm(a, b) << " " << gcd(a, b);
    cout << endl;}
}