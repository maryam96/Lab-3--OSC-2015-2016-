#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// self written library to be used
#include "shm.h"

int main()
{
    FILE * fp;
    int shmFd;
    SHMstruct * shmData;
        //this opens a file that the client will write too
    fp = fopen("/tmp/client.log", "a");
    if(fp == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    shmFd = loadSHM(SHNAME);
    shmData = accessSHM(shmFd);

    // Remember the condition value!!!
    while()
    {
        // Fill in here
    }

    clearSHM(shmData);
    closeSHM(shmFd);
    fclose(fp);

    return EXIT_SUCCESS;
}
