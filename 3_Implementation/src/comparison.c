#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparison(char s1, char s2)
{
    if (s1 == s2)
    {
        return -1;
    }
    else if (s1 == 'r' && s2 == 's')
    {
        return 1;
    }
    else if (s2 == 'r' && s1 == 's')
    {
        return 0;
    }
    else if (s1 == 'p' && s2 == 'r')
    {
        return 1;
    }
    else if (s2 == 'p' && s1 == 'r')
    {
        return 0;
    }

    else if (s1 == 's' && s2 == 'p')
    {
        return 1;
    }
    else if (s2 == 's' && s1 == 'p')
    {
        return 0;
    }
}
