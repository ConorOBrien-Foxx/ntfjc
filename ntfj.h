#include <stdlib.h>
#include <stdio.h>
#define B *sizeof(int)
#define v void
#define i int
#define M malloc
#define R realloc
#define P printf
#define E(x,...) fprintf(stderr,x,__VA_ARGS__);
#define Z(x) E("%s",x)
#define X(x) E("Error: %s",x)
#define A char*
#define U(x) case x;break;
#define J return
#define W while