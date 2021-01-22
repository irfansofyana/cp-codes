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
int N, Q;
int frek[30], need[30];
bool udah[30];
string s;

int main(){
  OPTIMATION
  cin >> N >> Q;
  cin.ignore();
  for (int i = 0 ; i < N; i++){
  	getline(cin, s);
  	int j = 0;
  	memset(udah, false, sizeof udah);
  	while (j < (int)s.size()) {
  		if (s[j] == ' ') j++;
  		else if (s[j] >= 'a' && s[j] <= 'z') j++;
  		else {
  			if (!udah[s[j]-'A']) {
  				frek[s[j]-'A']++;
  				udah[s[j]-'A'] = true;
  			}
  			j++;
  		}
  	}
  }
  while (Q--){
  	cin >> s;
  	if ((int)s.size() > N) cout << "NO\n";
  	else {
  		memset(need, 0, sizeof need);
  		for (int i = 0; i < (int)s.size(); i++){
  			need[s[i]-'A']++;
  		}
  		bool can = true;
  		for (int i = 0; i < 26 && can; i++){
  			if (need[i] > frek[i]) can = false;
  		}
  		if (can) cout << "YES\n";
  		else cout << "NO\n";
  	}
  }
  return 0;
}