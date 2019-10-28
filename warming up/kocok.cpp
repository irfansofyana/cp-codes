#include <bits/stdc++.h>
using namespace std;
int k,n,m,i,j,l,awal,akhir,banyak,idx,idx2,moni=0,piyu=0,black;
int A[1000],temp[1000],get[1000];
char c;
int main(){
	cin.tie(0);
	cin>>n;
	for (i=1;i<=n;i++) cin>>A[i];
	cin>>m;
	for (j=1;j<=m;j++){
		cin>>awal>>c>>akhir>>banyak;
		for (k=1;k<=banyak;k++){
			idx=1;
			for (l=akhir;l>=awal;l--){
				temp[idx]=A[l];				//dapet yang harus dipindahin
				idx++;
				A[l]=0;
			} idx2=1;
			for (l=1;l<=n;l++){
				if (A[l]!=0){
					get[idx2]=A[l];
					idx2++;
				}
			}
			for (l=1;l<=akhir-awal+1;l++){
				A[l]=temp[l];
			} idx2=1;
			for (l=akhir-awal+2;l<=n;l++){
				A[l]=get[idx2];
				idx2++;
			}
		}
		/*for (i=1;i<=n;i++) cout<<A[i]<<" ";
		cout<<endl;*/
	}
	cin>>black;
	for (i=1;i<=n;i++){
		if (i%2==1 && moni<black) moni+=A[i];
		else if (i%2==1 && moni>=black){
			if (piyu>=black) break;
			else if (piyu<black) piyu+=A[i];
		}
		else if (i%2==0 && piyu<black) piyu+=A[i];
		else if (i%2==0 && piyu>=black){
			if (moni>=black) break;
			else if (moni<black) moni+=A[i];
		}
	}
	cout<<"Moni : "<<moni<<endl;
	cout<<"Piyu : "<<piyu<<endl;
	if (abs(black-moni)==abs(black-piyu)) cout<<"Seri"<<endl;
	else if (abs(black-moni)<abs(black-piyu)) cout<<"Moni menang"<<endl;
	else cout<<"Piyu menang"<<endl;
}
