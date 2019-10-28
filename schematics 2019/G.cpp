// Sudah dibaca : Iwang
// Topik        : Convex hull

#include <bits/stdc++.h>
using namespace std;


typedef double coord_t;       
typedef double coord2_t;  

struct Point {
	coord_t x, y;
	bool operator <(const Point &p) const {
		return x < p.x || (x == p.x && y < p.y);
	}
};

coord2_t cross(const Point &O, const Point &A, const Point &B){
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Returns a list of points on the convex hull in counter-clockwise order.
// Note: the last point in the returned list is the same as the first one.
vector<Point> convex_hull(vector<Point> P){
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

int N;
double ans, x, y;
vector<Point> plant;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cout << fixed << setprecision(2);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        plant.push_back({x, y});
    }
    plant = convex_hull(plant);
    N = plant.size();
    if (N != 0) {
        for (int i = 0; i < N; ++i) {
            ans += plant[i].x * plant[(i+1)%N].y - plant[(i+1)%N].x * plant[i].y;
        }
    }
    cout << (ans) / 2 << '\n';
}