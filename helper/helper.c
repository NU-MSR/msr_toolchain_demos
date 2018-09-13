#include <math.h>
#include "helper.h"  // if the file is in the same directory, enclose in "quotes"

double cuber(double x) {   // this function is not available externally
  return(pow(x,3.0));
}

double radius2Volume(double rad) {
  return((4.0/3.0)*PI*cuber(rad));
}

double radius2Surface(double rad) {
  return(4.0*PI*rad*rad);
}
