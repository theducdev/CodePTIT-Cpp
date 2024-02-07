#include <bits/stdc++.h> 
using namespace std; 
using ll = long long; 
ll functionPow(ll a, ll b, int mod){ 
    ll res = 1; 
    // res la gia tri cua a mu b 
    while(b){ 
        if(b % 2 == 1){ 
            res *= a; 
            res %= mod; 
        } 
        a *= a; 
        a %= mod; 
        b /= 2; 
    } 
    return res; 
} 
int main(){ 
    int t; cin >> t; 
    int mod = 1e9 + 7; 
    while(t--){ 
        int n, x; cin >> n >> x; 
        int k = n; 
        k--; 
        int a[n]; 
        for(int i = 0; i < n; i++){ cin >> a[i]; } 
        ll p = 0; 
        for(int i = 0; i < n; i++){ 
            p = p + 1ll * a[i] * functionPow(x, k, mod); 
            p %= mod; k--; 
        } 
        cout << p << endl; 
    } 
}