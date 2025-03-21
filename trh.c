#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rapidhash.h"

int main()
{
        char s[] = "testing rapidhash";
        uint64_t h = rapidhash(s, 17);
        printf("%s\t hash: %lu\n", s, h);
        s[16] = 'A';
        uint64_t hh = rapidhash(s, 17);
        printf("%s\t hash: %lu\n", s, hh);
        
}
