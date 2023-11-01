#include <stdio.h>
#include <stdlib.h>

int main() {
	int venta[4][7],fila=0,col=0,TVS=0,PROM=0,o=0;
	
	for(fila=0;fila<4;fila++){
		for(col=0;col<7;col++){
			printf("\n De la semana #%d, ingrese venta del #%d dia: ",fila+1,col+1);	
			scanf("%d",&venta[fila][col]);
		}
	}
	
	
	for(fila=0;fila<4;fila++){
		printf("\n SEMANA #%d:",fila+1);
		printf("\n");
		for(col=0;col<7;col++){
			printf("\n Dia %d: %d",col+1,venta[fila][col]);
			TVS=TVS+venta[fila][col];
			if (venta[fila][col]>o){			
				o=venta[fila][col];
			}
		}
		printf("\n");
		PROM=TVS/7;
		printf("\n TOTAL DE VENTAS DE LA SEMANA #%d: %d",fila,TVS);
		printf("\n PROMEDIO DE VENTAS DE LA SEMANA #%d: %d",fila,PROM);
		PROM=0;
		TVS=0;
		printf("\n");
	}	
	printf("\n MAYOR VENTA: %d",o);
	return 0;
}


