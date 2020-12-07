#include<stdio.h>

int main(){
    int input;
    int i,j;
    int kasus;
    
    scanf("%d",&kasus);
    for(i=0;i<kasus;i++){
        scanf("%d",&input);
    if(input%2==0){
        printf("%d is even\n",input);
    }
    else{
        printf("%d is odd\n",input);
    }
}
    
    return 0;
}
