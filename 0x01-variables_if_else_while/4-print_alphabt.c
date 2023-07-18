#include <stdio.h> 
  
 /** 
  * main - main function 
  * Return: zero always 
 */ 
  
 int main(void) 
 { 
         char i; 
  
         for (i = 'a'; i <= 'z'; i++) 
         if (i != 'e' && i != 'q') 
                 putchar(i); 
  
         putchar('\n'); 
         return (0); 
 }