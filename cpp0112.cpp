#include<bits/stdc++.h>

using namespace std;


int main () {
    int t;
    cin >> t;
    while(t--) {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = sqrt(pow(c-a,2) + pow(d-b,2));
    cout << setprecision(4) << fixed << x << endl;

    }
}