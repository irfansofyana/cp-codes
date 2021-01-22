#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> s;
    sort(s.begin(), s.end());
    do{
        ans.push_back(s);
    }while (next_permutation(s.begin(), s.end()));

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); ++i){
        cout << ans[i] << '\n';
    }

    return 0;
}