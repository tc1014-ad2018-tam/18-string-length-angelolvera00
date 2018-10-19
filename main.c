/*This program was created for the purpose of asking the user to enter a string and the program will check its length
 *
 * Author: Angel Daniel Olvera Perales
 * Date: October 17
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>
int main( ) {
/*Declares the variables that I'll be using, one is for stating the maximum length that a string can have
and the other one is for stating the length of the string.
 */
    char string[10000];
    int length=0;
//Asks the user for a string and scans it.
    printf("Enter a string: \n");
    gets(string);
//The while loop will keep on scanning every character entered in the string until it runs out of information,
// it will keep adding every number to the length.
   while(string[length]!='\0')
    {
        length++;
    }
// The length of the string is printed.
    printf("Length of string is %d", length);
    return 0;
}