#include <stdio.h>
int main(){
    int caminho;
    printf("Digite o caminho que quer seguir.\n");
    scanf("%i" , &caminho);
    if (caminho == 1){
        scanf("%i", &caminho);
        if (caminho == 4){
            scanf("%i", &caminho);
            if (caminho == 6){
                printf("Caminho V�lido.\nDestino alcan�ad.\n");
            }
            else{
                printf("Caminho inv�lido.\n");
            }
        }
    }
    else if (caminho == 2){
        printf("Caminho V�lido, mas o destino n�o foi alcan�ado");
    }
    else if (caminho == 3){
        scanf("%i", &caminho);
        if (caminho == 5){
            scanf("%i", &caminho);
            if (caminho == 7){
                scanf("%i", &caminho);
                if (caminho == 8){
                    printf("Caminho V�lido.\nDestino alcan�ado.\n");
                } else {
                    printf("Caminho inv�lido.\n");
                }
            } else {
                printf("Caminho inv�lido.\n");
            }
        } else {
            printf("Caminho inv�lido.\n");
        }
    } else {
        printf("Caminho inv�lido.\n");
    }
return 0;
}
