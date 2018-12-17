#include <assert.h>
#include <stdio.h>
int main(){
    int guard = 0;
    int x = 4;
    while(1){
        guard = 1;
        x++;
        break;
    }
    assert(guard != 0 && x > 4);
}
