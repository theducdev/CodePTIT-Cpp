#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long max = INT_MIN;
        for(int i = 0; i < n; i++) {
            long long tich = a[i];
            if(max < tich) max = tich;
            for(int j = i+1; j < n; j++) {
                tich*=a[j];
                if(max < tich) max = tich;
            }
            
        }
        cout << max << endl;

        
    }
}