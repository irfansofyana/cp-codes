#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace 
#define putra std

irfan sofyana putra;
string input;
int idx1,idx2,banyak;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>input;
	idx1=input.find("heavy",0);
	idx2=input.find("metal",0);
	banyak=0;
	while ((idx1>=0 && idx1<input.length())){
		idx2=input.find("metal",idx1+1);
		if (idx1<idx2){
			banyak++;
			idx2=input.find("metal",idx2+1);
			while (idx2>=0 && idx2<input.length()){
				banyak++;
				idx2=input.find("metal",idx2+1);
			}
		}
		idx1=input.find("heavy",idx1+1);
	}
	cout<<banyak<<endl;
} 
