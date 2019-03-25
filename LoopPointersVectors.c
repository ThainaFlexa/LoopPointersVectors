#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int EncontrarMaiorSoma(int *soma1, int *soma2){
    if (*soma1>*soma2){
        return *soma1;
    }
    else if (*soma2>*soma1){
        return *soma2;
    }
    else{
        return 0;
    }
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int count,*p,v[4],*p2,v2[4],r;
    int soma1=0;
    int soma2=0;
    p=v;
    p2=v2;
    for(count=0;count<4;count++){
        printf("V1[%d]=",count);
        scanf("%d",&*(p+count));
        soma1+=v[count];
    }
    printf("Soma dos valores: %d\n",soma1);
    printf("=============\n");
    for(count=0;count<4;count++){
        printf("V2[%d]=",count);
        scanf("%d",&*(p2+count));
        soma2+=v2[count];
    }
    printf("Soma dos valores: %d\n",soma2);
    printf("=============\n");
    r=EncontrarMaiorSoma(&soma1,&soma2);
    if (r!=0)
         printf("A maior soma entre os dois vetores é %d.\n",r);
    else{
        printf("A soma entre os dois vetores são iguais.");
    }
}
