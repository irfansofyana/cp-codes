#include <bits/stdc++.h>
using namespace std;
 
int m,n,i,j;
int k;
long long A[55][55];
 
void isi(){
    for (i=0;i<=50;i++)
        A[i][0] = 1;
    for (i=1;i<=50;i++)
        A[i][i] = 1;
    for (i=2;i<=50;i++) {
        for (j=1;j<=49;j++) {
            A[i][j] = A[i-1][j-1]+A[i-1][j];
        }
    }
}
 
int main(){
    scanf("%d %d",&m,&n);
    isi();
    if (n>(m/2)) printf("0\n");
    else {
        k = m-n;
        printf("%lld\n",A[k][n]);
    }
    return 0;
} 
