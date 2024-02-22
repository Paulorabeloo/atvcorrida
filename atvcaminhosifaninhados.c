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
                printf("Caminho Válido.\nDestino alcançad.\n");
            }
            else{
                printf("Caminho inválido.\n");
            }
        }
    }
    else if (caminho == 2){
        printf("Caminho Válido, mas o destino não foi alcançado");
    }
    else if (caminho == 3){
        scanf("%i", &caminho);
        if (caminho == 5){
            scanf("%i", &caminho);
            if (caminho == 7){
                scanf("%i", &caminho);
                if (caminho == 8){
                    printf("Caminho Válido.\nDestino alcançado.\n");
                } else {
                    printf("Caminho inválido.\n");
                }
            } else {
                printf("Caminho inválido.\n");
            }
        } else {
            printf("Caminho inválido.\n");
        }
    } else {
        printf("Caminho inválido.\n");
    }
return 0;
}
