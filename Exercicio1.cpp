#include <stdio.h>
#include <stdlib.h>

/*?Implemente um algoritmo que leia um n�mero e uma op��o de listagem.
Com base nessa op��o, escreva a sequ�ncia dos n�meros em ordem crescente(de zero at� o n�mero)
ou decrescente(do n�mero at� zero).
?1�CRESCENTE
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
