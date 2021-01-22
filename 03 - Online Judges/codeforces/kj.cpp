#include <bits/stdc++.h>
using namespace std;
int min(int p,int q){
	if (p<q)
		return p;
	else if (q<=p)
		return q;
}
int main(){
	int n;
	int A[150],B[150];
	int i,j,a,b,c,d,e;
	string p,q,f,idx1[150],idx2[150],idx3[150],idx4[150],captain;
	bool tanda=false;
	
	cin>>n;
	a=0; b=0; c=0; d=0; e=0;
	for (i=0;i<n;i++){
		getline(cin,f);
		p="";
		q="";
		j=0;
		tanda=false;
		while (j<f.length()){
			if ((f[j]!=" ") && (!tanda)){
				p+=f[j];
				j++;
			}
			else if (f[j]==" "){
				tanda=true;
				j++;
			}
			else if (tanda){
				q+=f[j];
				j++;
			}
		}
		if (q=="rat"){
			idx1[a]=p;
			a++;
		}
		else if (q=="woman"){
			idx2[b]=p;
			A[b]=i;
			b++;
		}
		else if (q=="child"){
			idx3[c]=p;
			B[c]=i;
			c++;
		}
		else if (q=="man"){
			idx4[d]=p;
			d++;
		}
		else if (q=="captain"){
			captain=q;
		}
	}
	for (i=0;i<a;i++)
		cout<<idx1[i]<<endl;
	for (i=0;i<min(b,c);i++){
		if (A[i]<B[i])
			cout<<idx2[i]<<endl;
		else if (B[i]<A[i])
			cout<<idx3[i]<<endl;
	}
	if (b>min(b,c)){
		for (i=min(b,c);i<b;i++)
			cout<<idx2[i]<<endl;
	}
	else if (c>min(b,c)){
		for (i=min(b,c);i<c;i++)
			cout<<idx3[i]<<endl;
	}
	for (i=0;i<d;i++)
		cout<<idx4[i]<<endl;
	cout<<captain<<endl;
}
