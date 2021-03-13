#include <stdio.h>
#include <math.h>

float distancia_centro(float, float);

int main()
{
    int puntaje1=0, puntaje2=0, i;
    float x1, y1, x2, y2;
    for (i=1; i<6; i++)
    {
        printf("\n\t\tRonda %d: ", i);
        printf("\nJugador 1: ", i);
        scanf("%f %f", &x1, &y1);
        printf("\nJugador 2: ", i);
        scanf("%f %f", &x2, &y2);
        if (distancia_centro(x1, y1)<distancia_centro(x2, y2))
            puntaje1 += 10;
        else if (distancia_centro(x1, y1)>distancia_centro(x2, y2)) {
            puntaje2 += 10;
            printf("jugador 2 = %d\n", puntaje2);
        }
        else if(distancia_centro(x1, y1) == distancia_centro(x2, y2)) {
            puntaje1 += 5;
            puntaje2 += 5;
        }
        printf("Resultados Ronda %d: \n Jugador 1: %d puntos\n Jugador 2: %d puntos\n", i, puntaje1, puntaje2);
    }
    if(puntaje1>puntaje2)
        printf("Gano el jugador 1 con %d puntos contra %d del jugador 2.", puntaje1, puntaje2);
    else if(puntaje2>puntaje1)
        printf("Gano el jugador 2 con %d puntos contra %d del jugador 1.", puntaje2, puntaje1);
    else printf("Hubo empate en %d puntos.", puntaje1);
}

float distancia_centro(float x, float y)
{
    float distancia;
    distancia = sqrt(pow(x, 2)+pow(y, 2));
    return distancia;
}
