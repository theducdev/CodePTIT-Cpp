#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma;
	string ten, lop, ns;
	float gpa;
};

void nhap(DoanhNghiep A[], int n) {
    for(int i=0; i<n;i++) {
    cin.ignore();
    getline(cin, A[i].ten); 
    cin >> A[i].lop;
    cin >> A[i].ns;
    cin >> A[i].gpa;
    A[i].ma="B20DCCN";
    if(A[i].ns[1]=='/') {
        A[i].ns="0" +A[i].ns;
    }
    if(A[i].ns[4]=='/') {
        A[i].ns.insert(3,"0");
    }
    }

    
}


void in(DoanhNghiep A[], int n) {
    for(int i=0;i<n;i++) {
        string s= to_string(i+1);
        while(s.length()<3) {
            s="0" + s;
        }
    cout << A[i].ma << s << " " << A[i].ten << " "<< A[i].lop << " " << A[i].ns << " " << fixed << setprecision(2) << A[i].gpa << endl;
    }

}



int main(){
    struct DoanhNghiep ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}



