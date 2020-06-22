#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  **argv[]) {
//print a list of even integers
  int n = 20;
  int i;
  for ( i = 0; i <= n; i+=2) {
    printf("%d\n", i );
  }
//same list but delimited by commas
  for ( i = 0; i <= n-2; i+=2) {
    printf("%d, ", i);
  }
  printf("%d\n", i);

int total = 0;
for ( i =12 ; i <=99; i+=3){
  total += i;
  printf("%d\n", i);
}
printf("total = %d\n", total);

int power = 1;
for ( i = 0; i <=30; i++) {
  printf("2^%d = %d\n", i, power );
  power = power*2;
}

for ( i = 2; i <= 200; i+=2) {
  printf("%d ", i);
  if (i % 20 == 0) {
    printf("\n", );
  }
}

for ( i = 1; i <= 10; i++) {
  for ( j = 1; j <= 10; j++) {
    printf("%d, ", (i + 10 * j));
  }
  printf("\n", );
}

  return 0;
}
