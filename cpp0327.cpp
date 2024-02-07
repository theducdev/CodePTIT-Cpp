#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long n=0;
        long long k=s.length();
        for (int i=0; i<k;i++) {
            if(s[i]== 49) {
                n=(2*n+1) % 5; 
        } else n=(2*n) %5;
        
    }
        if (n==0) cout << "Yes"<< endl;
        else cout << "No"<< endl;

}   
}