#ifndef PROC_DEVNAME_H
#define PROC_DEVNAME_H

#include <features.h>

__BEGIN_DECLS

#define ABBREV_DEV  1     /* remove /dev/         */
#define ABBREV_TTY  2     /* remove tty           */
#define ABBREV_PTS  4     /* remove pts/          */

extern unsigned dev_to_tty(char *__restrict ret, unsigned chop, dev_t dev_t_dev, int pid, unsigned int flags);

__END_DECLS
#endif
