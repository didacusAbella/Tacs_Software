#include <assert.h>

int main(){
    int a = 10;
    assert(a >= 10);
    if(a < 10){
        //unreacheable code
        a++;
    }
    return 0;
}
