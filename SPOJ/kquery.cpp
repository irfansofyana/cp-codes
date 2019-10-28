/*
                                               
 ____                 ______           _____   
|    |            ___|\     \      ___|\    \  
|    |           |    |\     \    |    |\    \ 
|    |           |    |/____/|    |    | |    |
|    |        ___|    \|   | |    |    |/____/|
|    |       |    \    \___|/     |    ||    ||
|    |       |    |\     \        |    ||____|/
|____|  ___  |\ ___\|_____|  ___  |____|       
|    | |   | | |    |     | |   | |    |       
|____| |___|  \|____|_____| |___| |____|       
  \(             \(    )/           \(         
   '              '    '             '      
   				template v.1.4   
                                           
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cerr << "#" << x << ": " << x << '\n';
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define FORL(i, a, b) for (LL i = a; i <= b; i++)
#define FORDL(i, a, b) for (LL i = a; i >= b; i--)

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const LL MODPRIME = 1e9 + 7;
const double EPS  = 1e-12;
const LL MAXL = 4e18;
const LL MINL = -4e18;
const int MAXI = 2e9;
const int MINI = -2e9;

const int MAXM = 2e5+3e4+5;
const int MAXN = 2e5+3e4+5;

int N, arr[MAXN], Q, brr[MAXN];
int helper[MAXM], maxx;
map<int,int> mep;
vi le[MAXN], ale[MAXN];
vi ri[MAXN], ari[MAXN]; 
int BIT[MAXM];
int ile[MAXN], iri[MAXN], tot[MAXM];

struct ques{
	int l, r, bil;
};
ques q[MAXM];

void fastscan(int &number) { 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

void update(int x){
	while (x <= MAXN){
		BIT[x]++;
		x += (x&(-x));
	}
}

int query(int x){
	int ret = 0;
	while (x > 0){
		ret += BIT[x];
		x -= (x&(-x));
	}
	return ret;
}

void process(){
	for (int j = 0; j < sz(le[0]); j++) ale[0].pb(0);
	FOR(i, 1, N){
		update(brr[i]);
		for (int j = 0; j < sz(le[i]); j++){
			int tmp = query(le[i][j]);
			ale[i].pb(i-tmp);
		}
	}
	memset(BIT, 0, sizeof BIT);
	for (int j = 0; j < sz(ri[N+1]); j++) ari[N+1].pb(0);
	FORD(i, N, 1){
		update(brr[i]);
		for (int j = 0; j < sz(ri[i]); j++){
			int tmp = query(ri[i][j]);
			ari[i].pb(N+1-i-tmp);
		}
	}
}

void answer(){
	FOR(i, 1, Q){
		int a = q[i].l;
		int b = q[i].r;
		int c = q[i].bil;
		int kiri = ale[a-1][ile[a-1]];
		int kanan = ari[b+1][iri[b+1]];
		if (a > b) printf("0\n");
		else printf("%d\n", tot[c]-kiri-kanan);
		ile[a-1]++;
		iri[b+1]++;
	}
}

void inp(){
	fastscan(N);
	// scanf("%d", &N);
	// N = readInt();
	int idx = 0;
	FOR(i, 1, N){ 
		fastscan(arr[i]);
		// arr[i] = readInt();
		// scanf("%d", &arr[i]);
		helper[idx] = arr[i];
		idx++;
	}
	// scanf("%d", &Q);
	fastscan(Q);
	// Q = readInt();
	FOR(i, 1, Q){
		// q[i].l = readInt();
		// q[i].r = readInt();
		// q[i].bil = readInt();
		fastscan(q[i].l);
		fastscan(q[i].r);
		fastscan(q[i].bil);
		// scanf("%d %d %d", &q[i].l, &q[i].r, &q[i].bil);
		// printf("%d %d %d\n", q[i].l, q[i].r, q[i].bil);
		helper[idx] = q[i].bil;
		idx++;
	}
	sort(helper, helper+idx);
	int nidx = 1;
	int i = 0;
	while (i < idx){
		int j = i+1;
		while (j < idx && helper[j] == helper[i]) j++;
		mep[helper[i]] = nidx;
		nidx++;
		i = j;
	}
	maxx = nidx;
	FOR(i, 1, N){
		arr[i] = mep[arr[i]];
		brr[i] = arr[i];
	}
	sort(arr + 1, arr + N + 1);
	// debug("xxx")
	FOR(i, 1, Q){
		q[i].bil = mep[q[i].bil];
		le[q[i].l-1].pb(q[i].bil);
		ri[q[i].r+1].pb(q[i].bil);
		int lo = 1;
		int hi = N;
		int ret = -1;
		while (lo <= hi){
			int mid = (lo + hi) >> 1;
			if (arr[mid] > q[i].bil){
				ret = mid;
				hi = mid - 1;
			}else lo = mid + 1;
		}
		if (ret == -1) tot[q[i].bil] = 0;
		else tot[q[i].bil] = N-ret+1;
	}
	// FOR(i, 1, N){
	// 	debug(arr[i]);
	// }
	// cout << '\n';
	// FOR(i, 1, Q){
	// 	debug(q[i].bil);
	// }
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
	#endif
	// OPTIMIZE
	inp();
	process();
	answer();
	return 0;
}