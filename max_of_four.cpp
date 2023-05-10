#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int Max;
    int x = max(a,b);
    int y = max(c,d);
    Max = max(x,y);
    return Max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/*
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.


Input Format:
Input will contain four integers -a,b,c,d, one per line.

Output Format:
Return the greatest of the four integers.
*/