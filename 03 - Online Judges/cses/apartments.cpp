#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, m, k, ans;
int apartment[MAXN];
pair<int,int> people[MAXN];

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i){
        cin >> apartment[i];
    }
    for (int i = 0; i < m; ++i){
        int x; cin >> x;
        people[i] = {x-k, x+k};
    }
    sort(apartment, apartment + n);
    sort(people, people + m, cmp);
    int ap = 0;
    int pe = 0;
    while (ap < n && pe < m){
        if (people[pe].first <= apartment[ap] && apartment[ap] <= people[pe].second){
            ++ap;
            ++pe;
            ++ans;
        }else if (apartment[ap] < people[pe].first){
            ++ap;
        }else if (apartment[ap] > people[pe].second){
            ++pe;
        }
    }
    cout << ans << '\n';
    return 0;
}