#include <bits/stdc++.h>
using namespace std;
int n,i,j,x;
int A[1000];
int t=0;
void push(int p,int q){
	A[q]=p;
	t++;
}
void pop(){
	A[t]=0;
	t=t-1;
}
int top(){
	return A[t];
}
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>x;
		push(x,i);
	}
	pop();
	pop();
	j=top();
	cout<<j<<endl;
}
