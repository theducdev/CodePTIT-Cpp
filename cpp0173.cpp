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
        long long x,y,z,n;
        cin >> x >> y >> z >>n;
        long long bcnn = lcm(lcm(x,y),z);
        long long dau=pow(10, n-1), cuoi=pow(10,n)-1;
        long long a=dau/bcnn, b=cuoi/bcnn;
        if(a<1&&b<1) {
            cout <<"-1" <<endl;continue;
        }
        if(a*bcnn<dau) cout << (a+1)*bcnn << endl;
        else cout << a*bcnn<< endl;

        
        
    }
}