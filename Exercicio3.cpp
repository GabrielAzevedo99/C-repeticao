#include <stdio.h>
#include <stdlib.h>

/* ?Crie um algoritmo que recebe 2 números e multiplica o num 1 pelo num 2 através de somas repetidas.
(ex: 2 e 3 = 2 + 2 + 2). */

main()

{
	int n1, n2;
	
	printf("Digite um numero ");
	scanf("%d", &n1);
    
    printf("Digite outro numero ");
    scanf("%d", &n2);
    
    int soma = 0;
    
    for (int i = n2; i >= 1; i--){
        
        soma += n1;
    }
    
    printf("result %d", soma);
    
}
