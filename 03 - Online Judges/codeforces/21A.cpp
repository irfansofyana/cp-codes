#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
typedef long long ll;
bool check(string s){
    if(s.size()<1 || s.size()>16) return 0;
    for(int i=0;i<s.size();++i) if(s[i]!='_' && (tolower(s[i])<'a' || tolower(s[i])>'z' ) && (s[i]<'0' || s[i]>'9')  ) return 0;
    return 1;
}
void end(){
    puts("NO");
    exit(0);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("myfile.in", "r", stdin);
#endif
    vector<vector<string> > w(3);
    string s;
    cin>>s;
    int z=0,a;
    a=0;
    char r='@',t='@';
    for(size_t i=0;i<s.size();++i){
        if(s[i]==r || s[i]==t){
            w[z].push_back(s.substr(a,i-a));a=i+1;
            if(s[i]=='@') z++;
            if(s[i]=='/'){ z++;break;}
            r='.';t='/';
        }
    }
    w[z].push_back(s.substr(a,s.size()-a));
    if(w[0].size()!=1 || w[2].size()>1)end();
    if(w[0].size() && !check(w[0][0]))end();
    if(w[2].size() && !check(w[2][0])) end();
    int x=0;
    for(int i=0;i<w[1].size();++i){
        x+=w[1][i].size();if(!check(w[1][i]))end();
    }
    if(x>32 || x<1) end();
    puts("YES");


    return 0;
}
