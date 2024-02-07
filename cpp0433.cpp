#include <bits/stdc++.h> 
using namespace std; 
int c[1000000] = {0}; 
bool cmp(int a, int b){ 
    if(c[a] != c[b]){ return c[a] > c[b]; } 
    else{ return a < b; } 
} 
int main(){ 
    int t; cin >> t; 
    while(t--){ 
        int n; cin >> n; 
        int a[n]; 
        for(int i = 0; i < n; i++){ 
            cin >> a[i]; c[a[i]]++; 
        } 
        sort(a, a + n, cmp); 
        for(int x : a){ cout << x << " "; } 
        cout << endl; 
        for(int i = 0; i < 1000000; i++){ c[i] = 0; } 
    } 
}