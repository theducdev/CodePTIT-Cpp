#include<bits/stdc++.h>
using namespace std;
bool giam(long int A[], int l, int r) { 
    for (int i=l; i<r; i++) { 
        if (A[i]<A[i+1]) return false; 
    } return true; 
} 
bool tanggiam(long int A[], int l, int r) { 
    string s=""; 
    for (int i=l; i<r; i++) { 
        if (A[i]<A[i+1]) s+="1"; 
        if (A[i]>A[i+1]) s+="0"; 
    }
    if (s.find("01")!=-1) return false; 
    else return true; 
} 
main() { 
    int t; 
    cin>>t; 
    while (t--) { 
        int n; 
        cin>>n; 
        long int A[n]; 
        for (int i=0; i<n; i++) cin>>A[i]; 
        int L,R; 
        cin>>L>>R; 
        if (tang(A,L,R) || giam(A,L,R) || tanggiam(A,L,R)) cout<<"Yes"<<endl; 
        else cout<<"No"<<endl; 
    } 
}