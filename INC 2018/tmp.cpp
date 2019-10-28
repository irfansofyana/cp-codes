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

//declare variables here
const int MAXN = (int)1e5+5;
vector<LL> primes;
bitset<MAXN+5> bil;
LL Nfaktor[MAXN+5], N, arr[MAXN+5];

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (LL i = 2; i <= MAXN; i++){
		if (bil[i]) {
			primes.pb(i);
			for (LL j = i * i; j <= MAXN; j+= i)
				bil[j] = false;
		}
	}
}

void generate(){
	sieve();
	for (int i = 1; i <= MAXN; i++){
		LL tmp = i;
		int idx = 0;
		if (i == 1) {
			Nfaktor[i] = 1;
			continue;
		}
		LL res = 1;
		while (tmp > 1 && idx < (int)primes.size()){
			if (bil[tmp]) {
				res *= 2;
				tmp = 1;
			}
			else if (tmp % primes[idx] == 0){
				LL j = 0;
				while (tmp%primes[idx] == 0){
					j++;
					tmp /= primes[idx];
				}
				res *= (j + 1);
			}
			else idx++;
		}
		Nfaktor[i] = res;
	}
}

LL sqr(LL x){
	return ((x%MODPRIMA)*(x%MODPRIMA))%MODPRIMA;
}

LL pangkat(LL a,LL b){
	if (b == 0) return 1;
	else if (b == 1) return a%MODPRIMA;
	else if (b%2 == 0) return sqr(pangkat(a, b/2)%MODPRIMA)%MODPRIMA;
	else return ((a%MODPRIMA)*(sqr(pangkat(a, (b-1)/2))%MODPRIMA))%MODPRIMA;
}

int main(){
  OPTIMATION
  generate();
  cin >> N;
  for (int i = 1 ; i <= N; i++){
  	cin >> arr[i];
  }
  LL ans = 0;
  for (int i = 1; i <= N; i++){
  	Nfaktor[i] = N-Nfaktor[i]; 
  	LL t1 = (1LL*(Nfaktor[i]%MODPRIMA)*(arr[i]%MODPRIMA))%MODPRIMA;
  	LL t2 = pangkat(N - Nfaktor[i]+1, MODPRIMA-2);
  	// cout << t1 << " " << t2 << '\n';
  	ans += (t1*t2)%MODPRIMA;
  	ans %= MODPRIMA;
  }
  cout << ans << '\n';
  return 0;
}