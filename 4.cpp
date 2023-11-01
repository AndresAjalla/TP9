#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[1][3],fila=0,col=0;
	
	for (fila=0;fila<1;fila++) {
		for (col=0;col<3;col++){
			printf ("\n De la fila #%d, ingrese valor #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
	}
	printf("\n ");
	for (fila=0;fila<1;fila++) {
		for (col=0;col<3;col++){
			if (col==0){
				printf(" %d ",matriz[0][2]);
			}
			if (col==1){
				printf(" %d ",matriz[0][0]);
			}
			if (col==2){
				printf(" %d ",matriz[0][1]);
			}
		}
	}
	return 0;
}
