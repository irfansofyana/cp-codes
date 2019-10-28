#include <bits/stdc++.h>
using namespace std;
long long n;
long long jawaban;

int main(){
	cin.tie(0);
	cin>>n;
	jawaban=static_cast<long long>((-1+sqrt(8*n+1))/2);
	cout<<jawaban+1<<endl;	
}
