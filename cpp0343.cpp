#include<bits/stdc++.h>

using namespace std;



int main () {
    int t;
    cin >> t;
    while (t--) {
        int n=0, chan=0, le=0;
        char kitu=' ';
        while (kitu!='\n') {
            int x;
            cin >> x;
            n++;
            if (x%2==0) chan ++;
            else le++;
            kitu=getchar();
        }
        if ((n%2==0 && chan>le) || (n%2!=0 && chan<le)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}