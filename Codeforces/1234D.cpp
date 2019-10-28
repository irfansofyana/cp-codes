#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;

int BIT[27][MAXN+3];
int N, Q;
string s;

void add(int pos, int idx, int val){
    while (pos <= N){
        BIT[idx][pos] += val;
        pos += (pos & (-pos));
    }   
}  

int get(int pos, int idx){
    int res = 0;
    while (pos > 0){
        res += BIT[idx][pos];
        pos -= (pos & (-pos));
    }
    return res;
}

int query(int l, int r, int idx){
    if (l == 1) return get(r, idx);
    else return get(r, idx) - get(l-1, idx);
}


int main(){
    cin >> s;
    N = (int)s.size();
    for (int i = 0; i < N; ++i){
        add(i+1, (int)s[i]-'a', 1);
    }
    cin >> Q;
    while (Q--){
        int tipe;
        cin >> tipe;
        if (tipe == 1){
            int pos;
            char car;
            cin >> pos >> car;
            --pos;
            add(pos+1, s[pos]-'a', -1);
            s[pos] = car;
            add(pos+1, s[pos]-'a', 1);
        }else{
            int ans = 0;
            int l, r;
            cin >> l >> r;
            for (int i = 0; i < 26; ++i){
                int tmp = query(l, r, i);
                if (tmp > 0) {
                    ++ans;
                    // cout << "cek " << i << " " << tmp << '\n';
                }
            }
            // cout << '\n';
            // cout << "jaw ";
            cout << ans << '\n';
        }
    }
    return 0;
}