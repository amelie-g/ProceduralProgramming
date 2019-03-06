/*
Author: Amelie Cameron
Assignment 2
Prof. Souza 
CSC 600 
Due 10/06/17
*/
#include <stdio.h>
#include "strOPS.h"
#include <stdlib.h>
#include <string.h>

int str_len(const char *str) {
  int count = 0;
  for(int i = 0; str[i] != '\0'; i++){
    count++;
  }
  return count;
}

int str_begins_with(const char *str, char c) {
  if(c != NULL && str_len(str) > 0){
    if(str[0] == c)
      return 1;
    else 
      return -1;
  }
}

int str_ends_with(const char *str, char c) {
  int x = str_len(str);
  if(str[x-1] == c){
    return 1;
  }else{ 
    return -1;
  }
}

char* str_to_lower(char *str) {
  char * ret;
  int l = str_len(str);
  ret = malloc(l);
  for(int i = 0; i < l; i++){
    if(str[i] <= 'Z' && str[i] >= 'A'){
      ret[i] = str[i] + 32;
    } else {
      ret[i] = str[i];
    }
  }
  return ret;
}

char* str_to_upper(char *str) {
  char * ret;
  int l = str_len(str);
  ret = malloc(l);
  for(int i = 0; i < l; i++){
    if(str[i] <= 'z' && str[i] >= 'a'){
      ret[i] = str[i] - 32;
    } else {
      ret[i] = str[i];
    }
  }
  return ret;
}

char *str_concat(const char *str1, const char *str2) {
  char* ret;
  int str1_len = str_len(str1);
  int str2_len = str_len(str2);
  ret = (char*)malloc(str1_len + str2_len);
  int r = 0;
  for(int i = 0; i < str1_len; ++i, ++r) {
    ret[r] = str1[i];
  }
  for(int i = 0; i < str2_len; ++i, ++r) {
    ret[r] = str2[i];
  }
  return ret;
}

int str_comp(const char *str1, const char *str2) {
  int l1 = str_len(str1);
  int l2 = str_len(str2);
  int l = 0;
  if (l1 < l2)
    l = l1;
  else
    l = l2;

  for(int i = 0; i < l; i++){
    if (str1[i] < str2[i])
      return -1;
    else if(str1[i] > str2[i])
      return 1;
  }
  return 0;
  
}

char *str_copy(char *to, const char *from) {
  for(int i = 0; i < str_len(from); i++){
    to[i] = from[i];
  }
  return to;
}

int str_last_index_of(const char *str, char c) {
  int x = -1;
  if(c != NULL){
    for(int i = 0; i < str_len(str); i++){
      if(str[i] == c)
	x = i;
    }
    return x;
  }
}

int str_first_index_of(const char *str, char c) {
  int x = -1; 
  if(c != NULL){
    for(int i = 0; str_len(str); i++){
      if(str[i] == c){
	x = i;
	break;
      }
    }
    return x;
  }
}

int is_palindrome(const char *str) {
  int x = str_len(str)-1;
  for(int i = 0; i < str_len(str) / 2; i++, x--){
    if(str[i] != str[x])
      return -1;
  }
  return 1;
}

int is_anagram(const char *str1, const char *str2) {
  int x = str_len(str1);
  int y = str_len(str2);
  int a[128] = {0};
  int b[128] = {0};

  if(x != y)
    return -1;
  for(int i = 0; i < x; i++){
    a[str1[i]]++;
  }
  for(int j = 0; j < y; j++){
    b[str2[j]]++;
  }  
  for(int i = 0; i < 128; i++) {
    if (a[i] != b[i])
      return -1;
  }
  return 1;
}

char *str_compress(char *str) {
  int count = 0;
  char last = ' ';
  char *ret;
  ret = malloc(str_len(str));
  for(int i = 0; i <  str_len(str); i++){
    if(str[i] != ' ' || str[i] == ' ' && last != ' '){
      ret[count++] = str[i];
      last = str[i];
    }
  }
  ret[count] = '\0';
  return ret;
}

char *str_trim(char *str) {
  int l;
  int found = 0;
  char *ret = {0};
  
  l = str_len(str);
  ret = malloc(l + 2);
  for(int i = l-1; i >= 0; --i){
    if (str[i] != ' ')
      found = 1;
    if (found) { 
      ret[i] = str[i];
    }
  }
  return ret;
}

char *int_to_str(int num) {
  char buffer[20];
  char itoa(num, buffer, 10);
  return buffer;
}


