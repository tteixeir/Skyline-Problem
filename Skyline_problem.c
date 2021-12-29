#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define lim 10000
#define lim_builds 7
#define n 3

//mapear edificios

int mapbuilds(int builds[n][n]){
int n_builds;
int i;
int a;
int analise = 0;
int erro = 0;

	for (n_builds = 0; n_builds < lim_builds ; n_builds++){
	
		// escreve uma linha na matriz.
		
		for (i=0;i<lim_builds;++i){ 
			a = 0;
			n_builds++;
			for(a=0;a<n;++a){
				scanf("%d",&builds[i][a]);
				
			}
		}
		// escreve no ecrã uma o vetor.
		
			for (i=0;i<lim_builds;++i){
			//	printf("\n");
					for(a=0;a<n;a++){
					//	printf("%d",builds[i][a]);
						
						// analise de tamanho dos edificios.                // a impressão tá desabilitada 
						analise = builds[i][a];
							if (analise > lim){
							//	printf(" erro ");
								erro ++;
							}else{
							//	printf(" tudo bem ");
						}
					}
			}	
	}	
		// escreve o numero de edificios.
	//	printf("\n");
	//	printf("Numero de edificios: %d",n_builds);
		if (erro > 0){
			printf("\n");
			printf (" edificio/s fora dos limites.");
		}
}


int main (){
	int i;
	int a;
	int analise;
	int builds[n][n];
	mapbuilds(builds);
	
}	
