#include <stdio.h>
#include <stdlib.h>

/*?Implemente um algoritmo que leia um n�mero e realize a soma dos n�meros entre zero e o n�mero lido.

?OBS::utilize um acumulador para a soma e o contador para a quantidade de repeti��es do comando. */

	long long sum = 0;

main()

{
	
	int n;

	printf("Digite um numero ");
	scanf("%d", &n);
    
    int contador = 0;
    
    for (int i = n; i >= 0; i--) {
     
	 sum += i;
     
     contador++;
     
     }
    
    printf("A soma dos numeros entre 0 e %d e %lld\n", n, sum);
    printf("Quantidade de repeticoes: %d", contador);
    
      
   } 
