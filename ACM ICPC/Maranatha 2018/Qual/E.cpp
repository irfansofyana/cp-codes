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

//declare variables here.
struct point {
	double x;
	double y;
};

struct circle {
	double x; double y; double r;
	circle() {}
	circle(double x, double y, double r): x(x), y(y), r(r) {}
};

circle f(vector<point> R) {
	if (R.size() == 0) {
		return circle(0, 0, -1);
	} 
	else if (R.size() == 1) {
		return circle(R[0].x, R[0].y, 0);
	} 
	else if (R.size() == 2) {
		return circle((R[0].x+R[1].x)/2.0, (R[0].y+R[1].y)/2.0, hypot(R[0].x-R[1].x, R[0].y-R[1].y)/2.0);
	} else {
		double D = (R[0].x - R[2].x)*(R[1].y - R[2].y) - (R[1].x - R[2].x)*(R[0].y - R[2].y);
		double p0 = (((R[0].x - R[2].x)*(R[0].x + R[2].x) + (R[0].y - R[2].y)*(R[0].y + R[2].y)) / 2 * (R[1].y - R[2].y) - ((R[1].x - R[2].x)*(R[1].x + R[2].x) + (R[1].y - R[2].y)*(R[1].y + R[2].y)) / 2 * (R[0].y - R[2].y))/D;
		double p1 = (((R[1].x - R[2].x)*(R[1].x + R[2].x) + (R[1].y - R[2].y)*(R[1].y + R[2].y)) / 2 * (R[0].x - R[2].x) - ((R[0].x - R[2].x)*(R[0].x + R[2].x) + (R[0].y - R[2].y)*(R[0].y + R[2].y)) / 2 * (R[1].x - R[2].x))/D;
		return circle(p0, p1, hypot(R[0].x - p0, R[0].y - p1));
	}
}

circle fmini(vector<point>& P, int i, vector<point> R) {
	if (i == P.size() || R.size() == 3) {
		return f(R);
	} else {
		circle D = fmini(P, i+1, R);
		if (hypot(P[i].x-D.x, P[i].y-D.y) > D.r) {
			R.push_back(P[i]);
			D = fmini(P, i+1, R);
		}
		return D;
	}
}

circle minidisk(vector<point> P) {
	random_shuffle(P.begin(), P.end());
	return fmini(P, 0, vector<point>());
}

int T, N;
vector<point> arr;
point tmp[1005];


int main(){
  OPTIMATION
  // #ifndef ONLINE_JUDGE
  //   IO
  // #endif
  cin >> T;
  int tc = 0;
  while (T--){
  	cin >> N;
  	arr.clear();
  	for (int i = 0 ; i < N; i++) {
  		point xx;
  		cin >> xx.x >> xx.y;
  		tmp[i] = xx;
  	}
  	int i = 0;
  	while (i < N) {
  		arr.pb(tmp[i]);
  		int j = i+1;
  		while (j < N && tmp[i].x == tmp[j].x && tmp[i].y == tmp[j].y) j++;
  		i = j;
  	}
  	circle ans = minidisk(arr);
  	cout << ++tc << '\n';
  	cout << fixed << showpoint << setprecision(2);
  	cout << ans.x << " " << ans.y << " " << ans.r << '\n';
  }
  return 0;
}
