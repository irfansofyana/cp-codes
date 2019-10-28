#include <bits/stdc++.h>
using namespace std;

int N;

struct point{
	int x, y;
};

// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(point p, point q, point r){
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;
 
    return false;
}

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(point p, point q, point r){
    // See https://www.geeksforgeeks.org/orientation-3-ordered-points/
    // for details of below formula.
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    if (val == 0) return 0;  // colinear
 
    return (val > 0)? 1: 2; // clock or counterclock wise
}

// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(point p1, point q1, point p2, point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
 
    // General case
    if (o1 != o2 && o3 != o4)
        return true;
 
    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
    // p1, q1 and q2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
 
    return false; // Doesn't fall in any of the above cases
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	while (N--) {
		int xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4;
		cin >> xx1 >> yy1 >> xx2 >> yy2 >> xx3 >> yy3 >> xx4 >> yy4;
		point gariscoba1, gariscoba2;
		gariscoba1.x = xx3; gariscoba1.y = yy3;
		gariscoba2.x = xx4; gariscoba2.y = yy4;
		point ujicoba1, ujicoba2;
		if (xx1 > xx2) swap(xx1, xx2);
		if (yy1 > yy2) swap(yy1, yy2);
		ujicoba1.x = xx1; ujicoba1.y = yy1;
		ujicoba2.x = xx1; ujicoba2.y = yy2;
		bool ans = false;
		if (doIntersect(gariscoba1, gariscoba2, ujicoba1, ujicoba2)) ans = true;
		ujicoba1.x = xx1; ujicoba1.y = yy1;
		ujicoba2.x = xx2; ujicoba2.y = yy1;
		if (doIntersect(gariscoba1, gariscoba2, ujicoba1, ujicoba2)) ans = true;
		ujicoba1.x = xx2; ujicoba1.y = yy1;
		ujicoba2.x = xx2; ujicoba2.y = yy2;
		if (doIntersect(gariscoba1, gariscoba2, ujicoba1, ujicoba2)) ans = true;
		ujicoba1.x = xx1; ujicoba1.y = yy2;
		ujicoba2.x = xx2; ujicoba2.y = yy2;
		if (doIntersect(gariscoba1, gariscoba2, ujicoba1, ujicoba2)) ans = true;	
		cout << (ans ? "YA" : "TIDAK") << '\n';
	}
	return 0;
}