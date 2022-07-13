#include <stdio.h>
//Write a function that prints Assalamualaikum if user is Muslim 
// & Namaste if the user is Hindu
void salam();
void namaste();


int main(){
     printf("Enter Religion Islam h & Hindu i  :");
     char ch;
     scanf("%c", &ch);

     if (ch == 'i')
     {
        namaste();
     }
     else{
       
         salam();
     }
     
    return 0;
}

void salam(){
    printf("assalamualaikum\n");
}

void namaste(){
    printf("Namaste\n");
}