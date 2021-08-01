#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"

//system call
int getppid(void){
    return myproc()->parent->pid;
}

//wrapper
int sys_getppid(void){
    return getppid();
}
