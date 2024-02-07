#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int t ; 
    cin>>t ; 
    while(t--){ 
        long long n,kq=-1;
        cin >> n;
        int dem=0;
        long long a[n],b[1000001]={};
        for(int i=0;i<n;i++) {
            cin >> a[i];
            b[a[i]]++;
            if(b[a[i]]==2) {
                dem++;
                if(dem==1) kq=a[i];
            }
            
        }
        
         cout << kq << endl;
    } 
}