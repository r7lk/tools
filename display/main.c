 /*--------------------------------------------------------------------
 * main.c
 *
 * ËµÃ÷£º
 * 		test
 *
 * Î»ÖÃ£º
 * 		src/main.c
 *--------------------------------------------------------------------
 */

#include <stdio.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include "ps_status.h"

int main(int args, char* argv[])
{
    argv = save_ps_display_args(args, argv);

    init_ps_display("display-init...");
    sleep(2);
  
    init_ps_display("display-set...");
    sleep(2);

    set_ps_display("set-add");
    sleep(2);

    init_ps_display("display-fini...");
    sleep(2);
    
    int displeylen = 0;
    const char* display = get_ps_display(&displeylen);
    fprintf(stdout, "current dispaly: %s length: %d \n", display, displeylen);

	return 0;
}
