#ifndef NUKE_H
#define NUKE_H

#include <sys/types.h>

int nuke(const char* drv, int only_zero, int nreps, int ask_confirm);

#endif  
