#include <stdio.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array containg the argumnet\
s
 *Return: always 0(sucess)
 */
int main(int argc, const char *argv[])
{
        (void)argv;
        printf("%d\nn", argc - 1);
        return (0);
}
