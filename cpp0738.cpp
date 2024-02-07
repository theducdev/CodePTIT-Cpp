#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >>a[i];
        int k = 0, max = 0;
        for( int i = 0; i < n; i++) {
            int dem = 0;
            while(a[i]) {
                if(a[i] % 2 ==0) {
                    dem++; a[i]/=2;
                }
                else {
                    a[i] -= 1;
                    k++;
                }
            }
            if(max < dem)  max = dem;
        }
        cout << max + k << endl;
    }
}