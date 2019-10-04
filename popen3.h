/*
 * popen3.h -- execute a command and connect stdin, stdout and stderr
 *
 * Copyright (c) 2019, NLnet Labs. All rights reserved.
 *
 * See LICENSE for the license.
 *
 */
#ifndef _POPEN3_H_
#define _POPEN3_H_

#include <stdio.h>
#include <sys/types.h>

/*
 * Execute a command and connect stdin, stdout and stderr of the process to
 * respectively finptr, foutptr and ferrptr if non-NULL. The process
 * identifier of the new process is returned on success and the pointers to
 * the FILE handles will have been set. On failure, -1 is returned and none
 * of the pointers will have been set.
 */
pid_t popen3(char *const *command,
             FILE **finptr,
             FILE **foutptr,
             FILE **ferrptr);

#endif /* _POPEN3_H_ */
