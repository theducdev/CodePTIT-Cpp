#include <bits/stdc++.h>

using namespace std;



int main() {
	int t;
	cin >> t;
	while (t--) {
        int n; cin >> n;
        double x[n], y[n];
        for (int i = 1; i <= n; i++) {
            cin >> x[i] >> y[i];
        }
        double tongx = 0, tongy = 0;
        for (int i = 1; i <= n - 1; i++) {
            tongx += x[i]*y[i+1];
            tongx -= y[i]*x[i+1];
        }
        tongx += x[n]*y[1];
        tongx -= y[n]*x[1];

        cout << fixed << setprecision(3) << 0.5 * tongx;
        cout << endl;


		
	}
}