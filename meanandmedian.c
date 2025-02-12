#include<stdio.h>
 void solve(){
     int t;
     scanf("%d",&t);
     while(t--){
         int X,Y;
         scanf("%d %d",&X,&Y);
         int A=Y,B=Y,C=3*X-2*Y;
         printf("%d %d %d\n",A,B,C);
     }
 }
 int main(){
     solve();
     return 0;
 }
     