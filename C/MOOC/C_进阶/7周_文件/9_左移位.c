#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned char c = 0xA5;
    printf(" c=%hhx\n", c);
    printf("c<<2=%hhx\n", c<<2);
    
    return 0;
}