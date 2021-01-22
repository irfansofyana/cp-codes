#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	stack<int> st;
	int A[10005];
	int x,y,n,i,k,j;
	string temp1;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>temp1;
		if (temp1=="add"){
			cin>>x>>y;
			for (j=1;j<=y;j++)
				st.push(x);
			cout<<st.size()<<endl;
		}
		else if (temp1=="del"){
			cin>>y;
			for (j=1;j<=y;j++){
				if (j==1){
					cout<<st.top()<<endl;
					st.pop();
				}
				else
					st.pop();
			}
		}
		else if (temp1=="adx"){
			cin>>x;
			k=st.size();
			for (j=1;j<=st.size();j++){
				A[st.size()+1-j]=st.top()+x;
				st.pop();
			}
			for (j=1;j<=k;j++){
				st.push(A[j]);
			}
		}
		else if (temp1=="dex"){
			cin>>x;
			k=st.size();
			for (j=1;j<=st.size();j++){
				A[st.size()+1-j]=st.top()-x;
				st.pop();
			}
			for (j=1;j<=k;j++){
				st.push(A[j]);
			}
		}
	}
	return 0;
}
