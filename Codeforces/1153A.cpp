#include <bits/stdc++.h>
using namespace std;

int N, T;
int s, d;
int ans, wait;

int main(){
    scanf("%d %d", &N, &T);
    ans = -1;
    for (int i = 0; i < N; i++){
        scanf("%d %d", &s, &d);
        //
        if (s >= T){
            if (ans == -1) {
                ans = i+1;
                wait = s-T;
            }else if (s-T < wait){
                wait = s-T;
                ans = i+1;
            }
        }else {
            int diff = T-s;
            int tmp = diff / d;
            if (diff % d != 0) tmp++;
            int bil = s + (tmp)*d;
            if (ans == -1){
                ans = i+1;
                wait = bil-T;
            }else if (bil-T < wait){
                wait = bil-T;
                ans = i+1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}