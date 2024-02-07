#include <bits/stdc++.h>

using namespace std;
int i = 0;

class DoanhNghiep {
    public:
        string stt;
        string hoten, bomon, r;
        DoanhNghiep();
        friend istream &operator >>( istream&, DoanhNghiep&);
        friend ostream &operator << ( ostream&, DoanhNghiep);
        friend void chuyenhoa_hoten(DoanhNghiep&);
        friend void chuanhoa_bomon(DoanhNghiep&);
        friend void tolower_ten(DoanhNghiep&);
        friend void sapxep(DoanhNghiep ds[], int n);

};

DoanhNghiep::DoanhNghiep() {
    hoten = bomon =r="";
}

void chuanhoa_hoten(DoanhNghiep &a) {
    string s = "";
    stringstream ss(a.hoten);
    string token;
    while ( ss >> token) {
        s += toupper(token[0]);
        for (int i = 1; i < token.length(); i++) {
            s += tolower(token[i]);
        }
        s += " ";
    }
    s.erase(s.length() - 1);
    a.hoten = s;
}

istream &operator>>(istream &mycin, DoanhNghiep &x) {
    i++;
    x.stt = "GV" + string(2 - to_string(i).length(), '0') + to_string(i);
    getline(mycin, x.hoten);
    for (int i = 0; i < x.hoten.length(); i++) x.r.push_back(toupper(x.hoten[i]));
    getline(mycin, x.bomon);
    return mycin;
    chuanhoa_bomon(x);
    tolower_ten(x);

}

void chuyenhoa_ten(DoanhNghiep &x) {
    string s = "";
    for (int i = 0; i < x.hoten.length(); i++) {
        s += tolower(x.hoten[i]);
    }
    x.hoten = s;

}

void chuanhoa_bomon(DoanhNghiep &x) {
    string s;
    stringstream ss(x.bomon);
    string tmp;
    while(ss >> tmp) {
        s += toupper(tmp[0]);
    }
    x.bomon = s;

}



ostream &operator<<(ostream &mycout, DoanhNghiep x) {
    chuanhoa_bomon(x);
    chuanhoa_hoten(x);
    mycout << x.stt << " " << x.hoten << " " << x.bomon << endl;
    return mycout;
}  



int main() {
	DoanhNghiep ds[100];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; getline(cin, s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for (int i = 0; i < s.length(); i++)s[i] = toupper(s[i]);
		
		
		for (int i = 0; i < n; i++)
		{
			int a = 0, b = 0;
			string token;
			stringstream ss(s);
			while (ss >> token) {
				a++;
				if (ds[i].r.find(token) != -1)b++;
			}
			if (a == b)cout << ds[i];
		}
	}
	return 0;
}