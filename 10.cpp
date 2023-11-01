#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[10][10],fila=0,col=0,MF=0,MC=0;
	
	for(fila=0;fila<10;fila++){
		for(col=0;col<10;col++){
			printf("\n De la fila #%d, ingrese valor de col. #%d: ",fila+1,col+1);	
			scanf("%d",&matriz[fila][col]);
		}
	}
	printf("\n SUMA DE FILAS: \n");
	for(fila=0;fila<10;fila++){
		for(col=0;col<10;col++){
			MF=MF+matriz[fila][col];
		}
		printf("%d \n",MF);
		MF=0;	
	}
	
	printf("\n SUMA DE COLUMNAS: \n");
	for(fila=0;fila<10;fila++){
		for(col=0;col<10;col++){
			MC=MC+matriz[fila][col];
		}
		printf("%d  ",MC);
		MC=0;	
	}
	return 0;
}


