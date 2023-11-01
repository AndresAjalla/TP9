#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [20][7],contKM=0,fila=1,col=1,i=1,j=0;
	
	for (fila=0;fila<20;fila++) {
		for (col=0;col<7;col++){
			printf ("\n Chofer #%d, ingrese km de dia #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
	}
	
	printf ("\n\n");
	
	for (fila=0;fila<20;fila++){
		printf("\n CHOFER %d: \n",i);	
		i++;
		for (col=0;col<7;col++){
			j++;
			printf("DIA %d: %d         ",j,matriz[fila][col]);
			contKM=contKM+matriz[fila][col];
		}
		j=0;
		printf("\n KM recorridos en una semana: %d",contKM);
		contKM=0;
		printf("\n ");
	}
	return 0;
}

