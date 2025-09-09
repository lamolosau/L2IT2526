#include <stdio.h>

int main(void) {
    printf("Voici mon premier programme C.\n");
    printf("Il est réalisé pendant les séances de TP.\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    printf("**********************************************************\n");
    printf("** Bienvenu au jeu de Mastermind                        **\n");
    printf("** Les caractères autorisés sont :                      **\n");
    printf("** b : blanc, j : jaune, r : rouge,                     **\n");
    printf("** v : vert, n : noir et g : gris.                      **\n");
    printf("** Chaque combinaison doit avoir 4 caractères           **\n");
    printf("** Exemple : rbjg                                       **\n");
    printf("** Vous avez droit à 10 essais.                         **\n");
    printf("** Bon courage                                          **\n");
    printf("**********************************************************\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    int a, b;
    a = 16;
    b = 016; 
    printf("Pourquoi la variable a (=%d) a une valeur differente de la variable b (=%d) ?\n", a, b);
    return 0;
}

/* a = 16 est en décimal (vaut 16). b = 016 est interprété en octal (base 8) à cause du zéro initial, donc 016₈ = 1×8 + 6 = 14 en décimal. D’où les valeurs différentes. */

#include <stdio.h>

int main(void) {
    unsigned short int code;
    printf("Entrez un code ASCII en decimal (0..255) : ");
    if (scanf("%hu", &code) != 1) return 1;
    printf("Le caractere associe est : '%c'\n", (unsigned char)code);
    return 0;
}

#include <stdio.h>

int main(void) {
    char c;
    printf("Entrez un caractere : ");
    if (scanf(" %c", &c) != 1) return 1;

    unsigned char uc = (unsigned char)c;
    printf("Le code ASCII associe au caractere %c est : %u (en decimal), %o (en octal), %x (en hexadecimal minuscule) et %X (en hexadecimal majuscule).\n",
           c, (unsigned)uc, (unsigned)uc, (unsigned)uc, (unsigned)uc);
    return 0;
}

#include <stdio.h>

int main(void) {
    char c;
    printf("Entrez une lettre minuscule : ");
    if (scanf(" %c", &c) != 1) return 1;

    if (c >= 'a' && c <= 'z') {
        char maj = (char)(c - 'a' + 'A');
        printf("Majuscule : %c\n", maj);
    } else {
        printf("Ce n'est pas une minuscule.\n");
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    unsigned char i = 'A';
    int j = 1;
    printf("\n\t i = %d\t \" j = %d \"\n", i, j);
    printf("\n\t i = %c\t \"\n", i);
    return 0;
}

#include <stdio.h>

int main(void) {
    unsigned char i = 'A';
    int j = 1;
    printf("%c%c i = %d%c %c j = %d %c%c",
           10, 9,
           i, 9,
           34, j, 34,  
           10);

    printf("%c%c i = %c%c %c%c",
           10, 9,
           i, 9,
           34, 10);
    return 0;
}

#include <stdio.h>

int main(void) {
    double phi = 1.61803398875;

    printf("Ecriture no. 1 : %f\n",       phi);
    printf("Ecriture no. 2 : %.6f\n",     phi);
    printf("Ecriture no. 3 : %09.6f\n",   phi);
    printf("Ecriture no. 4 : %0.6f\n",    phi);
    printf("Ecriture no. 5 : %010.6f\n",  phi);
    printf("Ecriture no. 6 : %6.6f\n",    phi);
    printf("Ecriture no. 7 : %011.6f\n",  phi);
    printf("Ecriture no. 8 : %.3f\n",     phi);
    printf("Ecriture no. 9 : %012.3f\n",  phi);
    return 0;
}

#include <stdio.h>

int main(void) {
    printf("Impression 1 : %c.\n", 7);
    printf("Impression 2 : %c.\n", '7');
    printf("Impression 3 : %d.\n", 7);
    printf("Impression 4 : %d.\n", '7');
    return 0;
}

/*
Impression 1 : le caractère dont le code ASCII vaut 7 (c’est le bip \a — parfois inaudible selon l’environnement), puis un point.

Impression 2 : le caractère '7' (le chiffre 7), puis un point.

Impression 3 : l’entier 7, puis un point.

Impression 4 : le code ASCII du caractère '7', qui vaut 55, puis un point.
*/
