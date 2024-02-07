#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        cin.ignore();
        int n,m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i=0;i < n;i++) cin >> a[i];
        for(int i=0;i < m;i++) cin >> b[i];
        set <int> hop;
        for ( int x : a) hop.insert(x);
        for ( int x : b) hop.insert(x);
        for ( int x : hop) cout << x << " ";
        cout << endl;
        set <int> giao;
        for ( int x : a) 
        {
            for (int y : b) {
                if(y==x) giao.insert(y);
            }
        }
        for ( int x : giao) cout << x << " ";

        cout << endl;

    }   
}
