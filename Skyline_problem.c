#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define lim 10000
#define lim_builds 400
#define n 3


//mapear edificios
int mapbuilds(unsigned int builds[n][n],int erro){
int n_builds;
int i;
int a;
int analise = 0;

printf("escreva as cordenadas que desejar até 500 edificios.\n");

	for (n_builds = 0; n_builds < lim_builds; ){
						
		// escreve uma linha na matriz.
		for (i=0;i<lim_builds;++i){ 
			a = 0;
			++n_builds;	
			for(a=0;a<n;a++){
				scanf("%d",&builds[i][a]);	
			}
		}
		i = 0;
		// escreve e analisa a matriz.
		for (i=0;i<lim_builds;++i){
			printf("\n");
			printf("edificio i: %d       ",i);
			for(a=0;a<n;a++){        
				analise = builds[i][a];
				
				printf("%d",builds[i][a]);
				if (analise > lim){
					printf(" erro ");
					erro ++;
				}else{
					printf(" bem ");
				}
			}
		}	
//	}

	// escerver o numero de erros
	if (erro > 0){
	printf("\n");
	printf ("Edificio/s fora dos limites.");
	}
				
	// escreve o numero de edificios.
	printf("\n");
	printf("Numero de edificios: %d  erros: %d",n_builds,erro);
	return 0;
}
}


int main (){
	
	int erro;
	unsigned static int builds[n][n];
	mapbuilds(builds,erro);
	return 0;
	
}	

