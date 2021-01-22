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

int N;
int arr[MAXN+5];

int main(){
	scanf("%d", &N);
	for (int i = 0 ; i < N; i++)
		scanf("%d", &arr[i]);
  int i = 0;
  LL ans = 0;
  while (i < N){
		int j = i + 1;
		LL cnt = 1;
		if (j < N){
			if (arr[j] == arr[i]) {
				while (j < N && arr[j] == arr[j-1]){
					j++;
					ans++;
				}
				i = j-1;
			}else if (arr[j] > arr[i]){
				while (j < N && arr[j] > arr[j-1]) {
					cnt++;
					j++;
				}
				ans += (cnt*(cnt + 1)) / 2;
				i = j;
			}
			else {
				while(j < N && arr[j] < arr[j-1]) {
					cnt++;
					j++;
				}
				ans += (cnt*(cnt + 1)) / 2;
				if (arr[j] > arr[j-1]) {
					ans--;
					i = j-1;
				}else{
					i = j;
				}
			}
		}else {
			ans++;
			i++;
		}   	
  }
  printf("%lld\n", ans);
  return 0;
}