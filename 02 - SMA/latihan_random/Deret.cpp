#include <bits/stdc++.h>
using namespace std;

int n,i,j,pos,idx;
char A[500];
void ngisi(){
	int i;
	char c;
	c='A';
	pos=0;
	idx=1;
	for (i=1;i<=351;i++){
		A[i]=c;
		pos++;
		if (pos==idx){
			idx++;
			pos=0;
			c=c+1;
		}
	}
}
int main(){
	ngisi();
	cin>>n;
	cout<<A[n]<<endl;
	return 0;
}
