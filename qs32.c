#include <stdio.h>
//qs32 Print "hello world" 5 times
void printHw(int count);
int main(){
  return 0;
}

void printHW(int count){
    if (count == 0)
    {
        return ;
    }
   printf("Hello World");
   printfHW(count-1); 
}