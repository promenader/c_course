#include "triplet.h"
#define TNIT_TRIPLET_TEST

int main(int argc, const char *argv[])
{
#ifdef INIT_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    PrintTriplet(t);
#endif
#ifdef DESTROY_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    DestroyTriplet(&t);
#endif
    return 0;
}
