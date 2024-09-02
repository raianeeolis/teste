#include <stdio.h>

int main(){
    
    int n, a = 0, b = 1, temp, achou = 0;

    scanf("%d", &n);

    if(n == 1){
        printf("O número pertence a sequencia de fibonacci\n");
        achou = 1;


    }
    else if(a==n|| b ==n){
        printf("O número pertence a sequencia de fibonacci\n");
        achou = 1;
    }
    else{
        for(int i = 0; i<n; i++){
            temp = a + b;
            a = b;
            b = temp;
            if(temp==n){
                printf("O número pertence a sequencia de fibonacci\n");
                achou = 1;
                break;
            }
        }
    }

    if(achou == 0){
        printf("O número não pertence a sequencia de fibonacci\n");
    }

}