#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct point {
    double x, y, z;
};


void check(point &a, point &b, point &c, point &d) {
    double a1 = b.x - a.x;
    double a2 = b.y - a.y;
    double a3 = b.z - a.z;
    double b1 = c.x - b.x;
    double b2 = c.y - b.y;
    double b3 = c.z - b.z;
    double tichcohuongx = a2*b3 - a3*b2;
    double tichcohuongy = a3*b1 - a1*b3;
    double tichcohuongz = a1*b2 - a2*b1;
    double kq = tichcohuongx*(d.x - a.x) +tichcohuongy*(d.y - a.y) + tichcohuongz*(d.z - a.z);
    if (kq == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

} 



int main() {
	int t;
	cin >> t;
	while (t--) {
        point a, b, c, d;
        cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z >> c.x >> c.y >> c.z >> d.x >> d.y >> d.z;
        check(a,b,c,d);

		
	}
}