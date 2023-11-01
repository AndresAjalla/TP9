#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[6][6],fila=0,col=0;
	int menor=0,spc=0,en=0;
	for(fila=0;fila<15;fila++){
		for(col=0;col<12;col++){
			printf("\n De la fila %d, ingrese valor de col %d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
	}
	if(fila==0 && col==0){
		menor=matriz[fila][col];
	}
	else if(matriz[fila][col]<menor){
		menor=matriz[fila][col];
	}
	if(fila<5){
		spc+=matriz[fila][col];
	}
	if(col>=4 && col<=8 && matriz[fila][col]<0){
		en++;
	}
	printf("\n\n");
	printf("\n MENOR ELEMENTO: %d ", menor);
	printf("\n SUMA DE LAS PRIMERAS 5 FILAS: %d", spc);
	printf("\n CANTIDAD DE ELEMENTOS NEGATIVOS: %d", en);
	
	system("pause");
	return 0;
}
