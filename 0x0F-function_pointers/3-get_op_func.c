#include "3-calc.h"

/**
 * get_op_func - selects the correct
 *  function to perform the operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function
 * that corresponds to the operator given as a parameter,
 * or NULL if s does not match any
 *  of the 5 expected operators (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
/* Array of structs with operator and function pointer */
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
/* Index variable */
int i = 0;

/* Loop through the array until NULL is reached or s matches an operator */
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

/* Return the function pointer or NULL */
return (ops[i].f);
}
