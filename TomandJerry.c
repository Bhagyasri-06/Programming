#include<stdio.h>
#include<stdlib.h>

int t_dist(int a, int b, int c, int d){
    return abs(a-c) + abs(b-d);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d,k;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        int dis=t_dist(a,b,c,d);
        if(k>=dis && (k-dis)%2==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    return 0;
}