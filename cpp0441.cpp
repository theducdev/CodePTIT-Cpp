#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        int n,k; 
        cin>>n>>k; 
        int X[n+1]; 
        for(int i=1;i<=n;i++) { 
            cin>>X[i] ; 
        } 
        int dem=-1; 
        for(int i=n;i>=1;i--) { 
            if(X[i]==k) { dem=1; break; } }
             cout<<dem<<endl; 
        } 
        }