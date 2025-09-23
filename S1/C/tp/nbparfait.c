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