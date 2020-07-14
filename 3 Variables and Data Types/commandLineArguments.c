#include<stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("\nNumber of Argument: %d", numberOfArguments);
    printf("\nArgument 1 is the program name: %s", argument1);
    printf("\nArgument 2 is the command line argument: %s", argument2);

    return 0;
}
