#include<stdio.h>

int main(){
    int input;
    long long factorial=1;
    int kasus;
    int i,j;//buat for
    int digit;
    scanf("%d",&kasus);
    for(i=0;i<kasus;i++){
        scanf("%d",&input);
        for(j=1;j<=input;j++){
            factorial=factorial*j;
            //printf("%d\n",j);
        }
        //printf("%lld\n",factorial);
        digit=factorial%10;
        printf("%d\n",digit);
        digit=0;
        factorial=1;
    } 
    
}
