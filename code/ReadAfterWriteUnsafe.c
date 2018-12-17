#include <assert.h>
#include <stdio.h>

int main(){
    int guard = 0;
    float float_variable;
    printf("Read before assign:%f\n", float_variable);
    float_variable = 3.4;
    guard = 1;
    assert(guard == 0);
    return 0;
}
