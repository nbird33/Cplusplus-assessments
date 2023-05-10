#include <stdio.h>
#include <cstdlib>
#include <iostream>

void update(int *a,int *b) {
   int added = *a + *b;
   int subtracted = abs(*a - *b);
   *a = added;
   *b = subtracted;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
Function Description:

Complete the update function.
update has the following parameters:

int *a: an integer
int *b: an integer

Returns:

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.


Input Format:

Input will contain two integers,  and , separated by a newline
*/