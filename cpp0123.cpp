#include <bits/stdc++.h>

using namespace std;


int main() {
    
    
   
        long long n;
        cin >> n;
        long long m=n;
        if (n==0 || n == 1) cout << "NO" << endl;
        else {
        for (int i=2; i<= sqrt(n); i++){
            
            if (n%i==0) {
                
                while(n%i==0) {
                    
                    n/=i;
                }
                
                
            }
            
        }
        if ( n!=m) cout << "NO";
        else cout << "YES";
     }}

    

