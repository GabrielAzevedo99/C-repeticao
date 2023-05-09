#include <stdio.h>
#include <stdlib.h>

/*?Implemente um algoritmo que leia um número e uma opção de listagem.
Com base nessa opção, escreva a sequência dos números em ordem crescente(de zero até o número)
ou decrescente(do número até zero).
?1–CRESCENTE
?2-DECRESCENTE */ 

main()

{
	int n;
	int opicao;
	
	printf("Digite um numero ");
	scanf("%d", &n);
    
    printf("Digite 1 para crescente ");
    printf("Digite 2 para decrescente ");
    scanf("%d", &opicao);
    
    if (opicao == 1){ 
        for(int i = 0; i <= n; i++){
        printf("\n %d", i);   
        }
    }
    if (opicao == 2){
      for(int i = n; i >= 0; i--){
        printf("\n %d", i);
    }
    
}
}
