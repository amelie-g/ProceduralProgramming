#ifndef STROPS
#define STROPS

/**
 * Counts the number of chars in a string.
 * "" should return 0
 * "3213" should return 4
 * @param str sequence of chars to count.
 * @return number of chars in a string
 */
int str_len(const char* str);

/**
 * Determine if the char c is at the beginning
 * of the string str.
 * @param str string to look at
 * @param c char to look for
 * @return > 0 for present, < 0 for not present
 */
int str_begins_with(const char* str, char c);

/**
 * Determine if the char c is at the end
 * of the string str.
 * @param str string to look at
 * @param c char to look for
 * @return > 0 for present, < 0 for not present
 */
int str_ends_with(const char* str, char c);

/**
 * Converts the string to all lower case letters.
 * IF numbers are encountered, they should be skipped.
 * @param str
 * @return str in lower case form
 */
char* str_to_lower(char* str);

/**
 * Converts the string to all upper case letters.
 * IF numbers are encountered, they should be skipped.
 * @param str
 * @return str in upper case form
 */
char* str_to_upper(char* str);

/**
 * Concatenate two strings together, str1 + str2 -> str3
 * str1 should com first.
 * @param str1 source string 1
 * @param str2 source string2
 * @return a string containing str1 then str2
 */
char* str_concat(const char* str1, const char* str2);

/**
 * Compares two strings. Comparisons is done
 * lexicographically.
 * @param str1 string to compare
 * @param str2 string to compare
 * @return  -1 str1 is before str2
 *           0 str1 is equal to str2
 *           1 str1 is after str2
 */
int str_comp(const char* str1, const char* str2);

/**
 * copies the contents of string from to the string to.
 * @param to destination string
 * @param from source string
 * @return pointer to destination string
 */
char* str_copy(char* to, const char* from);

/**
 * Gets the last index of char c from the front
 * @param str string to search
 * @param c char to find
 * @return index of c if found, return -1 if not found.
 */
int str_last_index_of(const char* str, char c);

/**
 * Gets the first index of char c from the front
 * @param str string to search
 * @param c char to find
 * @return index of c if found, return -1 if not found.
 */
int str_first_index_of(const char* str, char c);

/**
 * determines if a string is a palindrome. A palindrome is
 * defined a string reads the same forwards and backwards.
 * @param str string to search through
 * @return > 0 if true
 *         < 0 if false
 */
int is_palindrome(const char* str);

/**
 * Determines whether or not a string is an anagram.
 * An anagram is two strings that contain the same
 * characters but form different words.
 * @param str1 sequences of chars of str1
 * @param str2 sequences of chars of str2
 * @return > 0 true
 *         < 0 false
 */
int is_anagram(const char* str1, const char* str2);

/**
 * Compresses the given string removing all duplicated
 * spaces. Note that this function should remove ALL leading
 * and trailing spaces of the string.
 * For example
 * "    ls        -   l  a  " -> "ls -la"
 * @param str string to compress
 * @return  pointer to compressed string
 */
char* str_compress(char* str);

/**
 * Remove trailing whitespaces from the string.
 * @param str string to trim
 * @return pointer to trimmed string
 */
char* str_trim(char* str);

/**
 * converts the given number into a string.
 * @param num number to convert
 * @return pointer to converted number.
 */
char* int_to_str(int num);

#endif
