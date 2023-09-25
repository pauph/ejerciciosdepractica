#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5]={{0,0,7,1,0},{1,2,4,5,1},{2,4,2,3,2},{3,6,0,4,3},{4,8,2,5,4}};
	int i, j,suma;
	
	for ( i=0;i<5;i++){
		for (j=0;j<1;j++){
			printf("%d",a[i][j]);
			printf("   %d",a[i][j+1]);
			printf("   %d",a[i][j+2]);
			printf("   %d",a[i][j+3]);
			printf("   %d\n",a[i][j+4]);
		}
	}
	
	printf("\n\n%d\n",a[0][0]);
	printf("    %d\n",a[1][1]);
	printf("        %d\n",a[2][2]);
	printf("            %d\n",a[3][3]);
	printf("                %d\n\n",a[4][4]);
	
	suma=a[0][0]+a[1][1]+a[2][2]+a[3][3]+a[4][4];
	
	printf("La suma de la diagonal de la matriz es: %d", suma);
	
	return 0;
}
