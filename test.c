//
// Created by Henry on 4/23/2021.
//
#include "types.h"
#include "stat.h"
#include "user.h"

int waitP(void) {


    int  exitstatus;
    int pid_test[2] = {0,0};
    int i = 0;
    for(i = 0; i < 2; i++){
        pid_test[i] = fork();

        if(pid_test[1] == 0){
            printf(1,"pid# %d", getpid());}
    }
    sleep(5);
    printf(1, "child with pid%d\n",pid_test[1]);
    waitpid(pid_test[1],&exitstatus);
    sleep(5);
    printf(1, "child with pid%d\n",pid_test[0]);
    waitpid(pid_test[0],&exitstatus);
    return 0;
}
int main(){
    printf(1,"Testing exit, should end after this text\n");
    int waitP(void);
    exit1(1);
    printf(1,"Opened");//not reached
    exit1(0);//not reached

    return 0;//not reached
}