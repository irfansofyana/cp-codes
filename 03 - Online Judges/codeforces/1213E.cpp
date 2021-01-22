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

int n;
string s, t;
char arr[] = {'a','b','c'};
int brr[] = {0, 1, 2};
string dua[] = {"aa", "bb", "cc"};

char cari(char c, char d){
	for (int i = 0; i < 3; ++i){
		if (arr[i] != c && arr[i] != d) return arr[i];
	}
}

int cari2(string a, string b){
	for(int i = 0; i < 3; ++i){
		if (dua[i] != a && dua[i] != b) return i;
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> s >> t;
	if (s == t){
		char p1 = s[0];
		char p2 = cari(s[0], s[1]);
		char p3 = cari(p1, p2);
		cout << "YES\n";
		for (int i = 0; i < 2 * n; ++i){
			if (i%2 == 0) cout << p1;
			else cout << p2;
		}
		for (int i = 0; i < n; ++i){
			cout << p3;
		}cout << '\n';
	}else {
		if (s[0] == t[0]) {
			if (s[1] != t[1] && s[0] != s[1] && s[0] != t[1]){
				cout << "YES\n";
				for (int i = 0; i < n; ++i) cout << s[1];
				for (int i = 0; i < n; ++i) cout << t[1];
				for (int i = 0; i < n; ++i) cout << s[0];
				cout << '\n';
			}else {
				cout << "YES\n";
				char p1 = cari(s[1], t[1]);
				for (int i = 0; i < 2*n; ++i){
					if (i%2 == 0) cout << s[0];
					else cout << p1;
				}
				for (int i = 0; i < n; ++i){
					cout << cari(s[0], p1);
				}
				cout << '\n';
			}
		}else {
			if (s[0] == s[1] && t[0] == t[1]){
				cout << "YES\n";
				for (int i = 0; i < 2*n; ++i){
					if (i%2 == 0) cout << s[0];
					else cout << t[0];
				}
				for (int i = 0; i < n; ++i){
					cout << cari(s[0], t[0]);
				}
				cout << '\n';
			}else if (s[0] == s[1]) {
				if (t[1] != s[1]){
					cout << "YES\n";
					for (int i = 0; i < 2*n; ++i){
						if (i % 2== 0) cout << t[0];
						else cout << s[0];
					}
					for (int i = 0; i < n; ++i){
						cout << cari(t[0], s[0]);
					}
					cout << '\n';
				}else {
					cout << "YES\n";
					for (int i = 0; i < n; ++i){
						cout << t[0];
					}
					for (int i = 0; i < 2*n; ++i){
						if (i%2 == 0) cout << cari(t[0], s[0]);
						else cout << s[0];
					}
					cout << '\n';
				}
			}else if (t[0] == t[1]){
				if (s[1] != t[1]){
					cout << "YES\n";
					for (int i = 0; i < 2*n; ++i){
						if (i %2 == 0) cout << s[0];
						else cout << t[0];
					}
					for (int i = 0; i < n; ++i){
						cout << cari(s[0], t[0]);
					}
					cout << '\n';
				}else {
					cout << "YES\n";
					for (int i = 0; i < n; ++i){
						cout << s[0];
					}
					for (int i = 0; i < 2*n; ++i){
						if (i%2 == 0) cout << cari(t[0], s[0]);
						else cout << t[0];
					}
					cout << '\n';
				}
			}else if (s[0] == t[1] && s[1] == t[0]){
				cout << "YES\n";
				for (int i = 0; i < n; ++i){
					cout << s[0];
				}
				for (int i = 0; i < n; ++i){
					cout << cari(s[0], s[1]);
				}
				for (int i = 0; i < n; ++i){
					cout << s[1];
				}
				cout << '\n';
			}else {
				bool found = false;
				do{
					string t1 = "";
					t1 += char(brr[0] + 'a');
					t1 += char(brr[1] + 'a');
					string t2 = "";
					t2 += char(brr[1] + 'a');
					t2 += char(brr[2] + 'a');
					if (t1 != s && t2 != t && t1 != t && t2 != s){
						cout << "YES\n";
						found = true;
						for (int i = 0; i < n; ++i){
							cout << t1[0];
						}
						for (int i = 0; i < n; ++i){
							cout << t1[1];
						}
						for (int i = 0; i < n; ++i){
							cout << t2[1];
						}
						cout << '\n';
						break;
					}
				}while (next_permutation(brr, brr + 3) && !found);
				if (!found) cout << "NO\n";
			}
		}	
	}
	return 0;
}