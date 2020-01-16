#include <stdio.h>

int main () {
	
	int pdv;
	pdv = 150;
	printf ("Niveau de vie: %d\n",pdv);
	
	while (pdv>0){
	
	printf("Vous avez ete touche ! -10p\n");
	pdv = pdv-10;
	printf("Niveau de vie: %d\n",pdv);
	
	}
	
	return 0;
	
}
