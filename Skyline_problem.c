#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define LIM 10000
#define LIM_BUILDS 5000
#define N 3


int main (){
int builds[LIM_BUILDS][N];
int i;
int a;
int j;
int f;

int n_builds = 0;
int analise = 0;
int erro = 0;

int li = 0;
int hi = 0;
int ri = 0;
int height[LIM] = {0};

printf("How many buildings will you want to analyse.(limit of 5000): ");
scanf("%d",&n_builds);



if (n_builds>LIM_BUILDS){
	printf ("Exceeded the building limit.");
	}else{
		printf("Enter the building coordinates:\n");
					
		// read array
		for (i=0;i<n_builds;i++){ 	
			for(a=0;a<N;a++){
				scanf("%d",&builds[i][a]);
			}
		}
		
		// escreve e analisa a matriz.
		printf("\n----------------------IMPUT--------------------------\n");
		for (i=0;i<n_builds;i++){
			printf("\n");
			printf("edificio: %d       ",i+1);
			for(a=0;a<N;a++){        
				analise = builds[i][a];
				
				printf("%3d",builds[i][a]);
				if (analise > LIM){
					printf("  wrong  ");
					erro ++;
				}else{
					printf("  good  ");
				}
			}
		}
	}
	printf("\n");
	i=1;
		
	if(erro==0){
		printf("\n-----------------------OUTPUT-------------------------\n");	
		printf("\n");
		while (i<n_builds){
			for (f=0;f<n_builds;f++){
			
	 			li = builds [f][0];
	 			hi = builds [f][1];
	 			ri = builds [f][2];
	 		
   				for(j=li;j<ri;++j){
       				if (height[j] < hi){
          				height[j] = hi;
   					}
				}		
			}
	
			for (i = 1; i < LIM; ++i) {
    			if (height[i-1] != height[i]) {
      				printf(" %d %d ", i, height[i]);
    			}
		    }
		}
	}else{
		printf("\nNumber of errors: %d \n",erro);
		printf("\nPlease restart the program");
	}	
	printf("\n\nNumber of buildings analyzed: %d \n",n_builds);
	return 0;	
}
