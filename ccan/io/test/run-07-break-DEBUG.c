#define DEBUG
#define PORT "64007"
#define main real_main
int real_main(void);
#include "run-07-break.c"
#undef main
static bool always_debug(struct io_conn *conn) { return true; }
int main(void) { io_debug = always_debug; return real_main(); }
