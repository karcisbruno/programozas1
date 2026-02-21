#include<stdio.h>

int main(){
    int n;

    printf("Add meg n értékét: \n");
    if(scanf("%d", &n) != 1){
        return 1;
    }else{
        for(int i = 1; i<= n;i++){
            if(i % 4 == 0){
                printf("%d\n", i);
            }
        }
    }



    return 0;
}