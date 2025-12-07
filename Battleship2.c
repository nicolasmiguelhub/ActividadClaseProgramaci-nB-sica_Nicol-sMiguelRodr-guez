#include <stdio.h>
#include <stdlib.h>

//Impresión de los Tableros
void TableroJugador1(char tablero_Jugador1[12][12])
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            tablero_Jugador1[i][j] = 'A';
        }
    }
}
void TableroJugador2(char tablero_Jugador1[12][12])
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            tablero_Jugador1[i][j] = 'A';
        }
    }
}

 //Colocación de Barcos de los jugadores
void ColocacionBarcosJ1(char tableroColocacion[12][12])
{

 int fila;
 int columna;
 int cantidadDeBarcos = 6;
 int posicionValida;

 char orientacion;

 //Portaviones
 char P = 'P';
 int _P = 4;

 //Cruceros
 char C1 = 'C';
 char C2 = 'c';

 int _C1 = 3;
 int _C2 = 3;

 //Patrulleros
 char N1 = 'N';
 char N2 = 'n';
 char N3 = 'z';

 int _N1 = 2;
 int _N2 = 2;
 int _N3 = 2;
 
 //Para el Struct fui ayudado con un poco de IA debido a que no sabía como implementarlo correctamente. Busqué la utilidad de este y como se debe implementar en un código.
 struct Barco
{
    int tamaño;

    char simbolo;
}
 barcos[] = { {_P, P}, {_C1, C1}, {_C2, C2}, {_N1, N1}, {_N2, N2}, {_N3, N3} };

  //Colocación de cada barco y comprobación de sus orientaciones y posiciones válidas
 for (int b = 0; b < cantidadDeBarcos; b++)
 {
    do
    {
        posicionValida = 1;

        printf("Colocando el barco de tamaño %d \n", barcos[b].tamaño );

        printf("Escoja la fila de su barco desde el 0 hasta el 11: \n ");
        scanf( " %d", &fila );

        printf("Escoja la columna de su barco desde el 0 hasta el 11: \n");
        scanf( " %d", &columna );

        printf("Escoja la orientación de su barco (H para Horizontal o V para Vertical): \n");
        scanf( " %c", &orientacion );

        if (orientacion != 'H' && orientacion != 'V')
        {
            printf("Escoja una orientación que sea H o V, es decir HORIZONTAL o VERTICAL usando solo sus letras iniciales (H), (V) \n");
            posicionValida = 0;
        }
        if (orientacion == 'H' && columna + barcos[b].tamaño >= 12)
        {
            printf("Columna no disponible, prueba de nuevo entre los rangos validos 0-11. \n");
            posicionValida = 0;
        }
        else if (orientacion == 'V' && fila + barcos[b].tamaño >= 12)
        {
            printf("Fila no disponible, prueba de nuevo entre los rangos validos 0-11. \n");
            posicionValida = 0;
        }
        if (posicionValida)
        {
            for (int i = 0; i < barcos[b].tamaño; i++)
            {
                int COLUMNA = columna + (orientacion == 'H' ? i : 0);
                int FILA = fila + (orientacion == 'V' ? i : 0);
                tableroColocacion[FILA][COLUMNA] = barcos[b].simbolo;
            }
        }
        
    } while (!posicionValida);
    
 }
 
}

