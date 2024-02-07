#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
    
   
        int n;
        cin >> n;
        int a[n];
        int dem =0, k=0;
        for (int i=0; i<n; i++){
            
                cin >> a[i];
            
        }
        sort(a,a+n);
        for (int i=0; i<n-1; i++){
            
            if (a[i]==a[i+1] && a[i+1]!=a[i+2]) dem ++;
            if(a[i]==a[i+1]){ k++; }
                
        
        

    }
    cout << dem +k << endl;
}}


