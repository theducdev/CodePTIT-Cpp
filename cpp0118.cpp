#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {

    
    
        long long n;
        cin >> n;
        int check=1;
        int dem=0;
        for (int i=2; i<= sqrt(n); i++){
            if (n%i==0) {
                if ((n/i)%i==0) check=0;
                while(n%i==0) {
                    dem++;
                    n/=i;

                }
                
                

                
            }
                
            }
            if(n!=1) dem++;
            if(dem==3 && check==1 ) cout << "1" << endl;
            else cout <<"0"<<endl;
        }
        

    }


