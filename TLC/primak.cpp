#include <bits/stdc++.h>
using namespace std;
bool cekprima(long long p)
{
	bool q;
	int j;
	if (p<=1)
		return false;
	else{
		q=true;
		j=2;
		while ((j<=int(sqrt(p))) && (q)){
			if (p%j==0)
				q=false;
			else
				j++;
		}
		if (q)
			return true;
		else
			return false;
	}
}

int main(){
	long long n,i,idx;
	long long t,x;
	long long A[77778];
	bool p=true;
	
}