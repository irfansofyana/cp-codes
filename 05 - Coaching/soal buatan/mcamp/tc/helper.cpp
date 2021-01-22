#include <bits/stdc++.h>
using namespace std;

string ubah(int bilangan){
    if (bilangan >= 10) return to_string(bilangan);
    else return "0"+to_string(bilangan);
}

int main(){
    for (int i = 1; i <= 13; i++){
        string inp = "mcamp_" + to_string(i);
        inp = inp + ".out";

        string otp = "output" + ubah(i);
        otp = otp + ".txt";

        freopen(inp.c_str(), "r", stdin);
        freopen(otp.c_str(), "w", stdout);

        long long n;
        vector<long long> x, g, d;

        cin >> n;
        
        cout << n << '\n';
    }
}