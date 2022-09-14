#include <stdio.h>
int fun();

int var = 10;   //Scope of Global Variable Starts

int main() {    //Scope of Local Variable Starts
     int var = 3;
     printf("%d\n", var);
     fun();
     return 0;

} //Scope of Local Variable Ends

int fun()
{

  printf("%d", var);

  }          //Scope of Global Variable Ends



