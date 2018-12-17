#include <assert.h>
#include <stdio.h>
int main(){
    int guard = 0;
    int variable = 10;
    printf("Read variable: %d\n", variable);
    assert(guard == 0);
    double another_variable;
    another_variable = 3.14;
    printf("Read another variable: %g\n", another_variable);
    assert(guard == 0);
    return 0;
}
