#include <stdio.h>
#include <windows.h>
int main(){
  while(1){
    for(char c = 0;c < 255; c++){if(GetAsyncKeyState(c) == -32767)puts(c);}
    Sleep(20);
  }
  return 0;
}
