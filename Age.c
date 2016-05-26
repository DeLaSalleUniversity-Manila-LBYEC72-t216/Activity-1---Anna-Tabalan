#include <stdio.h>
#include <stdlib.h>

int main () {
	int yr1,yr2,age;
	printf("Input Year of Birth : ");
	scanf("%d",&yr1);
	printf("Input Current Year : ");
	scanf("%d",&yr2);
	age = yr2-yr1;
	printf("Approximate Age : %d\n",age);
}
