#include <stdio.h>
#include <Windows.h>

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]) * 1024 * 1024;
    int time = atoi(argv[2]);

    char *mem = malloc(size*sizeof(char));
    memset(mem, '\0', size*sizeof(char));

    Sleep(time*1000);
    free(mem);

    return 0;
}
