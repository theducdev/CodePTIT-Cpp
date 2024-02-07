#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) 
    {
        int n, cnt=0;
        cin >> n;
        int a[n];
        for (int i=0; i<n;i++) cin >> a[i];
        int l = 0 ; 
        int r = n-1 ; 
        while(l<r){ 
            if(a[l] == a[r]){ l++ ; r--; } 
            else if(a[l] <a[r]){ 
                l++ ; 
                a[l] += a[l-1]; 
                cnt++ ; 
            } 
            else{ r-- ; a[r] += a[r+1]; cnt +=1 ; } 
        }
        cout << cnt;

        cout << endl;

    }   
}
