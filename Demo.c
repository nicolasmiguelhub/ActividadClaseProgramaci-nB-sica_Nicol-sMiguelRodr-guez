
#include <stdio.h>

int main ()
{
    //Números que necesitamos para hacer la adivinación como usuario.
    int randomNumber = 8;
	int userNumber;
    
    //Rango máximo usable por el usuario
    int maxRange = 10;

    printf("Trata de adivinar el número que la máquina piensa con números entre el 1 y el 10 \n");

    //Es lo que nos permite decir si el número es correcto o no cuando hemos tratado de adivinar el código.
    do
    {
      //Implantación del número.
      
      printf("Introduce un número entre definido entre 1 y 10:\n ");
      scanf("%d", &userNumber);


	  if (userNumber != randomNumber && userNumber <= maxRange) 
	  {
        //Número Equivocado.
         printf("Número Equivocado. \n");
         //scanf("%d", userNumber);
	  }else
       if (userNumber > maxRange)
       {
        printf("Número Incorrecto. Vuelva a escoger entre 1 y 10 \n");
       }
        //Si se escoge un número mayor a 10 que es el rango máximo establecido.
      
      

    } while (userNumber != randomNumber);

    printf ("Número Correcto. \n" );
    
	return 0;
}
