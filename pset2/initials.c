#include <cs50.h>
#include <stdio.h>

int main(void){

string personName;

do {
    personName = GetString();
    //printf("%s", personName);
}while(!*personName );
//printf("%s", personName);

char initialCharUpper = personName[0];
if (initialCharUpper >= 'a' && initialCharUpper <= 'z'){
    initialCharUpper = ('A' + initialCharUpper - 'a');
    printf("%c", initialCharUpper);
} else {
    printf("%c", initialCharUpper);
}


for (int i = 1; personName[i]; i++){
    if (personName[i] == ' ' && personName[i + 1] && personName[i + 1] != ' ' ){
        char personInitial = personName[i + 1];
        if(personInitial >= 'a' && personInitial <= 'z'){
            personInitial = ('A' + personInitial - 'a' );
            printf("%c", personInitial);
        }else {
            printf("%c", personInitial);
        }
    }
}
printf("\n");
}
