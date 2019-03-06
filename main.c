/*
Author: Amelie Cameron
Assignment 2
Prof. Souza
CSC 600
Due 10/06/17
*/
#include "stdio.h"
#include "stdlib.h"
#include "strOPS.c"

int main(){
  char *hello = "Hello World";
  char *goodbye = "Goodbye";
  char *palindrome = "hannah";
  char *empty = malloc(50);

  printf("str_len: %d\n", str_len(hello) == 11);
  
  printf("str_begins_with: %d\n", str_begins_with(hello, 'H') == 1);

  printf("str_ends_with: %d\n", str_ends_with(hello, 'd') == 1);

  printf("str_to_lower: %s\n", str_to_lower(hello));

  printf("str_to_upper: %s\n", str_to_upper(hello));

  printf("str_concat: %s\n", str_concat(hello, goodbye));

  printf("str_comp: %d\n", str_comp(hello, goodbye));

  printf("str_copy: %s\n", str_copy(empty, goodbye)); 

  printf("str_last_index_of: %d\n", str_last_index_of(hello, 'o'));

  printf("str_first_index_of: %d\n", str_first_index_of(hello, 'o'));

  printf("is_palindrome: %d\n", is_palindrome(palindrome));

  printf("is_anagram: %d\n", is_anagram("abcs", "bcas"));

  printf("str_compress: %s\n", str_compress("    ls        -   la  "));

  printf("str_trim: %s\n", str_trim("ls -la     "));

  printf("int_to_str: %s\n", int_to_str(1));
}
