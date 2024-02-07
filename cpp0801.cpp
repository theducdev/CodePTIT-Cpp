#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream FileIn;
    FileIn.open("PTIT.in", ios_base::in);
    string line;
    ofstream FileOut;
    FileOut.open("PTIT.out", ios_base::out);
    while (FileIn >> line ) {
        FileOut << line << endl;
    }
    FileIn.close();
    FileOut.close();
    return 0;
}