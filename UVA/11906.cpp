                          //                 @LordDummy's template                            //
                         //      Copyright © 2018 LordDummy. All rights reserved.            //
                        //             "May the Accepted Verdict be With You"               //

#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = -1e9;

//declare variables here
int T, TC;
int R, C, N, M, W;
bool arr[105][105], visit[105][105];
int even, odd;

bool cek(int x, int y){
  return ((x>=0 && x < R && y>=0 && y <C));
}

void DFS(int x, int y){ 
  visit[x][y] = true;
  int t1 = x-N;
  int t2 = x+N;
  int t3 = y-M;
  int t4 = y+M;
  int cnt = 0;
  vector<pair<int,int>> nxt;
  map<pair<int,int>, bool> mep;
  if (cek(t1, t3) && arr[t1][t3]) {
    cnt++;
    mep[{t1, t3}] = true;
    nxt.pb({t1, t3});
  }
  if (cek(t1, t4) && arr[t1][t4] && mep.find({t1, t4}) == mep.end()) {
    cnt++;
    nxt.pb({t1, t4});
    mep[{t1, t4}] = true;
  }
  if (cek(t2, t3) && arr[t2][t3] && mep.find({t2, t3}) == mep.end()) {
    cnt++;
    nxt.pb({t2, t3});
    mep[{t2, t3}] = true;
  }
  if (cek(t2, t4) && arr[t2][t4] && mep.find({t2, t4}) == mep.end()){
    cnt++;
    nxt.pb({t2, t4});
    mep[{t2, t4}] = true;
  }

  t1 = x-M;
  t2 = x+M;
  t3 = y-N;
  t4 = y+N;

  if (cek(t1, t3) && arr[t1][t3] && mep.find({t1, t3}) == mep.end()) {
    cnt++;
    mep[{t1, t3}] = true;
    nxt.pb({t1, t3});
  }
  if (cek(t1, t4) && arr[t1][t4] && mep.find({t1, t4}) == mep.end()) {
    cnt++;
    nxt.pb({t1, t4});
    mep[{t1, t4}] = true;
  }
  if (cek(t2, t3) && arr[t2][t3] && mep.find({t2, t3}) == mep.end()) {
    cnt++;
    nxt.pb({t2, t3});
    mep[{t2, t3}] = true;
  }
  if (cek(t2, t4) && arr[t2][t4] && mep.find({t2, t4}) == mep.end()){
    cnt++;
    nxt.pb({t2, t4});
    mep[{t2, t4}] = true;
  }

  if (cnt % 2 == 0) even++;
  else if (cnt%2 == 1) odd++;
  for (int i = 0 ; i < sz(nxt); i++){
    if (nxt[i].fi == 0 && nxt[i].se == 0) continue;
    else {
      if (!visit[nxt[i].fi][nxt[i].se]) 
        DFS(nxt[i].fi, nxt[i].se);
    }
  }
}

int main(){
  OPTIMATION
  cin >> T;
  while (T--) {
    memset(arr, true, sizeof arr);
    cin >> R >> C >> N >> M;
    cin >> W;
    for (int i = 0 ; i < W; i++) {
      int x, y;
      cin >> x >> y;
      arr[x][y] = false;
    }
    even = odd = 0;
    memset(visit, false, sizeof visit);
    DFS(0, 0);
    cout << "Case " << ++TC << ": " << even << " " << odd << '\n';
  }
  return 0;
}