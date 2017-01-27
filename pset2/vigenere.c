#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char rotation (char letter, int k){
    
    if(letter >= 'a' && letter <= 'z')
    {
        letter = letter - 'a';
        letter = (letter + k) % 26;
        letter = letter + 'a';
    } else if(letter  >= 'A' && letter  <= 'Z'){
        letter = letter - 'A';
        letter = (letter + k) % 26;
        letter = letter + 'A';
    }
    
    return letter;
    
}

int main(int argc, string argv[])
{
    
    // Example correct output 
    // Key : ABC
    // plaintext:  HELLO
    // ciphertext: HFNLP

    if (argc == 2)
    {
        string k = argv[1];
        
        printf("plaintext:");
        string getMessage = get_string();
        
        if (getMessage != NULL)
        {
            int plainInputLength = strlen(getMessage);
            int keyLength = strlen(k);
            int rotationAmountAdded = 1;
            int offset = 0;
            int keyOffsetAmount = 0;
            int characterIncrement = 0;
            
            for (int i = 0; i <= plainInputLength; i++)
            {
                
                if ((getMessage[i] >= 'A' && getMessage[i] <= 'Z' ) || (getMessage[i] >= 'a' && getMessage[i] <= 'z')){
                    keyOffsetAmount = (characterIncrement % keyLength);
                    
                    if (k[keyOffsetAmount] >= 'a' && k[keyOffsetAmount] <= 'z')
                    {
                        offset = (k[keyOffsetAmount]) - 97 ;
                    } 
                    else if (k[keyOffsetAmount]  >= 'A' && k[keyOffsetAmount]  <= 'Z')
                    {
                        offset = (k[keyOffsetAmount]) - 65 ;
                    }
                    
                    rotationAmountAdded =  offset;
                    getMessage[i] = rotation(getMessage[i], rotationAmountAdded);
                    characterIncrement++;
                }
            }
            printf("ciphertext: %s\n", getMessage);
        }
    }
 
    else
    {
        printf("Error: Needs two args\n");
        return 1;
    }
    return 0;
}