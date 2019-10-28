#include <bits/stdc++.h>
using namespace std;

string s;
int n, m, c, q;
int a[100005], b[100005];
int color[100005];
int val[100005];
int tipe[100005];
vector<int> smt[100005];
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
    for (int i = 1; i <= 33; i++){
        s = "perang-at_";
        s = s + to_string(i);
        string in = s + ".in";
        freopen(in.c_str(), "r", stdin);

        string ot = "input";
        ot = ot + ganti(i-1);
        ot = ot + ".txt";
        freopen(ot.c_str(), "w", stdout);

        cin >> n >> m >> c;
        for (int i = 1; i <= n; i++){
            cin >> color[i];
        }

        for (int i = 1; i <= n; i++){
            cin >> val[i];
        }

        for (int i = 1; i <= m; i++){
            cin >> a[i] >> b[i];
        }
        cin >> q;
        for (int i = 1; i <= q; i++){
            cin >> tipe[i];
            int x, y;
            if (tipe[i] == 1){
                cin >> x;
                smt[i].push_back(x);
            }else {
                cin >> x >> y;
                smt[i].push_back(x); smt[i].push_back(y);
            }
        }

        cout << n << " " << m << " " << c << '\n';
        for (int i = 1; i <= n; i++){
            cout << color[i];
            cout << (i == n ? '\n' : ' ');
        }
        for (int i = 1; i <= n; i++){
            cout << val[i];
            cout << (i == n ? '\n' : ' ');
        }
        for (int i = 1; i <= m; i++){
            cout << a[i] << " " <<  b[i] << '\n';
        }
        cout << q << '\n';
        for (int i = 1; i <= q; i++){
            cout << tipe[i] << " ";
            for (int j = 0; j < smt[i].size(); j++){
                cout << smt[i][j];
                if (j == (int)smt[i].size()-1) cout << '\n';
                else cout << " ";
            }
            smt[i].clear();
        }

        // vector<int> ret;
        // while (scanf("%d", &ans) != EOF){
        //     ret.push_back(ans);
        // }
        // for (int i = 0; i < ret.size(); i++){
        //     cout << ret[i] << '\n';
        // }
    }
    return 0;
}