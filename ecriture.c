#include <stdio.h>

int est_chiffre(char c) {
	if (c >= '0' && c <= '9'){
		printf("Le caractere est un chiffre.\n");
		return 1;
	} else {
		if (c >= 'A' && c <= 'Z') {
                printf("Le caractere est une lettre majuscule.\n");
                return 1;
        } else {
                printf("Le caractere est une lettre minuscule.\n");
                return 0;
	}
}
}

int main() {
	char c;

	printf("Entrez un caractere: ");
	c = getchar();

	printf("Voici le caractere entre: %c. Son code: %d.\n", c, c);
	est_chiffre(c);
}
