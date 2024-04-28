#include<stdio.h>

void __attribute((weak)) foo() { printf("Hello, World from address %s\n", __FILE__); }