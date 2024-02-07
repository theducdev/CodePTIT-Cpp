#include <bits/stdc++.h>

using namespace std;

long long n;

void rutgon() {
    int sum = 0;
    while (n) {
        sum +=n%10;
        n/=10;
    }
    n=sum;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        
        cin >> n;
        while (n>9) {
            rutgon();
        }
        cout << n << endl;
        

    }

}