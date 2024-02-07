#include<bits/stdc++.h>
using namespace std;

int tongchuso(long long n) {
    int sum=0;
    while(n) {
        sum+=n%10;
        n/=10;
    } return sum;
}

main() { 
    long long m,s;
    cin >> m>>s;

}