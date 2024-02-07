#include<bits/stdc++.h> 

using namespace std; 
int snt(int n){ 
    for(int i=2;i<=sqrt(n); i++){ 
        if(n%i==0){ return 0; } 
    } 
    return n> 1; 
} 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int a; 
        cin>>a; 
        for(int i=0;i<=a;i++){ 
            if((snt(i))&&(snt(a-i))){ 
                cout<<""<<i<<" "<<a-i<<endl; 
                break; 
            } 
        cout << endl; 
        } 
    }
}