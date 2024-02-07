#include <iostream>
 
using namespace std;
long luythua( int n) {
    long long luythua = 1;
    for ( int i = 1; i<=n;i++) luythua*=i;
    return luythua;
}

int main () {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i =1; i<= n;i++) sum+=luythua(i);
    cout << sum;
   
    
    
}
