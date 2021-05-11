//
// Created by Henry on 4/25/2021.
//

#include "user.h"
#include "types.h"
#include "defs.h"
#include "proc.c"


int testPID(void) {
    int pid, status;
    int pidtest[2] = {0,0};
    for (int i = 0; i < sizeof(pidtest); ++i) {
        pidtest[i] = fork();
        if (pidtest[1]==0) {
            printf(1, "pid: ", getpid());
        }
    }
    printf(1, "child pid%d \n",pidtest[1]);
    pid = waitpid(pidtest[1],&status);
    printf(1, "child pid%d \n",pidtest[0]);
    pid = waitpid(pidtest[1],&status);
    return 0
}
int main(int argc, char *argv[]) {

        printf(1,"test ");\
        testPID();
        exit();
        return 0;
};

