#include <stdio.h>

int main() {
    int numRestaurant;
    int bestAvaliation;
    int avaliation;
    int codRestaurant[1000];
    int bestRestaurant[1000];
    int numDays = 0;
    int codeBestRestaurant;

    printf("Inicializando programa\n");
    
    while (scanf("%d", &numRestaurant) != EOF) {
        for (int i = 1; i <= numRestaurant; i++) {
            printf("Digite o codigo do restaurante e sua avaliacao: ");
            scanf("%d %d", &codRestaurant, &avaliation);
            if (avaliation >= bestAvaliation) {
                if(codRestaurant < bestRestaurant[i]){
                bestAvaliation = avaliation;
                bestRestaurant[i] = codRestaurant;

                }
            }
        }
        numDays++;
    }

    for(int i = 1; i <= numDays; i++){

        printf("dia %d\n", i);
        printf("%d\n\n", bestRestaurant[i]);


    }


    return 0;
}
