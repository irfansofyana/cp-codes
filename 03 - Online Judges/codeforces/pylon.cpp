#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,jawaban,p;
	long long jumlah=0,x,y;
	double rata;
	
	cin>>n;
	cin>>y;
	jumlah+=y;
	for (long long i=1;i<n;i++){
		cin>>x;
		jumlah+=x;
	}
	p=jumlah/n;
	rata=double(jumlah)/n;
	if (y>rata){
		jawaban=y+1;
	}
	else if (y==rata)
		jawaban=static_cast<long long>(rata);
	else if (y<rata){
		if (p==rata)
			jawaban=p;
		else{
			if (rata-y>1)
				jawaban=floor(rata);
			else
				jawaban=ceil(rata);
	}
}
	cout<<jawaban<<endl;	
}
