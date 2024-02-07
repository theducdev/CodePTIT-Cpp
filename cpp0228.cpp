#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m = 4*n;

        int t = -1;
        int b[100] = {};
        int truoc = 1-m;
        int solan = m ;
        
            if((solan % 4) == 3) {
                for (int i = 1; i <= solan; i++) {
                    int tiep = truoc + m;
                    b[t++] = tiep;
                    truoc = tiep;
                }
                solan--;
            }
            if((solan % 4) == 2) {
                for (int i = 1; i <= solan; i++) {
                    int tiep = truoc + 1;
                    b[t++] = tiep;
                }
                solan--;
                
            }
            if((solan % 4) == 1) {
                for (int i = 1; i <= solan; i++) {
                    int tiep = truoc - m;
                    b[t++] = tiep;
                }
                solan--;
                
            }
            if((solan % 4) == 0) {
                for (int i = 1; i <= solan; i++) {
                    int tiep = truoc - 1;
                    b[t++] = tiep;
                }
                solan--;
                
            }
        
        for (int i = 0; i < 20; i++) cout << b[i] << " ";
        cout << solan;
        cout << endl;
    }
}