#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int t ; 
    cin>>t ; 
    while(t--){ 
        long long n,k,kq=-1;
        cin >> n >>k;
        int dem=0;
        long long a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            
        }
        sort(a, a+n);
        
        cout<< a[k-1] << endl;
    } 
}