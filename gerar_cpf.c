#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int cpf[9];
    int v1=0, v2=0, i;
    srand(time(NULL));

    for(i=0; i<9; i++){
        cpf[i] = rand() % 10;
    }

    for(i=0; i<9; i++){
        v1 += cpf[i] * (9 - (i%10));
        v2 += cpf[i] * (9 - ((i+1)%10));
    }

    v1 = (v1 % 11) % 10;
    v2 = v2 + v1 * 9;
    v2 = (v2 % 11) % 10;
    
    for(i=8; i>=0; i--){
        printf("%d", cpf[i]);
        if( i % 3 == 0 && i != 0){
            printf(".");
        }
    }

    printf("-%d%d\n", v1,v2);



    return 0;
}
