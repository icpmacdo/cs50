#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if (argc == 2)
    {
        int k = atoi(argv[1]);
    
        if(k > 26){
            k = k % 26;
        }
        printf("plaintext: ");
        string getMessage = get_string();
        if (getMessage != NULL)
        {
            int getMessageLength = strlen(getMessage);
            for (int i = 0; i < getMessageLength; i++)
            {
                
                getMessage[i] = rotation(getMessage[i], k );
            }
            printf("ciphertext: %s\n", getMessage);
        }
    }
    else
    {
        printf("Error: Needs two args");
        return 1;
    }
    return 0;
}