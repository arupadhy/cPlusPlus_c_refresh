Here is the diff between pointer and reference


Pointer                                                          References

Refers to an address                                            Refers to an address                 


pointer can point to NULL                                        References cannot be NULL
int* p = NULL; // This means p does not point to anything        int& j; //wrong

pointer(if not const) can point to diff variables at diff times  For a ref, referant is FIXED
int a, b, *p;
p = &a; // p points to a                                         int a, c, &b = a; // Okay
p = &b; // not p points to b                                      &b = c // ERROR

NULL checking is required                                         Makes code faster.No null checking needed

Allows users to operate on the address                            does not allow users to operate on the a
diff pointers, increment etc.                                     ddress.
