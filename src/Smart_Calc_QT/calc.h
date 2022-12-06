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
void calc_current_values(num_stack **num_head, func_stack **function_head);

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
double exec_expression_with_open_bracket(char *curent_string, int *string_position);
int is_lower_priority(char previous_function, char current_function, char *string);


int valid_string(char *input_string, char *input_x_string);
int adapt_string(char *string);

int is_math_operator(char symbol);
double get_minus(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);
double get_div(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);


// valid_string
int check_valid_brackets(char *string);
int valid_binary_op_position(char *string);
int is_binary_op(char string);
int triple_binary_op(char *string);
int is_invalid_double_op(char *string);
int is_open_op(char string);
int is_num(char symbol);
int binary_op_after_math_op(char *string);
int valid_node_position(char *string);
int check_math_neighbor(char *math);
int check_non_empty_brackets(char *string);
int enough_arguements(char *string);
void upgrade_string(char *input_string);
int is_stuck_symbol(char symbol);
int x_in_input_x_string(char *string);
int ez_skip(char symbol);


double calc_string(char *start_string, char *x_string);
void add_x_value_in_string(char *start_string, double x_value);

void credit_annuity_calc(double balance_owed, int term, double percent, double *my_return);
void credit_diff_calc(double balance_owed, int term, double percent, double *my_return);

#endif  // SRC_SOURCE_CALC_H_
