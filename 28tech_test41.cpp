#include <bits/stdc++.h>
using namespace std;

int checksnt( long long n) {
    if( n == 0 || n == 1) return 0;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main () {
    int t; cin >> t;
    while(t--) {
        long long a, b; cin >> a >> b;
        int cnt = 0;
        for (long long i = a; i <= b; i++) {
            if(checksnt(i)) cnt++;
        }
        cout << cnt << endl;
    }
}