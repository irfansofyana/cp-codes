//
//  Main.cpp
//


#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
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

//functions and procedures list
void fastscan(int &number) { 
  bool negative = false; 
  register int c; 
  number = 0; 
  c = getchar(); 
  if (c=='-') { 
      negative = true; 
      c = getchar(); 
  } 
  for (; (c>47 && c<58); c=getchar()) 
      number = number *10 + c - 48; 
  if (negative) 
      number *= -1; 
} 

//declare variables here
const int MAXN = 2e4;
int f[MAXN+3], ans[MAXN+3];
int N, pos, T, ret;

int get(int x){
  int res = 0;
  while (x > 0) {
    res += f[x];
    x -= (x&(-x));
  }
  return res;
}

void update(int x){
  while (x <= N){
    f[x]++;
    x += (x&(-x));
  }
}

int query(int a,int b){
  if (a > b) return 0;
  else return get(b) - get(a-1);
}

bool can(int x,int y){
  int terisi = query(pos+1, x);
  if (x-(pos+1)+1 - terisi >= y) return true;
  return false;
}

int main(){
  OPTIMATION
  cin >> T;
  while (T--) {
    cin >> N;
    for (int i = 0; i <= N; i++) f[i] = 0;
    pos = 0;
    for (int i = 1; i <= N; i++){
      int terisiujung = query(pos + 1, N);
      int bebasujung = N - (pos+1) + 1 - terisiujung;
      int need = i+1;
      int le,ri,mid;
      if (need <= bebasujung) {
        le = pos+1;
        ri = N;
        while (le <= ri){
          mid = (le + ri)>>1;
          if (can(mid,need)) {
            ret = mid;
            ri = mid-1;
          }else le = mid + 1;
        }
        ans[ret] = i;
        pos = ret;
      }
      else {
        need -= bebasujung;
        int kosong = N - (i-1);
        if (need%kosong == 0) need = kosong;
        else need = need%kosong;
        pos = 0;
        le = pos+1;
        ri = N;
        while (le <= ri){
          mid = (le + ri)>>1;
          if (can(mid,need)) {
            ret = mid;
            ri = mid-1;
          }else le = mid + 1;
        }
        ans[ret] = i;
        pos = ret;
      }
      update(pos);
    }
    for (int i = 1; i <= N; i++){
      cout << ans[i];
      cout << (i == N ? '\n' : ' ');
    }
  }
  return 0;
}