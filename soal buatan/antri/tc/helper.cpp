#include <bits/stdc++.h>
using namespace std;

string ubah(int bilangan){
    if (bilangan >= 10) return to_string(bilangan);
    else return "0"+to_string(bilangan);
}

int main(){
    for (int i = 1; i <= 19; i++){
        string inp = "antri_" + to_string(i);
        inp = inp + ".out";

        string otp = "output" + ubah(i);
        otp = otp + ".txt";

        freopen(inp.c_str(), "r", stdin);
        freopen(otp.c_str(), "w", stdout);

        long long n, m;
        vector<long long> x;
        long long q;
        vector<long long> a;

        while (scanf("%lld", &n) != EOF){
            a.push_back(n);
        }

        for (int i = 0; i < a.size(); i++){
            cout << a[i] << '\n';
        }
    }
}