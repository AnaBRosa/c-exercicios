#include <stdio.h>

int main(void) {
    int multiplicando;
    int multiplicador;

    printf("Qual tabuada deseja consultar: \n");
    scanf("%d", &multiplicando);

    if (multiplicando < 1 || multiplicando > 10) {
        printf("Tabuada desejada indisponivel\n");
    } else {
        for (multiplicador = 0; multiplicador <= 10; multiplicador++ ) {
            printf("%d x %d = %d\n", multiplicando, multiplicador, multiplicando * multiplicador);
        }
    }

    return 0;
}
