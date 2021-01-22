#include <bits/stdc++.h>
using namespace std;


int main(){
int n,i,temp,min;
int P[1010];
int start,nilai;
	cin>>n;
	for (i=0;i<n;i++) cin>>P[i];
	start=1;
	temp=start;
	while (start<=2000){
		nilai=0;
		for (i=0;i<n;i++){
			nilai+=abs(P[i]-start);
			start++;
		}
		if (temp==1) min=nilai;
		else{
			if (nilai<min) min=nilai;
		}
		start=temp+1;
		temp=start;
	}
	cout<<min<<endl;
	return 0;
}
