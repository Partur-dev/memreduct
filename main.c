#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define sleep(ms) Sleep(ms);
#else
#include <unistd.h>
#define sleep(ms) usleep(ms*1000);
#endif

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]) * 1024 * 1024;
    int time = atoi(argv[2]);

    char *mem = malloc(size*sizeof(char));
    memset(mem, '\0', size*sizeof(char));

    sleep(time*1000);
    free(mem);

    return 0;
}
