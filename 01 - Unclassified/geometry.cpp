#include <bits/stdc++.h>

using namespace std;

const double eps = 1e-12;
const double PI = acos(-1);

struct point{
	double x, y;
};

bool isSamePoint(point a, point b){
	return (fabs(a.x - b.x) < eps && fabs(a.y - b.y) < eps);
}

double distPoint(point a, point b){
	return hypot(a.x - b.x, a.y - b.y);
}

point rotate(point p, double theta){
	double rad = (theta * PI) / 180.0;
	point hasil;
	hasil.x = p.x * cos(rad) - p.y * sin(rad);
	hasil.y = p.x * sin(rad) + p.y * cos(rad);
	return hasil;
}

//persamaan garis : ax + by + c = 0
struct line{
	double a, b, c;
};

void pointsToLine(point a, point b, line &l) {
	if (fabs(a.x - b.x) < eps) {
		l.a = 1.0; l.b = 0.0; l.c = -a.x;
	}
	else {
		l.a = -(double)(a.y - b.y) / (a.x - b.x);
		l.b = 1.0;	//fix kan nilai b = 1
		l.c = -(double)(l.a * a.x) - a.y;
	}
}

bool areParallel(line l1, line l2){
	return ((fabs(l1.a - l2.a) < eps) && (fabs(l1.b - l2.b) < eps));
}

bool areSame(line l1, line l2){
	return (areParallel(l1, l2) && fabs(l1.c - l2.c) < eps);
}

// returns true (+ intersection point) if two lines are intersect
bool areIntersect(line l1, line l2, point &p) {
	if (areParallel(l1, l2)) return false; // no intersection
	// solve system of 2 linear algebraic equations with 2 unknowns
	p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);
	// special case: test for vertical line to avoid division by zero
	if (fabs(l1.b) > eps)	 p.y = -(l1.a * p.x + l1.c);
	else p.y = -(l2.a * p.x + l2.c);
	return true; 
}

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
    double val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    if (fabs(val) < eps) return 0;  // colinear
 
    return (val > eps)? 1: 2; // clock or counterclock wise
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
	
	return 0;
}
