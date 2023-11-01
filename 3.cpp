#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [5][5], fila=1,col=1,MV=0;
	
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			printf ("\n Empleado #%d, ingrese venta del dia#%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
	}
	MV=matriz[0][0];
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			if (matriz[fila][col]>MV){
				MV=matriz[fila][col];
			}
		}
	}
	
	printf ("\n\n");
	
	printf("\n LA MAYOR VENTA FUE DE: %d",MV);
	
	return 0;
}




