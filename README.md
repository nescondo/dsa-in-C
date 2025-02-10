# dsa-in-C
Learning DSA in C

2/9 notes:
- deference operator: * - used to access the value stored at the memory address pointed to by a pointer variable
  ex. int x = 5;
      int *ptr = &x; - ptr holds memory address of x
      printf("%d\n", ptr) - outputs memory address of x
      printf("%d\n", *ptr) - dereferences ptr, directly accessing and outputting the value of x at it's memory address
      *ptr = 50; - modifies the value of the variable stored in the memory address of x
- arrow operator: -> - used to access members of a structure (or union) with a pointer
  - combines dereference operator (*) and member access operator (.) for referencing pointers towards structs - use when assigning variables to members of a struct with a pointer
  - ex. see c_basics/pointers/pointer_playground.c w/ malloc example
- buffer overflow: when you write beyond the bounds of an array, undefined behavior occurs - in my case, it was with a char
  - since chars are essentially arrays in C that are null-terminated, writing in a char that is exactly the size of the memory of the char that has been allocated will cause buffer overflow - see c_basics/pointers/pointer_playground.c w/ pointer example in the stack
