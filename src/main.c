#include "greeting.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage ./greeting <name>\n");
        return -1;
    }

    greeting(argv[1]);

    return 0;
}