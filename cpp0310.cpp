#include <bits/stdc++.h>

using namespace std;

long long min(string a, string b) {
    for(int i=0;i< a.length();i++) {
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0;i< b.length();i++) {
        if(b[i]=='6') b[i]='5';
    }
    return stoll(a) + stoll(b);
}

long long max(string a, string b) {
    for(int i=0;i< a.length();i++) {
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i< b.length();i++) {
        if(b[i]=='5') b[i]='6';
    }
    return stoll(a) + stoll(b);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
       string a,b;
       cin >> a >> b;
       cout << min(a,b) << " " << max(a,b) << endl;
        
    }
        
}
        
        
        
        

    



