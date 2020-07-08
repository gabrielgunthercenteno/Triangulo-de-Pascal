#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero_linhas,l,c,x,y,num,den;
    printf("Digite o numero de linhas desejado: ");
    scanf("%d",&numero_linhas);
    for(l=0;l<numero_linhas;l++){
        for(c=numero_linhas-l;c>=1;c--){
            printf("");
        }
        y=1;
        num = l;
        den=1;
        for(x=0;x<=l;x++){
            printf("%d ",y);
            y=y*num;
            y=y/den;
            num--;
            den++;
        }
        printf("\n");
    }
}
