#include <assert.h>
int main(){
    int guard = 0;
    int x = 4;
    while(1){
        x++;
        if(x == 4){
          x--;
          guard = 1;
          break;
        }
    }
    assert(guard == 0);
}
