#include<bits/stdc++.h>
using namespace std;

main() { 
    int t; 
    cin>>t; 
    while (t--) { 
        int n; 
        cin>>n; 
        long int a[n]; 
        for (int i=0; i<n; i++) cin>>a[i]; 
        sort(a,a+n);
        

        
        if(n%2==0) { int k=0; for (int i=0;i<n/2;i++) {

            cout << a[n-1-i] << " " << a[k+i] << " ";
        }} 
        else { int k=0; for (int i=0;i<=n/2;i++) {

           if(a[n-1-i]!=a[k+i]) { cout << a[n-1-i] << " " << a[k+i] << " ";}
           else cout << a[n-1-i];
        }} 
        
        cout << endl;
}
}