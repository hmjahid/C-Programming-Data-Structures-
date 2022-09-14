#include <stdio.h>
#define greater(x, y) if(x > y) \
                                printf("%d is greater than %d", x ,y); \
                                else\
                                printf("%d is lesser than %d", x,y);
                                                                //Multiple lines can be written using slash
int main() {
       greater (5,6);
        return 0;
        }
