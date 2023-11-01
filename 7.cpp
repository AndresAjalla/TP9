#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [12][19], fila=1,col=1;
	
	for (fila=0;fila<12;fila++) {
		for (col=0;col<19;col++){
			printf ("\n Fila #%d, Columna #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
	}
	
	
	for (fila=0;fila<12;fila++) {
		for (col=0;col<19;col++){
			if (matriz[fila][col]<0){
				printf ("0   ");
			}else{
				printf ("%d  ",matriz [fila][col]);
			}
		}
		printf("\n");
	}
	return 0;
}

