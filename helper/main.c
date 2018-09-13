#include <stdio.h>
#include "helper.h"

int main(void) {
  double radius = 3.0;
  printf("Pi is approximated as %25.23lf.\n",PI);
  printf("The surface area of the sphere is %8.4f.\n",radius2Surface(radius));
  printf("The volume of the sphere is %8.4f.\n",radius2Volume(radius));
  return 0;
}
