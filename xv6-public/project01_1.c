#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]){
    int mypid, myppid;
    mypid = getpid();
    myppid = getppid();
    printf(1, "My pid is %d\n", mypid);
    printf(1, "My ppid is %d\n", myppid);
    exit();
}
