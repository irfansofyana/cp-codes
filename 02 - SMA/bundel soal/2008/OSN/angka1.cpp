#include <bits/stdc++.h>
using namespace std;
long long A[100000];
long long i;
 
void isiarray(){
    for (i=0;i<=100000;i++){
        A[i]=(i*(i+1)/2);
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j;
     
    isiarray();
    cin>>n;
    for (i=1;i<=n;i++)
        cout<<A[i]<<endl;
}
