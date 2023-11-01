#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [4][4],cont=0,fila=1,col=1;
	
	for (fila=0;fila<4;fila++) {
		for (col=0;col<4;col++){
			matriz[fila][col]= rand()%10;
			if (matriz[fila][col]==0){
				cont++;
			}
		}
	}
	
	printf ("\n\n");
	
	for (fila=0;fila<4;fila++){
		for (col=0;col<4;col++){
			printf("%d  ",matriz[fila][col]);
		}
		printf ("\n");
	}
	printf("\n CONTADOR DE CEROS: %d",cont);
	
	return 0;
}

