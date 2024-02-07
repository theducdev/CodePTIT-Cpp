#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;



struct point {
    double x, y;
};

double canh(point &a, point &b) {
    double canh = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
    return canh;
} 

int check(point &diema, point &diemb, point &diemc) {
    double a, b, c;
    a = canh(diemb, diemc);
    b = canh(diema,diemc);
    c = canh(diemb, diema);
    if ( a + b > c && b + c > a && a + c > b) return 1;
    return 0;
}

void dientich(point &diema, point &diemb, point &diemc) {
    double a, b, c;
    a = canh(diemb, diemc);
    b = canh(diema,diemc);
    c = canh(diemb, diema);
    double s;
    s=0.25*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
    double r = a*b*c/(4*s);
    double s1 = r*r*PI;
    cout << fixed << setprecision(3) << s1;
}



int main() {
	int t;
	cin >> t;
	while (t--) {
        point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        if(check(a, b, c )==0) cout << "INVALID";
        else dientich(a, b, c);
        cout << endl;

		
	}
}