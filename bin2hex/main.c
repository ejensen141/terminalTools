#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    long int bval, hexval = 0, i = 1, remainder;

    if(argc>1)
    {
    bval = atoi(argv[1]);
    }
    else
    {
            return 0;
    }

    while (bval != 0)
    {
        remainder = bval % 10;
        hexval = hexval + remainder * i;
        i = i * 2;
        bval = bval / 10;
    }
    printf("Hex value:  %lX \n", hexval);


    return 0;
}
