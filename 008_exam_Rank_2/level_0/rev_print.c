#include <unistd.h>

int	main(int ac, char **av)
{
	int	c = 0;

	if (ac == 2)
	{
		while (av[1][c] != '\0')
			c++;
		c--;
		while (c >= 0)
		{
			write(1, &av[1][c], 1);
			c--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
--------------------------------------------------------------------------------
Pseudocódigo:
--------------------------------------------------------------------------------
	Empezamos el programa con el numero de argumentos y los punteros de los mismos.
	Incluimos la libreria "unistd.h" para usar la funcion "write".
	Nuestro programa imprime un string en sentido contrario.
	Vamos a declarar un contador llamado "c" para iterar entre letras.
	Mientras sean solo dos argumentos realiza lo de dentro.
	Hasta que el string no llegue al final avanza "c", luego retrocede una posicion para evitar imprimir el caracter nulo
	Mientras "c" sea mayor o igual que cero escribe cada letra y resta uno a "c" hasta llegar al principio.
	Ponemos un salto de linea y finalizamos programa.
	Finalizamos el programa.
--------------------------------------------------------------------------------
*/