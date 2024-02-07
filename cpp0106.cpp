#include <iostream>
 
using namespace std;

long long sothuannghich(long long n ) {
    long long sodao = 0;
    while (n>0) {
        sodao = sodao * 10 + n%10;
        n/=10;

    }
    return sodao;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
    long long n;
    cin >> n;
    long long m=n;
    if (sothuannghich(n)==m) cout << "YES" << endl;
    else cout << "NO" << endl;
    }

    
}
