#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int t ; 
    cin>>t ; 
    while(t--){ 
        long long n, x;
        cin >> n >> x;
        long long a[n],b[1000]={};
        for(int i=0;i<n;i++) {
            cin >> a[i];
            b[a[i]]++;
        }
        if(b[x]!=0) cout << b[x]<<endl;
        else cout << "-1" << endl;
    } 
}