// Escribe en un archivo con extensión .c el programa Imprime_Num. 
// Compílalo con el compilador gcc. Después, ejecútalo para comprobar su funcionamiento.
// Para que nos imprima la cadena Fin del algoritmo en la línea siguiente, le podemos añadir al principio de la cadena el carácter \n que hace referencia
// a un retorno de línea. Nos quedaría la instrucción printf(“\nFin del algoritmo”); Realiza ese cambio en tu código fuente (archivo .c) y
// vuelve a compilarlo y ejecutarlo para ver la diferencia
// Además, todos los printf que muestran los resultados se pueden agrupar en una única llamada a la función de la siguiente forma:
// printf(“El número introducido es: %d \nFin del algoritmo”, Num);
// Realiza ese cambio en tu código fuente (archivo .c) y vuelve a compilarlo y ejecutarlo para ver la diferencia

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
int main () {

    // Este programa imprime por pantalla un número leído por teclado
    // Declaro las variables de mi función
    int Num;

    //Sustituyo la función ESCRIBA “cadena” por printf
    printf("Escribe un número: ");

    //Sustituyo la función LEA Num por scanf (“ %d”, &variableEntera);
    scanf(" %d", &Num); //Guarda el número leído en la variable Num

    //Sustituyo la función ESCRIBA “cadena” por printf
    printf("El número introducido es:");

    //Sustituyo la función ESCRIBA Num por printf(“ %d”, variableEntera);
    printf("%d",Num);

    //Sustituyo la función ESCRIBA “cadena” por printf
    printf("\nFin del algoritmo");

    //Fin del programa
    return 0;
}