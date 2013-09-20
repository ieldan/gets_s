#ifndef __STDC_LIB_EXT1__
#include <stdio.h>
#include <string.h>

#include "gets_s.h"
char *gets_s(char *str, size_t n)
{
    char *ret = fgets(str, n, stdin);
    size_t last_ch;

    if (ret) {
        last_ch = strlen(str) - 1;

        if (str[last_ch] == '\n')
            str[last_ch] = '\0';
    }

    return ret;
}
#endif
