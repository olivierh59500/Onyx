#ifndef _MAIN_HH_
#define _MAIN_HH_

#include "global.hh"
#include "keylog.hh"
#include <iostream>
#include <signal.h>
#include <stdlib.h>

using namespace std;

extern s_gl_env gl_env;

void usage();
void shutdown(int sig);

#endif
