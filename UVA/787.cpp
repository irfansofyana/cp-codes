#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL ans, maks, mini, bil;
string s;


int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    while(getline(cin, s)){
        stringstream ss(s);
        bool fi = true;
        while(ss >> bil){
            if (fi){
                fi = false;
                maks = bil; mini = bil; ans = bil;
            }else {
                if (bil > 0){
                    ans = max(ans, maks * bil);
                    maks = max(maks, maks * bil);
                    mini = min(mini, mini * bil);
                }else{
                    ans = max(ans, mini * bil);
                    maks = max(maks, mini * bil);
                    mini = min(mini, maks * bil);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}