void ColocacionBarcosJ2(char tableroColocacion[12][12])
{

 int fila;
 int columna;
 int cantidadDeBarcos = 6;
 int posicionValida;

 char orientacion;

 //Portaviones
 char P = 'P';
 int _P = 4;

 //Cruceros
 char C1 = 'C';
 char C2 = 'c';

 int _C1 = 3;
 int _C2 = 3;

 //Patrulleros
 char N1 = 'N';
 char N2 = 'n';
 char N3 = 'z';

 int _N1 = 2;
 int _N2 = 2;
 int _N3 = 2;
 
 //Para el Struct fui ayudado con un poco de IA debido a que no sabía como implementarlo correctamente. Busqué la utilidad de este y como se debe implementar en un código.
 struct Barco
{
    int tamaño;

    char simbolo;
}
 barcos[] = { {_P, P}, {_C1, C1}, {_C2, C2}, {_N1, N1}, {_N2, N2}, {_N3, N3} };

  //Colocación de cada barco y comprobación de sus orientaciones y posiciones válidas
 for (int b = 0; b < cantidadDeBarcos; b++)
 {
    do
    {
        posicionValida = 1;

        printf("Colocando el barco de tamaño %d \n", barcos[b].tamaño );

        printf("Escoja la fila de su barco desde el 0 hasta el 11: \n ");
        scanf( " %d", &fila );

        printf("Escoja la columna de su barco desde el 0 hasta el 11: \n");
        scanf( " %d", &columna );

        printf("Escoja la orientación de su barco (H para Horizontal o V para Vertical): \n");
        scanf( " %c", &orientacion );

        if (orientacion != 'H' && orientacion != 'V')
        {
            printf("Escoja una orientación que sea H o V, es decir HORIZONTAL o VERTICAL usando solo sus letras iniciales (H), (V) \n");
            posicionValida = 0;
        }
        if (orientacion == 'H' && columna + barcos[b].tamaño >= 12)
        {
            printf("Columna no disponible, prueba de nuevo entre los rangos validos 0-11. \n");
            posicionValida = 0;
        }
        else if (orientacion == 'V' && fila + barcos[b].tamaño >= 12)
        {
            printf("Fila no disponible, prueba de nuevo entre los rangos validos 0-11. \n");
            posicionValida = 0;
        }
        if (posicionValida)
        {
            for (int i = 0; i < barcos[b].tamaño; i++)
            {
                int COLUMNA = columna + (orientacion == 'H' ? i : 0);
                int FILA = fila + (orientacion == 'V' ? i : 0);
                tableroColocacion[FILA][COLUMNA] = barcos[b].simbolo;
            }
        }
        
    } while (!posicionValida);
    
 }
 
}

//Impresión de los Tableros
void ImpresionTablero(char tablero_Jugador[12][12])
{
    printf("Tablero del Jugador: \n");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%c ", tablero_Jugador[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    //Menú
    int menubutton;

    char Tablero_jugador1[12][12];
    char Tablero_jugador2[12][12];
    
    do
    {
     //Introducción de botones del Menú
     printf(" Seleccioné que quiere hacer. \n");
     printf(" 1. Jugar. \n");
     printf(" 2. Reglas \n");
     printf(" 3. Salir. \n");

     //Selección del Botón
     scanf( " %d", &menubutton);

     //Función Botón 1
     if (menubutton == 1)
     {

        TableroJugador1(Tablero_jugador1);
        TableroJugador2(Tablero_jugador2);

        ColocacionBarcosJ1(Tablero_jugador1);
        ColocacionBarcosJ2(Tablero_jugador2);
        
        printf("1 ");
        ImpresionTablero(Tablero_jugador1);
        
        printf("2 ");
        ImpresionTablero(Tablero_jugador2);
        

       return 0;
     }

     //Función Botón 2
     else if (menubutton == 2)
     {
     //Instrucciones del juego
     printf("Este juego está basado en turnos y las normas son las siguientes: \n");
     printf("Tenéis que decidir quién será el jugador 1 y quien el jugador 2. \n");
     printf("Tras esto cada uno tendréis 4 portaviones, 2 cruceros y 3 patrulleros que cada uno ocupa 4, 3 y 2 posiciones respectivamente. \n");
     printf("Colocad los barcos en vuestro tablero sin mirar los del otro jugador. \n");
     printf("Si acertais, hundís o fallais al atacar a vuestro rival el juego lo marcará diciendo tocado, hundido o agua respectivamente al final de cada turno individual. \n");
     printf("Dicho esto solo queda jugar, buena suerte y que gane la mejor flotilla. \n");

     getchar();
     }

     //Función Botón 3
     else if (menubutton == 3)
     {
        return 0;
     }

     //Botones no existentes
     else if (menubutton > 3)
     {
        printf("Instrucción no valida, lea las selecciones y pruebe con los números de estas");
     }
    } while (menubutton !=3);
     

}