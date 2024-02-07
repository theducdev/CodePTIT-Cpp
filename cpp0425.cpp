#include <bits/stdc++.h> 
using namespace std; 

int main(){ 
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++) cin >> a[i];
        sort(a, a+n);
        int daylon[n/2+1], daybe[n/2+1],k=0, t=0;
        if(n%2==0) {
            for(int i=0; i<n/2;i++) {
                daybe[t]=a[i];
                t++;
            }
            for(int i=n/2; i<n;i++) {
                daylon[k]=a[i];
                k++;
            }
        for(int i=0; i<n/2;i++) {
            cout << daybe[i] <<" "<< daylon[i] << " ";
        }
        }

        if(n%2!=0) {
            int z =0;
            for(int i=0; i<=n/2;i++) {
                daybe[t]=a[i];
                t++;
                z++;
            }
            for(int i=n/2+1; i<n;i++) {
                daylon[k]=a[i];
                k++;
            }
            for(int i=0; i<n/2;i++) {
            cout << daybe[i] <<" "<< daylon[i] << " ";
        }
        cout << daybe[z-1];
        }


        cout << endl;
    }

    
}