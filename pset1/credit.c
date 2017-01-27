#include <cs50.h>
#include <stdio.h>

int getCard();

int main(void)
{
    int cardNum = getCard();
    
    printf("Return mod num: %d",cardNum);
}

int getCard(void)
{
    int cardNum;
    printf("Number:\n");
    cardNum = GetInt();
    
    for (int i = 0; i < cardNum; i++){
        //cardNum = cardNum % 10;
        printf("%d\n",cardNum);
    }
    
    
    
    return cardNum;
    
    // valid card type check
    
    //Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products' digits together.
    //Add the sum to the sum of the digits that weren’t multiplied by 2.
    //If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

}