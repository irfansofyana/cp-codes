#include <bits/stdc++.h>
using namespace std;
int main(){
	int c,x,n,i;
	stack<int> st;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x;
		st.push(x);         //untuk menghapus gunakan fungsi st.pop(),untuk mencari banyak data pake st.size()
	}						//st.push untuk memasukan data ke stack nya.
	st.pop();
	st.pop();
	st.pop();
	st.push(1001);
	st.push(700);
	c=st.top();
		cout<<c<<endl;
	st.pop();
	n=st.size();	
	for (i=0;i<n;i++){
		c=st.top();
		cout<<c<<" ";
		st.pop();
	}
	cout<<endl;
}
