
/*******************************************************************************
 *
 * File ranlux.h
 *
 * Copyright (C) 2019 Martin Luescher
 *
 * This software is distributed under the terms of the GNU General Public
 * License (GPL)
 *
 *******************************************************************************/

#ifndef RANLUX_H
#define RANLUX_H

#include <stdint.h>

/* RANLXS */
extern void ranlxs(float *r, int n);
extern void rlxs_init(int level, int seed);
extern int rlxs_size(void);
extern void rlxs_get(int *state);
extern void rlxs_reset(int *state);

/* RANLXD */
extern void ranlxd(double *r, int n);
extern void rlxd_init(int level, int seed);
extern int rlxd_size(void);
extern void rlxd_get(int *state);
extern void rlxd_reset(int *state);

#if ((defined RANLXS_C) || (defined RANLXD_C) || (defined RANLUX_COMMON_C))

typedef struct {
   int pr, ir;
   int64_t (*state)[4];
} rlx_state_t;

/* RANLUX_COMMON_C */
extern int rlx_check_machine(void);
extern void rlx_error(int test, int no, const char *name, const char *format);
extern void rlx_alloc_state(rlx_state_t *s);
extern void rlx_init(rlx_state_t *s, int seed, int flag);
extern void rlx_update(rlx_state_t *s);
extern void rlx_converts(rlx_state_t *s, float *rs);
extern void rlx_convertd(rlx_state_t *s, double *rd);
extern void rlx_get_state(rlx_state_t *s, int *is);
extern void rlx_set_state(int *is, rlx_state_t *s);

#endif
#endif
