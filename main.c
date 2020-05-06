#include <stdio.h>
#include "361.h"
 
int main(void)
{
    
    puts("This is a shared library test...");
    //foo();
    int x = 6;
    int y = 7;
    int z = secretoperation(x,y);
    printf("z is %d\n",z);
    /ireturn 0;
}
