#include <bits/stdc++.h>
using namespace std;

long long i,t,sx,sy,tx,ty,tempx,tempy;
double temp,awal;
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
	awal = jarak(double(sx),double(sy),double(tx),double(ty)); 
	cin >> s;
	for (i=0;i<s.size();i++) {
		tempx = sx; tempy = sy;
		if (s[i]=='E') {
			tempx++;
			if (jarak(double(tempx),double(tempy),double(tx),double(ty))<awal) {
				awal = jarak(double(tempx),double(tempy),double(tx),double(ty));
				sx = tempx;
				sy = tempy;
			}
		}
		else if (s[i]=='S') {
			tempy--;
			if (jarak(double(tempx),double(tempy),double(tx),double(ty))<awal) {
				awal = jarak(double(tempx),double(tempy),double(tx),double(ty));
				sx = tempx;
				sy = tempy;
			}
		}
		else if (s[i]=='N') {
			tempy++;
			if (jarak(double(tempx),double(tempy),double(tx),double(ty))<awal) {
				awal = jarak(double(tempx),double(tempy),double(tx),double(ty));
				sx = tempx;
				sy = tempy;
			}
		}
		else if (s[i]=='W') {
			tempx--;
			if (jarak(double(tempx),double(tempy),double(tx),double(ty))<awal) {
				awal = jarak(double(tempx),double(tempy),double(tx),double(ty));
				sx = tempx;
				sy = tempy;
			}
		}
		if (awal==0) {
			cout <<i+1<<endl;
			return 0;
		}
	}
	cout << "-1" << endl;
}
