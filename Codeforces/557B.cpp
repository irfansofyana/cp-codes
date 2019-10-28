#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(a) (int)(a).size()
#define ll long long
#define INF 1000000000
#define EPS 1e-12
using namespace std;

typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vpii;
typedef vector <vi> vvi;

int N, W;
int temp;
int A[200005];
double mid, lo, hi;
double ans;

int comp (int x, int y) { return x > y;}

double func (double x) {
	double res;
	double x1, x2;
	x1 = x;
	x2 = x1/2;
	res = x1 * N + x2 * N;
	return res;
}

int main () {
	scanf ("%d %d", &N, &W);
	for (int i=0; i<2*N; i++)
		scanf ("%d", &A[i]);
	sort (A, A + 2*N, comp);
	lo = 0;
	hi = min(double(A[N-1]), A[2*N-1] * 2.0);
	while (fabs (hi - lo) > EPS) {
		mid = (lo + hi) / 2.0;
		//printf ("%.6lf %.6lf %.6lf %.6lf\n", lo, hi, mid, func(mid));
		if (func(mid) <= W) {
			ans = func(mid);
			lo = mid;
		}
		else {
			hi = mid;
		}
		//printf ("%.9lf\n", ans);
	}
	printf ("%.9lf\n", ans);
	return 0;
}
