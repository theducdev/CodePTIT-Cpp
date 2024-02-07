#include <bits/stdc++.h>

using namespace std;

int check(string s) {
    if (s.length() == 1) return 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != s[s.length()- 1 - i]) return 0;
    } 
    return 1;
}

struct vb {
    string so; int count;
};

bool cmp(vb a, vb b) {
    if (a.so.length() > b.so.length()) return true;
    if (a.so.length() == b.so.length() && a.so > b.so) return true;
    return false;
}


int main() {
    vb m[10000];
    char n[1000];
    int g = 0;
    while (scanf("%s", &n) != EOF){
        for (int i = 0; i < strlen(n); i++) m[g].so.push_back(n[i]);
        g++;
    }
    for(int i = 0; i < g; i++) {
        for (int j = 0; j < g; j++) {
            if (m[i].so == m[j].so) m[i].count ++;
        }
    }
    sort(m, m+g, cmp);
   for (int i = 0; i < g; i++) {
		int x = 0;
		for (int j = 0; j < i; j++)if (m[i].so == m[j].so)x++;
		if (x > 0)continue;
		if (check(m[i].so))
			cout << m[i].so << " " << m[i].count << endl;
	}


}