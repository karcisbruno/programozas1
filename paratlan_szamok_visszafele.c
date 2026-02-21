#include<stdio.h>

int main(){

    int n;
    printf("Add meg n értékét(pozitív egészszám):\n");
    
    if(scanf("%d\n", &n) !=1){
        printf("Nem jól adtad meg n értékét! \n");
    }else{
        for (int i = n; i >= 1; i--)
        {
            if(i % 2 != 0){
                printf("%d\n", i);
            }
        }
        
    }

    return 0;
}