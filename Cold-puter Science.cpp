#include<stdio.h>
#include<string.h>

int main(){
    int i;
    int input;
    int angka;
    int count=0;
    scanf("%d",&input);
    for(i=0;i<input;i++){
        scanf("%d",&angka);
        if(angka<0){
            count+=1;
        }
        else{
            continue;
        }
    
    }
        printf("%d\n",count);
    
    return 0;
}


