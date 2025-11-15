
#include <stdio.h>

int main ()
{
    //Números que necesitamos para hacer la adivinación como usuario.
    int randomNumber = 8;
	int userNumber;

    printf("Trata de adivinar el número que la máquina piensa con números entre el 1 y el 10 \n");

    //Es lo que nos permite decir si el número es correcto o no cuando hemos tratado de adivinar el código.
    do
    {
      //Implantación del número.
      
      printf("Introduce un número entre definido entre 1 y 10:\n ");
      scanf("%d", &userNumber);


	  if (userNumber != randomNumber) 
	  {
        //Número Equivocado.
         printf("Wrong Number. \n");
         //scanf("%d", userNumber);
 
	  }

    } while (userNumber != randomNumber);

    printf ("Correct Number. \n" );
    
	return 0;
}
