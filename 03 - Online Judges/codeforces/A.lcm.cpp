#include <bits/stdc++.h>
using namespace std;
long long gcd(long long p,long long q){
    if (q==0)
        return p;
    else
        return gcd(q,p%q);
}
int main(){
    ios_base::sync_with_stdio(0);
    long long n,temp;
	
    cin>>n;
	if (n%2==0){
		temp=n*(n-1);
		
	}
}