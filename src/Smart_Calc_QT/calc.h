#ifndef SRC_SOURCE_CALC_H_
#define SRC_SOURCE_CALC_H_

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY -102
#define INVALID_VALUE 0  // ???

typedef struct OP_Struct {
  double num;
  struct OP_Struct *next;
} num_stack;

typedef struct Num_Struct {
  char function;
  struct Num_Struct *next;
} func_stack;

typedef struct operations {
  char *open_bracket;     // nothing
  char *closing_bracket;  // nothing
  char *addition;         // 2
  char *subtraction;      // 2
  char *multiplication;   // 2
  char *division;         // 2
  char *power;            // 1
  char *modulus;          // 2
  char *unary_plus;       // 1
  char *unary_minus;      // 1
  char *cosine;           // 1
  char *sinus;            // 1
  char *tangent;          // 1
  char *arccosine;
  char *arcsine;
  char *arc_tangent;        // 1
  char *square_root;        // 1
  char *natural_logarithm;  // 1
  char *decimal_logarithm;
} OPS;

double read_string(char *start_string, int *break_status);
void calc_current_values(num_stack **num_head, func_stack **function_head,
                           int end_string, int *priority_status);

void push_num(num_stack **head, double value);
int push_function(func_stack **head, char current_function);

double pop_num(num_stack **head);
char pop_function(func_stack **head);

double peek_num(const num_stack *head);
char peek_function(const func_stack *head);

int get_num(char *part_string, int *string_position, double *value);
int get_function(char *part_string, int *string_position, char *function);

char s21_strchr(char string, char symbol);
char s21_strchr_2(char *string, char symbol);
int s21_strcmp(char current_function, char *struct_function);

void printNumStack(num_stack *head);
void printFuncStack(func_stack *head);

double exec_expression_with_minus(char *curent_string, int *string_position);
double exec_expression_with_division(char *curent_string, int *string_position);


int is_unary_minus(char *curent_string, int string_position);

int check_power_next_function(char *part_string, int string_position);
double exec_expression_with_power(char *curent_string, int *string_position, double current_num);

int valid_string(char *input_string);
void adapt_string(char *string);


#endif  // SRC_SOURCE_CALC_H_