#include <stdio.h>

int main () {
	
	int pdv;
	pdv = 150;
	printf ("Niveau de vie de l'ennemi: %d\n",pdv);
	
	while (pdv>0){
	
	printf("Vous avez touche le monstre! -10p\n");
	pdv = pdv-10;
	printf("Niveau de vie l'ennemi: %d\n",pdv);
	
	}
	
	return 0;
	
}
