#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j,idx,awal,hasil;
long long min;
long long A[8]={1,2,3,6,9,27,100,1000}
string input,temp;

int main(){
	cin.tie(0);
	cin>>n>>m;
	for (i=1;i<=n;i++){
		getline(cin,input);
		cin.ignore();
		awal=0;
		idx=input.find(' ',awal);
		hasil=1;
		while (idx<input.length()){
			temp=input.substr(awal,idx-1);
			if (temp=="1") hasil*=A[0];
			else if (temp=="logN") hasil*=A[1];
			else if (temp=="N") hasil*=A[2];
			else if (temp=="NlogN") hasil*=A[3];
			else if (temp=="N^2") hasil*=A[4];
			else if (temp=="N^3") hasil=A[5];
			else if (temp=="2^N") hasil*=A[6];
			else if (temp=="N!") hasil*=A[7]
		}
	}
}
