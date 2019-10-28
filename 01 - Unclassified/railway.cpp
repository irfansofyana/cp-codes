#include <bits/stdc++.h>

using namespace std;

struct point{
  double x, y;
};

struct vec{
  double x, y;
};

point awal;
vector<point> arr;
point ans;

vec toVec(point a, point b){
  vec tmp;
  tmp.x = b.x - a.x;
  tmp.y = b.y - a.y;
  return tmp;
}

vec scale(vec v, double s) { // nonnegative s = [<1 .. 1 .. >1]
  vec tmp;
  tmp.x = v.x * s;x
  tmp.y = v.y * s;
  return tmp;
} // shorter.same.longer

point translate(point p, vec v) { // translate p according to v
  point tmp;
  tmp.x = p.x + v.x;
  tmp.y = p.y + v.y;
  return tmp;
}

double dot(vec a, vec b){
  return (a.x * b.x + a.y * b.y);
}

double norm_sq(vec v){
  return v.x * v.x + v.y * v.y;
}

double dist(point a, point b){
  return hypot(a.x - b.x, a.y - b.y);
}

double distToLine(point p, point a, point b, point &c) {
  // formula: c = a + u * ab
  vec ap = toVec(a, p), ab = toVec(a, b);
  double u = dot(ap, ab) / norm_sq(ab);
  c = translate(a, scale(ab, u)); // translate a to c
  return dist(p, c); // Euclidean distance between p and c 
}

// returns the distance from p to the line segment ab defined by
// two points a and b (still OK if a == b)
// the closest point is stored in the 4th parameter (byref)
double distToLineSegment(point p, point a, point b, point &c) {
  vec ap = toVec(a, p), ab = toVec(a, b);
  double u = dot(ap, ab) / norm_sq(ab);
  if (u < 0.0) { 
    c = a; // closer to a
    return dist(p, a); 
  } // Euclidean distance between p and a
  if (u > 1.0) { 
    c = b; // closer to b
    return dist(p, b); 
  } // Euclidean distance between p and b
  return distToLine(p, a, b, c); 

} // run distToLine as above

int N;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  while (cin >> awal.x >> awal.y) {
    cin >> N;
    arr.clear();
    for (int i = 0 ; i < N + 1; i++) {
      point tmp;
      cin >> tmp.x >> tmp.y;
      arr.push_back(tmp);
    }
    double mini;
    point curr;
    for (int i = 1; i < arr.size(); i++) {
     if (i == 1) {
        mini = distToLineSegment(awal, arr[i-1], arr[i], ans);
        curr = ans;
     } 
     else {
      if (distToLineSegment(awal, arr[i-1], arr[i], ans) < mini) {
        mini = distToLineSegment(awal, arr[i-1], arr[i], ans);
        curr = ans;
      }
     }
    }
    cout << fixed << showpoint << setprecision(4);
    cout << curr.x << '\n';
    cout << curr.y << '\n';
  }
  return 0;
}