#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        cin.ignore();
        string s;
        cin >> s;
        int so=0, sum=0;;
        for(int i=0;i<s.length();i++) {
            if(isdigit(s[i])) {
                so=so*10+(s[i]-48);
            }
            if(isdigit(s[i+1])==0) {
                sum+=so;
                so=0;
            }
        }
       
            cout << sum << endl;
    }

}
