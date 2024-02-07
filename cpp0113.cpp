#include <bits/stdc++.h>

using namespace std;

int somayman( long long n) {
    if(n%100 ==86) return 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << somayman(n) << endl;

    }

}