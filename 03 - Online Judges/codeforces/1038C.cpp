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
const double EPS = -1e9;

//declare variables here
const int MAXN = 1e5;
int N, A[MAXN+5], B[MAXN+5];

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N;
  for (int i = 0 ; i < N; i++) cin >> A[i];
  for (int i = 0 ; i < N; i++) cin >> B[i];
  sort(A, A + N); sort(B, B + N);
	LL sumA = 0; LL sumB = 0;
	int ia = N-1; int ib = N-1;
	for (int i = 0 ; i < 2*N; i++){
		if (i%2 == 0) {
			if (ib == -1) {
				sumA += A[ia];
				ia--;
			}
			else {
				if (A[ia] > B[ib]){
					sumA += A[ia];
					ia--;
				}else ib--;
			}
		}else{
			if (ia == -1) {
				sumB += B[ib];
				ib--;
			}else{
				if (B[ib] > A[ia]){
					sumB += B[ib];
					ib--;
				}else ia--;
			}
		}
	}
	cout << sumA - sumB << '\n';
  return 0;
}