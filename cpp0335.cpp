#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        cin.ignore();
        string s;
        cin >> s;
        long long end=s.length();
        if(s[end-1]<='9'&&s[end-1]>='0') s.push_back('a');
        long long so=0;
        long long a[1000000];
        int k=0;
        for(int i=0;i<s.length();i++) {
            if(isdigit(s[i])) {
                so=so*10+(s[i]-48);
            }
            if(isdigit(s[i+1])==0) {
                a[k]=so;
                k++;
                so=0;
            }
        }
            long long max=-1;
            for(int z=0;z<k-1;z++) {
                if(a[z]>max) max=a[z];
            }
            cout << max << endl;


    }

}
