#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[5][6],fila=0,col=0,cont0=0,contN=0;
	
	for(fila=0;fila<5;fila++){
		for(col=0;col<6;col++){
			printf("\n De la fila #%d, ingrese valor de col. #%d: ",fila+1,col+1);	
			scanf("%d",&matriz[fila][col]);
		}
	}
	for(fila=0;fila<5;fila++){
		for(col=0;col<6;col++){
			if (matriz[fila][col]<0){
				contN++;
			}
			if (matriz[0][0]==0 || matriz[1][1]==0 || matriz[2][2]==0 || matriz[3][3]==0 || matriz[4][4]==0 || matriz[5][5]==0){
				cont0++;	
			}
		}
	}
	for(fila=0;fila<5;fila++){
		for(col=0;col<6;col++){
			printf(" %d   ",matriz[fila][col]);
		}
		printf("\n");
	}
	printf("\n CANTIDAD DE CEROS EN LA MATRIZ: %d",cont0);
	printf("\n CANTIDAD DE NUMEROS NEGATIVOS EN LA MATRIZ: %d",contN);
	return 0;
}

