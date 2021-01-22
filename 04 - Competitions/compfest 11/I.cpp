// Implementation of Andrew's monotone chain 2D convex hull algorithm.
// Asymptotic complexity: O(n log n).
// Practical performance: 0.5-1.0 seconds for n=1000000 on a 1GHz machine.
#include <bits/stdc++.h>
using namespace std;

typedef long long coord_t;         // coordinate type
typedef long long coord2_t;  // must be big enough to hold 2*max(|coordinate|)^2

struct Point {
	coord_t x, y;

	bool operator <(const Point &p) const {
		return x < p.x || (x == p.x && y < p.y);
	}

    long long eval(const Point &p) const {
        return x * p.x + y * p.y;
    }
};

// 2D cross product of OA and OB vectors, i.e. z-component of their 3D cross product.
// Returns a positive value, if OAB makes a counter-clockwise turn,
// negative for clockwise turn, and zero if the points are collinear.
coord2_t cross(const Point &O, const Point &A, const Point &B)
{
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Returns a list of points on the convex hull in counter-clockwise order.
// Note: the last point in the returned list is the same as the first one.
vector<Point> convex_hull(vector<Point> P)
{
	int n = P.size(), k = 0;
	vector<Point> H(2*n);

	// Sort points lexicographically
	sort(P.begin(), P.end());

	// Build lower hull
	for (int i = 0; i < n; ++i) {
		while (k >= 2 && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
		H[k++] = P[i];
	}

	// Build upper hull
	for (int i = n-2, t = k+1; i >= 0; i--) {
		while (k >= t && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
		H[k++] = P[i];
	}

	H.resize(k-1);
	return H;
}

struct lessJury {
    bool operator()(const Point& a, const Point& b) {
        return a.x * b.y > b.x * a.y;
    }
};

long long gcd(long long x, long long y) {
    if (x == 0) return y;
    return gcd(y%x, x);
}

constexpr int MAXN = 1e5;
int M, N, x, y, ans[MAXN + 5], pi;
map<Point, int, lessJury> jury;
map<Point, int> cake;
vector<Point> vcake;


int main(){
    cin >> M >> N;
    for (int i = 0; i < M; ++i) {
        cin >> x >> y;
        int d = gcd(x, y);
        jury[{x/d, y/d}]++;
    }
    vcake.push_back({0, 0});
    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        cake[{x, y}] = i;
        vcake.push_back({x, y});
    }
    vcake = convex_hull(vcake);
    pi = 1;
    for (auto& j : jury) {
        while (pi+1 < (int)vcake.size() && j.first.eval(vcake[pi]) < j.first.eval(vcake[pi+1])) {
            ++pi;
        }
        while (pi+1 < (int)vcake.size() && j.first.eval(vcake[pi]) == j.first.eval(vcake[pi+1])) {
            ans[cake[vcake[pi]]] += j.second;
            ++pi;
        }
        ans[cake[vcake[pi]]] += j.second;
    }
    for (int i = 0; i < N; ++i) {
        cout << ans[i] << '\n';
    }
}