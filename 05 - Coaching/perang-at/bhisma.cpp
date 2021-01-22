#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll n,m,c,par[100005],w[100005],v[100005],maks[100005];
vi jalan[100005];
bool udh[100005];

ll idx = 1;
vi city[100100];

void dfs(int a){
    stack<ll> s;
    s.push(a);
    udh[a] = 1;

    while(!s.empty()) {
        ll skrg = s.top();
        s.pop();
        maks[idx] = max(maks[idx],v[skrg]);
        city[idx].push_back(skrg);
        par[skrg] = idx;

        for (int i=0;i<jalan[skrg].size();i++) {
            ll ttg = jalan[skrg][i];
            if (!udh[ttg] && w[ttg] == w[skrg]) {
                udh[ttg] = 1;
                s.push(ttg);
            }
        }


    }
}

int main(){
    string s;
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m>>c;

    for (ll i=1;i<=n;i++) {
        par[i] = i;
    }

    for (ll i=1;i<=n;i++) {
        cin>>w[i];
    }
    for (ll i=1;i<=n;i++) {
        cin>>v[i];
        // maks[i] = v[i];
    }

    for (ll i=0;i<m;i++) {
        ll a,b;
        cin>>a>>b;
        jalan[a].push_back(b);
        jalan[b].push_back(a);
    }
    for (ll i=1;i<=n;i++) {
        if (!udh[i]) {
            dfs(i);
            idx++;
        }
    }

/*    for (ll i=1;i<=n;i++) {
        cout<<par[i]<<' ';
    }
    cout<<endl;*/

    ll q;
    cin>>q;

    for (int i=0;i<q;i++) {
        ll a,x,y;
        cin>>a;
        if (a==1) {
            cin>>x;
            cout<<maks[par[x]]<<endl;
        }
        else {
            cin>>x>>y;
            v[x] = y;
            maks[par[x]] = v[x];
            for (int j=0;j<city[par[x]].size();j++) {
                maks[par[x]] = max(maks[par[x]],v[city[par[x]][j]]);
            }
        }
    }
}