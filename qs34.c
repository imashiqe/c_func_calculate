#include <stdio.h>

//write a function to calculate Percentage of a student from Marks in  science , Math & Arabic

int calPercentage(int science, int math , int arabic);

int main(){
   int sc = 98;
   int math = 95;
   int arabic = 99;
    return 0;
}

int calcPercentage(int science, int math, int arabic){
    return ((science + math + arabic) / 3) * 3;
}