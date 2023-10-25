/*
el usuario debe ingreesar un numero n y el programa vera si los numeros entre 1 y n sean primos y los mostrara
regresa 0 en casi de qye bi lo sea y 1 en caso de que si lo sea
*/
#include<stdio.h>

int Primo(int);

int main(){
    int i = 0;
    int valor;

    printf("introdusca un numero, se calcularan los numeros primod desde 1 hasta el valor: ");
    scanf("%d",&valor);

    for(i = 1 ; i <= valor ; i++){
        Primo(i);
    }
    return 0;
}

int Primo(int num){
    int i = 0;
    int j = 0;

    if (num == 0 || num == 1){
        return 0;//no son primos
    } else {
        for (i = num; i >= 1; i--){
            if(num%i == 0){
                j++;
            } else {}
        }
    }
    
    if(j == 2){
        printf("%d\n",num);
        return 1;
    } else {
        return 0;
    }
}