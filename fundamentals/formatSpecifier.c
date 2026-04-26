#include <stdio.h>

int main() {

// %d  - int
int playerAllowed = 11;
printf("In cricket only %d player is allowed \n", playerAllowed);

// %u  - unsigned int
unsigned int over = 6;
printf("Over is %u balls\n", over);

// %ld - long
long salary = 2500000;
printf("Salary is %ld \n", salary);

// %lu - unsigned long
// %lld - long long
// %llu - unsigned long long
// %f  - float
// %lf - double
// %c  - char
// %s  - string (char*)
// %x  - hex lowercase
// %X  - hex uppercase
// %o  - octal
// %p  - pointer address (prints the memory address of a variable)
// %zu - size_t (prints the size of a type in bytes)
// %i  - int
// %%  - literal % sign (prints an actual % character instead of being treated as a format specifier)
return 0;
}