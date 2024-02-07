#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int t ; 
    cin>>t ; 
    while(t--){ 
        long long n,x,check=0;
        cin >> n >>x;
        long long a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=0;i<n;i++) {
            if(binary_search(a, a+n, x+a[i])) check =1;
        }
        if(check==1 ) cout << "1";
        else cout << "-1";
        
        
        cout<< endl;
    } 
}