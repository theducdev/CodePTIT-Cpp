#include<bits/stdc++.h> 
using namespace std; 

 
int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
        int n; 
        cin >> n; 
        long long a[n]; 
        for(int i=0;i<n;i++) cin >> a[i];
    
        long long h=1,g=a[0];
        for(int i=0;i<n;i++) {
            h*=a[i];
            if(a[i]==1) g=1;
            else
            g=__gcd(g,a[i]);
        }
        unsigned long long d=1000000007;
        unsigned long long t=h%d;
        for(unsigned long long i=1;i<g;i++) {
            t*=(h%d);
        }
        for(int i=0;i<n;i++) {
            if(a[i]==0) t=0;
            break;

        }
        cout << t%d << endl; 
    } 
}