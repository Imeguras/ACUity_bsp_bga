#include "new_thread0.h"
#include "../../ra/board/ra8m1_acuity_bsp/board.h"
/* New Thread entry function */
void new_thread0_entry(void)
{
    /* TODO: add your own code here */
    while (1)
    {
        rainbow();
        tx_thread_sleep (1);

    }
}
