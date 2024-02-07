#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep
{
    private: 
    string msv, hoten, lop,ns;
    float gpa;

    public: 
    DoanhNghiep();
    friend istream &operator >> (istream &in, DoanhNghiep &a);
    friend ostream &operator << (ostream &out, DoanhNghiep a);
    

};
DoanhNghiep::DoanhNghiep()
{ 
    this -> msv = "B20DCCN001"; 
    this-> hoten = ""; 
    this-> lop = ""; 
    this-> ns = ""; 
    this->gpa = 0; 
}


istream &operator >> (istream &in, DoanhNghiep &a) 
{
    getline(in, a.hoten);
    getline(in, a.lop);
    getline(in, a.ns);
    in>>a.gpa;
    return in;
}

ostream &operator << (ostream &out, DoanhNghiep a)
{
    
    cout << a.msv << " ";
    stringstream ss(a.hoten);
        string temp,s;
        while (ss >> temp)
        {   s=temp;
            s[0]=toupper(s[0]);
            for(int i=1;i<s.length();i++) {
                s[i]=tolower(s[i]);

            }
            cout << s << " ";
            
        }
    cout  << " " << a.lop << " ";
    int i=0;
    stringstream sss(a.ns);
    string date[3], token;
    while(getline(sss, token, '/'))
        date[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<date[0]<<'/'
        <<setw(2)<<date[1]<<'/'
        <<setw(4)<<date[2]<<' ';
    cout << fixed << setprecision(2) << a.gpa;
    return out;
}




int main(){
    DoanhNghiep a;
    cin >> a;
    cout << a;
    return 0;
}




