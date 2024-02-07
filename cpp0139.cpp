#include <bits/stdc++.h>

using namespace std;

int snt(int n) {
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return 0;
    } return 1;
}

int tongchuso(long long n){
    long long tongchuso=0;
    while(n>0) {
        tongchuso+=n%10;
        n/=10;
    } return tongchuso;
}

int tongchusocuauocsnt(long long n) {
    int dem=0;
    for (int i=2; i<= sqrt(n); i++){
            if (n%i==0) { 
                while(n%i==0) {
                    dem+=tongchuso(i);
                    n/=i;
                } 
            }       
        }
    if(n!=1) dem+=tongchuso(n);
    return dem;
    }


int main() {
    int t;
    cin >> t;
    while (t--) {
   
        long long n;
        cin >> n;
        if (snt(n)==0 && tongchusocuauocsnt(n)==tongchuso(n)) cout <<"YES"<< endl;

        else cout <<"NO"<< endl ;}

    }

