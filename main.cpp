//Mbed_CA_Question 4. Code Description initialise int variables a = 10, b = 20, c = 30
//add values of a and b, store it in a new int variable d and print value of variable d
//subtract variable c from d and store in new int variable e and print the value of variable e.

#include "mbed.h"
//Defining veribles of integer type
int a = 10;
int b = 20;
int c = 30;
int d = 0;
int e = 0;

int main(){ //Runs in its own thread in the OS
  while(1){ //Continous loop while true 
    d = a + b; //Adding 'a' to 'b'
    printf("Value of variable 'd' is: %d \r\n",d); //Prints sum of addtion stored in 'd'
    e = c - d; //Substracting 'c' from 'd' 
    printf("Value of variable 'e' is: %d \r\n",e); //Prints sum of substraction storred in 'e'
    return 0;
  }
}

