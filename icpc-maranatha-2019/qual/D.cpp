#include <bits/stdc++.h>
using namespace std;

int n,m,t;
int num[30];
int val[30][5];
string s;
vector<vector<char> > v;

void inc(int i, int j, int c){
    if(i < n/2 && j < m/2){
        val[c][0]++;
    } else if(i < n/2) {
        val[c][1]++;
    } else if(j < m/2){
        val[c][2]++;
    } else {
        val[c][3]++;
    }
}

void eval(int c){
    int xam = -1;
    for(int i = 0; i < 4; i++){
        if(val[c][i] > xam){
            xam = val[c][i];
            num[c] = i+1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        cin >> n >> m;
        swap(n,m);
        v.resize(n);
        // getchar();
        cin.ignore();
        for(int i = 0; i < n; i++){
            v[i].resize(m);
            getline(cin, s);
            // cout << s << '\n';
            int cur = 0;
            for(int j = 0; j < (int)s.size(); j++){
                if(s[j] != ' '){
                    v[i][cur] = s[j];
                    cur++;
                }
            }
        }
        for(int cc = 0; cc < 26; ++cc){
            num[cc] = 0;
            char c = char(cc + 'a');
            for(int i = 0; i < 4; i++){
                val[cc][i] = 0;
            }

            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(v[i][j] == c){
                        inc(i,j,cc);
                    }
                }
            }
            eval(cc);
        }
        cout << tc << '\n';
        for(int i= 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // printf("%c%d", v[i][j], num[v[i][j]]);
                cout << v[i][j] << num[(int)v[i][j]-'a'];
                if(j == m-1) cout << '\n';
                else cout << " ";
            }
        }
        for (int i = 0; i < n; ++i){
            v[i].clear();
        }
        v.clear();
    }
}