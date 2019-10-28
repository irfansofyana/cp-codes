#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("input.in", "r", stdin);
#define out() freopen("output.out", "w", stdout);
#define IO inp() out()

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
const double EPS = 1e-9;

//declare variables here
const int MAXN = 2e5;
int N, curr;
int L[MAXN+5], R[MAXN+5];
pair<int,bool> indeks[MAXN+5];


int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    inp()
  #endif
  cin >> N;
  for (int i = 0; i < N; i++){
    char ch;
    int x;
    cin >> ch >> x;
    if (ch == 'L') {
        curr++;
        L[curr] = L[curr-1] + 1;
        R[curr] = R[curr-1];
        indeks[x] = {curr, false};
    }else if (ch == 'R'){
        curr++;
        L[curr] = L[curr-1];
        R[curr] = R[curr-1] + 1;
        indeks[x] = {curr, true};
    }else {
        int idx = indeks[x].first;
        int kanan = R[curr] - R[idx];
        int kiri  = L[curr] - L[idx];
        if (indeks[x].second) {
            cout << min(kanan, kiri + idx-1) << '\n';
        }else {
            cout << min(kiri, kanan + idx-1) << '\n';
        }
    }
  }

  return 0;
}