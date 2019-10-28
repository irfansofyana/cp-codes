//
//	Main.cpp
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
const int MAXQ = 2e5;
const int MAXN = 3e4;
const int MAXNUM = 1e6;
struct query{
	int L, R;
	int no;
};

query q[MAXQ+3];
int cnt[MAXNUM+3], ans[MAXQ+3];
int arr[MAXN+3], N, block, Q;
int distinct, currL, currR;

bool comp(query a, query b){
	if (a.L / block == b.L/block)
		return a.R < b.R;
	return a.L/block < b.L/block;
}

void add(int x){
	cnt[x]++;
	if (cnt[x] == 1) distinct++;
}

void del(int x){
	cnt[x]--;
	if (cnt[x] == 0) distinct--;
}

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0; i < N; i++)
  	cin >> arr[i];
  block = (int)sqrt(N) + 1;
  cin >> Q;
  for (int i = 0; i < Q; i++){
  	int tl, tr;
  	cin >> tl >> tr;
  	tl--; tr--;
  	q[i].L = tl;
  	q[i].R = tr;
  	q[i].no = i;
  }
  sort(q, q+Q, comp);
  currL = 0;
  currR = 0;
  for (int i = 0; i < Q; i++){
  	int L = q[i].L;
  	int R = q[i].R;
  	while (currL < L) {
  		del(arr[currL]);
  		currL++;
  	}
  	while (currL > L){
  		add(arr[currL-1]);
  		currL--;
  	}
  	while (currR <= R) {
  		add(arr[currR]);
  		currR++;
  	}
  	while (currR > R+1){
  		del(arr[currR-1]);
  		currR--;
  	}
  	ans[q[i].no] = distinct;
  }
  for (int i = 0; i < Q; i++){
  	cout << ans[i] << '\n';
  }
  return 0;
}