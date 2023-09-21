#include <stdio.h>

int main() {
    int numRestaurant;
    int bestAvaliation = 0;
    int avaliation;
    int codRestaurant;
    int bestRestaurant = 0;
    int numDays = 0;
    int codeBestRestaurant;

    printf("Inicializando programa\n");
    
    while (scanf("%d", &numRestaurant) != EOF) {
        for (int i = 1; i <= numRestaurant; i++) {
            printf("Digite o codigo do restaurante e sua avaliacao: ");
            scanf("%d %d", &codRestaurant, &avaliation);
            if (avaliation >= bestAvaliation) {
    
                bestAvaliation = avaliation;
                bestRestaurant = codRestaurant;
                
            }
        }
        numDays++;
    }

    for(int i = 1; i <= numDays; i++){

        printf("\nDia %d\n", i);
        printf("%d\n\n", bestRestaurant);


    }


    return 0;
}
