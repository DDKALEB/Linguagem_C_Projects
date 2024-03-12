#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco;
    int centavos;
    int moedas = 0;

    // Solicita ao usuário a quantidade de troco devida até que seja fornecido um valor não negativo
    do
    {
        printf("Troco devido: ");
        scanf("%f", &troco);
    }
    while (troco < 0);

    // Converte o valor do troco de dólares para centavos
    centavos = round(troco * 100);

    // Calcula o número mínimo de moedas necessárias
    while (centavos >= 25)
    {
        centavos -= 25;
        moedas++;
    }

    while (centavos >= 10)
    {
        centavos -= 10;
        moedas++;
    }

    while (centavos >= 5)
    {
        centavos -= 5;
        moedas++;
    }

    while (centavos >= 1)
    {
        centavos -= 1;
        moedas++;
    }

    // Imprime o número mínimo de moedas necessárias
    printf("%d\n", moedas);

    return 0;
}
/*Este programa primeiro solicita ao usuário a quantidade de troco devida e verifica se é um valor não negativo. 
Em seguida, converte esse valor de dólares para centavos e calcula o número mínimo de moedas necessárias 
para representar esse valor de troco. Finalmente, imprime o número mínimo de moedas necessárias.



