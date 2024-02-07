#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int n, check=0; 
        cin>>n; 
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        multiset <long long> c;
        for(int i=0;i<n;i++) c.insert(a[i]);
        for(int i=0;i<n;i++) 
        {
            for(int j=i+1;j<n;j++) 
            {
                long long temp = sqrt(a[i]*a[i] + a[j]*a[j]);
                long long ok = a[i]*a[i] + a[j]*a[j];
                if (temp*temp == ok) 
                {
                    if (c.find(temp) != c.end()) check =1;
                }
            }

        }
        if(check==1) cout << "YES";
        else cout << "NO";


        cout<<endl; 
    } 
}