#include <stdio.h>
#include <stdlib.h>

/*?Implemente um algoritmo que leia um número e realize a soma dos números entre zero e o número lido.

?OBS::utilize um acumulador para a soma e o contador para a quantidade de repetições do comando. */

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
