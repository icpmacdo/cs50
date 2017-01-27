#include <cs50.h>
#include <stdio.h>
#include <math.h>

int ValQuarter = 25;
int ValDime = 10;
int ValNickle = 5;
int ValPenny = 1;

int main(void){
    int numCoins = 0;
    int changeAmountWhole = 0;
    float changeAmount = 0.00;
    printf("Amount change owed : ");
    changeAmount = GetFloat();
    
    if (changeAmount > 0){
        changeAmountWhole = (int)(changeAmount * 100);
        
        numCoins += changeAmountWhole / ValQuarter;
        changeAmountWhole %= ValQuarter;
        
        numCoins += changeAmountWhole / ValDime;
        changeAmountWhole %= ValDime;
        
        numCoins += changeAmountWhole / ValNickle;
        changeAmountWhole %= ValNickle;
        
        numCoins += changeAmountWhole / ValPenny;
        changeAmountWhole %= ValPenny;
        
        printf("%i\n", numCoins);
        
    } else {
        printf("Amount change owed : ");
        changeAmount = GetFloat();
    }
}