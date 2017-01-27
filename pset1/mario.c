#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("Enter the number of rows : ");
    int numEntered = GetInt();
    int numSpaces = numEntered + 1;
    //int numHashes = 1;
    
  	// Loops through the number of rows
    for(int i = 0; i < numEntered; i++){
    	//Loops through the line. Needs to loop through userInput + 1
        for(int j = 0; j < numSpaces; j++){
            if(j < numSpaces - i - 2){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}
