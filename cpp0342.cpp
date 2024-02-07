#include<bits/stdc++.h> 

using namespace std; 

int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        
        string a;
        cin >> a; 
        long long sum=0;
        for(char i : a) {
           if (i>='0' && i <='9') {
            sum+=i-48;
           }
        }
        multiset <char> s;
        for(char i : a) {
            if(i>='A' && i<='Z') {
                s.insert(i);
            }
        }
        for(char j : s) {
            cout << j;
        }


        cout << sum << endl;
    }
}