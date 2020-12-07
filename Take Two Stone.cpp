#include<stdio.h>

int main(){
    int i,j;
    unsigned long long input;
    int odd,even;
    
    scanf("%llu",&input);
    if(input%2==0){
        printf("Bob\n");
    }
    else{
        printf("Alice\n");
    }
    
    
    
    return 0;
}


