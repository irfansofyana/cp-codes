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
const int MAXN = 1e5;
int N, ans, sum;
int arr[MAXN+5];
int brr[MAXN+5];
string s;

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0 ; i < N; i++){
  	cin >> arr[i];
  	brr[i] = arr[i];
  	if (i > 0) arr[i] += arr[i-1];
  }
 	cin >> s;
 	reverse(s.begin(), s.end());
 	int i = 0;
 	while (i < (int)s.size() && s[i] == '0') i++;
 	if ((int)s.size()-1-(i+1) >= 0) {
 		ans = arr[(int)s.size()-1-(i+1)];
 	}else ans = 0;
 	if (i == (int)s.size()) ans = 0;
 	else {
 		sum = brr[(int)s.size()-1-i];
 		ans = max(ans, sum);
 		for (int j = i+1; j < (int)s.size(); j++){
 			if (s[j] == '0') continue;
 			else {
 				int tmp;
 				if ((int)s.size()-1-(j+1) >= 0) tmp = sum + arr[(int)s.size()-1-(j+1)];
 				ans = max(ans, tmp);
 				sum += brr[(int)s.size()-1-j];
 				ans = max(ans, sum);
 			}
 		}	
 	}
 	cout << ans << '\n';
  return 0;
}