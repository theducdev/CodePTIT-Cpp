#include<bits/stdc++.h> 

using namespace std; 

int main() { 
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int check;
        string s;
        cin >>s;
        int length=s.length(); 
   
    int sum=0,tong=0;
    for (int i = 0; i < length; i++) {
        if(s[i]>='0' && s[i]<='9') {
            while((s[i]>='0' && s[i]<='9')) {
                sum=sum*10+s[i+1];
            }
            tong+=sum;
        }
    }
    cout << sum << endl;
    }
} 

    