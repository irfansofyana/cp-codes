#include <bits/stdc++.h>
using namespace std;

int n, m, x;
multiset<int> ms;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < m; ++i){
        cin >> x;
        if (ms.empty()) {
            cout << -1 << '\n';
            continue;
        }
        multiset<int>::iterator a = ms.lower_bound(x);
        if (a == ms.end()){
            --a;
            cout << *a << '\n';
            ms.erase(a);
            continue;        
        }
        if ((*a) > x){
            if (a == ms.begin()){
                cout << -1 << '\n';
            }else {
                --a;
                cout << (*a) << '\n';
                ms.erase(a);
            }
        }else{
            cout << *a << '\n';
            ms.erase(a);
        }
    }
    return 0;
}