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
        // if(A[i].ns[1]=='/') {
        //     A[i].ns="0" +A[i].ns;
        // }
        // if(A[i].ns[4]=='/') {
        //     (A[i].ns).insert(3,"0");
        // }
        
        // for (int i=0;i<3;i++) {
        //     int dodai = (A[i].ns).length();
        //     while(dodai <10) {
        //         (A[i].ns).insert(6,"0");

        //     }
        // }
        // }
}
}
void chuan_hoa_ten(string s){  
    stringstream ss(s);
	string temp,a;
    while (ss >> temp)
    {   a=temp;
	    a[0]=toupper(a[0]);
        for(int i=1;i<a.length();i++) {
            a[i]=tolower(a[i]);

        }
        cout << a << " ";
        
    }
	
}

void chuan_hoa_ns(string s){
    int i=0;
    stringstream ss(s);
    string date[3], token;
    while(getline(ss, token, '/'))
        date[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<date[0]<<'/'
        <<setw(2)<<date[1]<<'/'
        <<setw(4)<<date[2]<<' ';
}

void in(DoanhNghiep A[], int n) {
    for(int i=0;i<n;i++) {
        string s= to_string(i+1);
        while(s.length()<3) {
            s="0" + s;
        }

    // int dodaiten = A[i].ten.length();
    // for(int j=0; j< dodaiten; j++) {
    //     if (A[i].ten[j] >= 'A' && A[i].ten[j] <= 'Z') {
    //         A[i].ten[j] +=32;
    //     }
        
    // }
	// for(int j=0; j< dodaiten; j++) {
    //    if(A[i].ten[j] == ' ') A[i].ten[j+1] -=32; 
    // }
	// A[i].ten[0]-=32;
    cout << A[i].ma << s << " ";
    chuan_hoa_ten(A[i].ten);
    cout <<A[i].lop << " ";
    chuan_hoa_ns(A[i].ns);
    cout << " " << fixed << setprecision(2) << A[i].gpa << endl;
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





