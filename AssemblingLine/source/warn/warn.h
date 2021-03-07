#ifndef WARN_H
#define WARN_H

/* common lib decl start */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* common lib decl end */

/* private struct decl start */

/* private struct decl end */


/* private definitons start */

#define here __LINE__
#define self (__func__)
/* private definitons end */


/* private func decl start */
void warn(bool ,int , const char *);
void fatal(bool ,int , const char *);

/* private func decl end */

#endif
