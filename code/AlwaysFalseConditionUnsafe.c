#include <assert.h>

int main(){
  int a = 9;
  assert(a >= 10);
  if(a < 10){
      a--;
  }
  return 0;
}
