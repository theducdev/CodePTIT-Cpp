#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        cin.ignore();
        int n;
        cin >> n;
        cin.ignore();
        int a[n];
        for (int &x : a) {
            cin >> x;
        }
        set <int> s;
        for (int z : a) {
            while(z>0) {
                s.insert(z%10);
                z/=10;

            }
        }
        for (int z : s) {
           cout << z << " ";
        }
        cout << endl;




    }
        
}
        
        
        
        

    



