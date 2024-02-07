#include <bits/stdc++.h>

using namespace std;


int checksnt( long long n) {
    
    
   
        
        long long m=n;
        if (n==0 || n == 1) return 0;
        else {
        for (int i=2; i<= sqrt(n); i++){
            
            if (n%i==0) {
                
                while(n%i==0) {
                    
                    n/=i;
                }
                
                
            }
            
        }
        if ( n!=m) return 0;
        else return 1;
     }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
    long long a, b;
    cin >> a >> b;
    if (a>=b) {
        int temp = a;
        a=b;
        b= temp;
    }
    for (long long  i=a; i<=b; i++) {
        if (checksnt(i)) cout << i << " ";
    }
    cout << endl;
}   }

