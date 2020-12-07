include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    int input,input1;
    int reverse=0;
    int reverse1=0;
    
    scanf("%d %d",&input,&input1);
    
    while(input!=0){
        reverse=reverse*10;
        reverse=reverse+input%10;
        input=input/10;
    }
    while(input1!=0){
        reverse1=reverse1*10;
        reverse1=reverse1+input1%10;
        input1=input1/10;
    }
    
    if(reverse1>reverse){
        printf("%d\n",reverse1);
    }
    else if(reverse>reverse1){
        printf("%d\n",reverse);
    }
    return 0;
}
