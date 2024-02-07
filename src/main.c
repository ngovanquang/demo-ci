#include "greeting.h"

int main(int argc, char *argv[])
{
    printf("Enter your name: ");
    char name[100];
    scanf("%s\n", &name);
    greeting("Quang");

    return 0;
}