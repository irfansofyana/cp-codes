/*ID :irfansofyana
PROG : gift1
LANG : C++
*/

#include <bits/stdc++.h>
using namespace std;

int n,i,j,uang,orang;
string nama[20];
string s,bagi;
map<string,int> mep;

int main() {
	ofstream fout("gift1.out");
	ifstream fin("gift1.in");
	
	fin >> n;
	for (i=0;i<n;i++)
		fin >> nama[i];
	for (i=0;i<n;i++) {
		fin >> s >> uang >> orang;
		if (orang!=0) mep[s] -= uang;
		for (j=0;j<orang;j++) {
			fin >> bagi;
			mep[bagi]+=uang/orang;
		}
		if (orang!=0) mep[s]+=(uang%orang);
	}
	for (i=0;i<n;i++) {
		fout << nama[i] << " "<< mep[nama[i]] << endl;
	}
	return 0;	
}
