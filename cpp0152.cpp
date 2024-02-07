#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, m,check=-1;
        cin >> a >> m;
        for (int i=0;i<m;i++) {
            if((a*i%m)==1) {
                check= i;
                break;
            }
        }
        
        cout <<check << endl;
    }


}

