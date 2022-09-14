#include <stdio.h>

int main() { //Scope of Global Variable Starts
  int var = 3;

  { //Scope of Local Variable Starts
     int var = 4;
     printf("%d\n", var);

  } //Scope of Local Variable Ends

  printf("%d", var);
  return 0;

} //Scope of Global Variable Ends
