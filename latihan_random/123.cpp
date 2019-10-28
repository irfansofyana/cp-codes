#include <bits/stdc++.h>
using namespace std;
int brokoli(int x,int y){
	if (x==0 && y==0) return 0;
	else if (x>y) {
		if (x>-y) return brokoli(x-1,y)+1;
		else return brokoli(x,y+1)+1;
	}
	else {
		if (x>-y) return brokoli(x,y-1)+1;
		else return brokoli(x+1,y)+1;
	}
}
int main(){
	cout<<brokoli(9,13)<<endl;
	return 0;
}
