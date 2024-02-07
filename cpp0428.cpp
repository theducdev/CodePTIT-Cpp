#include<bits/stdc++.h> 

using namespace std; 

int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int n, k; 
        cin>>n>>k; 
        int z=n+k;
        int a[z]; 
        for(int i = 0 ; i < z ; i++){ 
            cin>>a[i]; 
        } 
        sort(a, a + z);
        for(int i = 0 ; i < z ; i++){ 
            cout<<a[i]<<" "; 
        } 
        
        cout<<endl; 
    } 
}