#include <stdio.h>                                                                                                                   
#include <stdlib.h>

                                                                                                                                     
/**                                                                                                                                  
 * main - Print the name of the program                                                                                              
 * @argc: Count arguments                                                                                                            
 * @argv: Arguments                                                                                                                  
 *                                                                                                                                   
 * Return: Always 0 (Success)                                                                                                        
 */                                                                                                                                  
                                                                                                                                     
int main(int argc, char *argv[])                                                                                                     
{                                                                                                      
         int n;                                                                                                                      
         for(n =0; n < argc; n++)                                                                                                                        
         {                                                                                                                 
                 printf("%s\n",argv[n]);
      		 
         }                                                                               return(0);
}	 
