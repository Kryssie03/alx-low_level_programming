# 1 "../0x02-functions_nested_loops/4-isalpha.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "../0x02-functions_nested_loops/4-isalpha.c"
# 1 "../0x02-functions_nested_loops/main.h" 1



int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
# 2 "../0x02-functions_nested_loops/4-isalpha.c" 2






int _isalpha(int c)
{
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  return (1);
 else
  return (0);
}
