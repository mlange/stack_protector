#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void overwrite(void) 
{
    char foo[10];

    strcpy(foo, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

    return;
}

int main(int argc, char *argv[])
{
    overwrite();
    exit(0);
}
