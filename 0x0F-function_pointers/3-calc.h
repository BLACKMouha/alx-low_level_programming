#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef CALC_H
#define  CALC_H

/** Prototypes for possible functions Operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/** Prototype for the function selecting the type of operation */
int (*get_op_func(char *s))(int, int);



/**
 * struct op - Struct op
 *
 * @op: the operator
 * @f: function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int);
} op_t;

#endif /** CALC_H */
