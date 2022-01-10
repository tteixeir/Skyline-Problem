#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define LIM 10000
#define LIM_BUILDS 5000
#define N 3


//mapear edificios
int mapbuilds(int builds[][N]){
int i;
int a;
int b;
int n_builds = 0;
int analise = 0;
int erro = 0;

int li = 0;
int hi = 0;
int ri = 0;
int h = 0;
int res[LIM_BUILDS][2];


printf("quantos edificios vai querer usar. (limite de 5000): ");
scanf("%d",&n_builds);



if (n_builds>LIM_BUILDS){
	printf ("passou o limite de edificios.");
	}else{
		printf("Intruduza as cordenados dos edificios:\n");
					
		// read array
		for (i=0;i<n_builds;i++){ 	
			for(a=0;a<N;a++){
				scanf("%d",&builds[i][a]);
			}
		}
		
		// escreve e analisa a matriz.
		printf("\nIMPUT dado.");
		for (i=0;i<n_builds;i++){
			printf("\n");
			printf("edificio: %d       ",i+1);
			for(a=0;a<N;a++){        
				analise = builds[i][a];
				
				printf("%3d",builds[i][a]);
				if (analise > LIM){
					printf(" erro ");
					erro ++;
				}else{
					printf("  bem ");
				}
			}
		}
	}
	
	printf("\n\nNumero de erros/edificios fora dos parametros: %d \n",erro);
	
	// resolver o problema
	
	if(erro == 0){
		i=0;
		printf("\n inicio da avaliacao");
			res[i][0] = builds[i][0];
			res[i][1] = builds[i][1];
		for (i=0;i<n_builds;i++){
		
			if (builds[i][1]>builds[i+1][1]){
				if(builds[i][2]<builds[i+1][2]){
					if(builds)
					res[i][0]=builds[i][0];
					res[i][1]=builds[i][1];
					
					res[i][1]=builds[i][2];
					res[i][1]=builds[i][1];
							
				}	
			}
		}
		for (i=0;i<n_builds;i++){ 	
				for(a=0;a<2;a++){
					printf(" %d ",res[i][a]);	
				}
		}	
	printf("\n fim da avaliacao");
	}else{
		
	}
	
	return 0;
}


int main (){
	int n_builds = 0;
	int erro;
	int builds[LIM_BUILDS][N];
	mapbuilds(builds);	
	return 0;
	
}	
