// exo 1

/*
La valeur de i est -3.
La valeur de i est -2.
La valeur de i est -1.
*/

// exo 2

#include <stdio.h>

int main(void){
    char h;
    int val;
    if (scanf(" %c", &h) != 1) return 0;

    switch (h) {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            val = h - '0';
            break;

        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            val = h - 'A' + 10;
            break;

        default:
            val = -1;
    }

    printf("%d\n", val);
    return 0;
}

// exo 3

#include <stdio.h>

int main(void) {
      int compteur;
      while (getchar()!='\n') {
            compteur++;
      }
      printf("%d\n", compteur);
}

// exo 4

#include <stdio.h>

int main(void) {
      int res = 0;
      int n;
      int i;
      scanf("%d", &n);
      for (i = 1; i < n; i++) {
            if (n%i==0) {
                  res += i;
            }
      }
      if (res==n){ 
            printf("%d est parfait !",n);
      } else {
            printf("%d n'est pas parfait !",n);
      }
      return 0;
}

// exo 5

#include <stdio.h>
int main(void) {
 
      int nombre , somme , i ;
      int somme =0;
      printf("Merci d'introduire un nombre entier positif : ");
      scanf("%d", &nombre);
      for (i =0; nombre !=0; i ++) {
            somme += ( nombre % 10);
            nombre /= 10;
      }
      printf("La somme des chiffres de ce nombre est : %d\n", somme);
      return 0;
}

// exo 6

#include <stdio.h>

int main(void) {
      int res = 0;
      int un = 1;
      while (char c = getchar()!='$') {
            c = 'a' - c;
            res = un << c | res;
      }
      printf("%d\n", res);
      return 0;
}