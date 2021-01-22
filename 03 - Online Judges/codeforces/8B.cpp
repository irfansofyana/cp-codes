#include <bits/stdc++.h>
using namespace std;

long long t,sx,sy,tx,ty,tempx,tempy;
double jarak,temp;
string s;

double sqr(double a){
	return a*a;
}

double jarak(double ax,double bx,double cx,double dx){
	return sqrt(sqr(cx-ax)+sqr(dx-bx));
}
int main(){
	cin.tie(0);
	cin >> t >> sx >> sy >> tx >> ty;
	jarak = sqrt(sqr(double(tx)-double(sx))+sqr(double(ty)-double(sy)));
	cin >> s;
	for (i=0;i<s.size();i++) {
		tempx = sx; tempy = sy;
		if (s[i]=='E') {
			tempx++;
			if ()
		}
	}
}
