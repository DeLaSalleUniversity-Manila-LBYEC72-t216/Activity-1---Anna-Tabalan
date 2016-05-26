#include <stdio.h>
#include <stdlib.h>

int main () {
	int base, height,area;
	printf ("Input Triangle Base : ");
	scanf("%d",&base);
	printf ("Input Triangle Height : ");
	scanf("%d",&height);
	area = (base*height)/2;
	printf("Area of the triangle : %d\n",area);
	system("PAUSE");
}
