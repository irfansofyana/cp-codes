#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;


ll n,f[305];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;

  while (t--) {
    cin>>n;
    for (int i=0;i<n;i++) cin>>f[i];

    sort(f,f+n);

    ll ans = f[0] * f[n-1];
    bool ada = 1;
    for (int i=0,j=n-1;i<=j && ada;i++,j--) {
      if (f[i] * f[j] != ans) ada = 0;
    }

    if (ada) cout<<ans<<endl;
    else cout<<-1<<endl;
  }
}