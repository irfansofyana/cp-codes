#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[6][6];
	int i,j,x,y,p;
	

	for (i=1;i<=5;i++){
		for (j=1;j<=5;j++){
			cin>>A[i][j];
			if (A[i][j]==1){
				x=i;
				y=j;
			}
		}	
	}
	
	switch (x) {
	case 1: 
		switch(y){
			case 1: p=4; break;
			case 2: p=3; break;
			case 3: p=2; break;
			case 4: p=3; break;
			case 5: p=4; break;
		}
		break;
	case 2:
		switch(y) {
			case 1: p=3; break;
			case 2: p=2; break;
			case 3: p=1; break;
			case 4: p=2; break;
			case 5: p=3; break;
		}
		break;
	case 3:
		switch(y) {
			case 1: p=2; break;
			case 2: p=1; break;
			case 3: p=0; break;
			case 4: p=1; break;
			case 5: p=2; break;
		}
		break;
	case 4:
		switch(y) {
			case 1: p=3; break;
			case 2: p=2; break;
			case 3: p=1; break;
			case 4: p=2; break;
			case 5: p=3; break;
		}
		break;
	case 5:
		switch(y){
			case 1: p=4; break;
			case 2: p=3; break;
			case 3: p=2; break;
			case 4: p=3; break;
			case 5: p=4; break;
		}
	}
	printf("%d\n",p);
}