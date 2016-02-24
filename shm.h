#ifndef _shm_h_
#define _shm_h_

#include <stdbool.h>

#define SHNAME "/shmserver" // shared memory
#define MAX_TICKETS 10 // the tickets allocated
#define MAX_SLEEP 1 // seconds

typedef struct SHM {
    int ticket; // maximum to be 10
    bool isTaken;//
    bool soldOut;// generally false till the 11th ticket is sent then it turn to true after all tickets are sent.
} SHMstruct;

extern char * getTimeStamp();

extern int createSHM(char *shname);
extern int loadSHM( char *shname);

extern SHMstruct* initSHM( int fd, SHMstruct *data);
extern SHMstruct * accessSHM(int fd);

extern void clearSHM(SHMstruct * shm);
extern void closeSHM(int fd);
extern void destroySHM(char * shname);

#endif
