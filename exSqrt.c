#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv[]) {

  double a = 2;
  double epsilon = 0.00000001;
  double current = 1, previous = 0;

  while(fabs(current-previous) >= epsilon) {
    previous = current;
    current = .5 * (previous +a / previous);
  }
  printf("sqrt(%f)        = %.15f\n", a, current );
  printf("math's sqrt(%f) = %.15f\n", a, sqrt(a));

  return 0;
}
