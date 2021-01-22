#include <bits/stdc++.h>
using namespace std;

string s;
int n;
int arr[100005];
long long ans;

string ganti(int bil){
    if (bil > 9) return to_string(bil);
    else return "0" + to_string(bil);
}

int main(){
    // for (int i = 1; i <= 16; i++){
    //     s = "tugas-pertama-dengklek_";
    //     s = s + to_string(i);
    //     string in = s + ".in";
    //     freopen(in.c_str(), "r", stdin);

    //     string ot = "input";
    //     ot = ot + ganti(i-1);
    //     ot = ot + ".txt";
    //     freopen(ot.c_str(), "w", stdout);

    //     cin >> n;
    //     for (int j = 0; j < n; j++) cin >> arr[j];

    //     cout << n << '\n';
    //     for (int j = 0; j < n; j++){
    //         cout << arr[j];
    //         cout << (j == n-1 ? '\n' : ' ');
    //     }

    // }
    for (int i = 1; i <= 16; i++){
        s = "tugas-pertama-dengklek_";
        s = s + to_string(i);
        string in = s + ".out";
        freopen(in.c_str(), "r", stdin);

        string ot = "output";
        ot = ot + ganti(i-1);
        ot = ot + ".txt";
        freopen(ot.c_str(), "w", stdout);
        cin >> ans;
        cout << ans << '\n';
    }
    return 0;
}