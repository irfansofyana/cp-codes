/*ID : irfansofyana
PROG :ride
LANG : C++
*/

#include <bits/stdc++.h>
using namespace std;

int hasil1,hasil2,i;
string a,b;

int main(){
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	fin >> a >> b;
	hasil1 = hasil2 = 1;
	for (i=0;i<a.size();i++) {
		hasil1*=(int)a[i]-64;
		hasil1 = hasil1%47;
	}
	for (i=0;i<b.size();i++) {
		hasil2*=(int)b[i]-64;
		hasil2 = hasil2%47;
	}
	if (hasil1%47==hasil2%47) fout<<"GO"<<endl;
	else fout<<"STAY"<<endl;
	return 0;
}
