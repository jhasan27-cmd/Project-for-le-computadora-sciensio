/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Check out some phrases/sentences I made\n\n");
    
    srand(time(0));
    
    char randNoun[7][30] = {"Mizi", "Sua", "Don Quixote", "Umamusume", "Haru Urara", "Crate of JJBA merchandise", "cat V plush"};
    char randVerb[5][30] = {"steps", "scams", "dismembers", "licks", "tickles"};
    char randAdjective[8][30] = {"depressed", "silly", "spontaneously explosive", "obese", "stand user-esque", "bizzare", "crazy", "noisy"};
    char randAdverb[3][30] = {"cutely", "elegently", "bizzarely"};
    char randDeterminer[8][30] = {"the", "a", "my", "your", "his", "her", "our(communist)", "their"};
    char randPreposition[6][30] = {"inside of", "in the general direction of", "toward", "in front of", "on", "away"};
    
    int randNum2 = rand() % 2;    
    int randNum3 = rand() % 3;
    int randNum4 = rand() % 4;
    int randNum5 = rand() % 5;
    int randNum6 = rand() % 6; 
    int randNum7 = rand() % 7; 
    int randNum8 = rand() % 8;
    
    char response = 'Y';
    char isGoing = 'Y';
    
    while (isGoing == 'Y') {
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random
        
        printf("Here's a simple sentence:\n");
        //simple sentence
        printf("%s %s %s\n\n", randDeterminer[randNum8], randNoun[randNum7], randVerb[randNum5]);
        
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("Here's a noun phrase:\n");
        //noun phrase
        if (randNum2 == 0) {
            printf("%s %s\n\n", randDeterminer[randNum8], randNoun[randNum7]);
        }
        else {
            printf("%s %s %s\n\n", randDeterminer[randNum8], randAdjective[randNum8], randNoun[randNum7]);
        }
        
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("Here's a prepositional phrase:\n");
        //prepositional phrase
        printf("%s %s %s %s\n\n", randPreposition[randNum6], randDeterminer[randNum8], randAdjective[randNum8], randNoun[randNum7]);
        
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("Here's a verb phrase:\n");
        //verb phrase
        printf("%s %s\n\n", randVerb[randNum5], randAdverb[randNum3]);
       
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("Here's a complicated sentence:\n");
        //complicated sentence
        printf("%s %s %s ", randDeterminer[randNum8], randAdjective[randNum8], randNoun[randNum7]);
        
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("%s %s ", randVerb[randNum5], randAdverb[randNum3]);
        
        if (1 == 1) {
            randNum2 = rand() % 2;    
            randNum3 = rand() % 3;
            randNum4 = rand() % 4;
            randNum5 = rand() % 5;
            randNum6 = rand() % 6; 
            randNum7 = rand() % 7;
            randNum8 = rand() % 8;
        }    //update random

        
        printf("%s %s %s %s.\n\n", randPreposition[randNum6], randDeterminer[randNum8], randAdjective[randNum8], randNoun[randNum7]);
        
        printf("Wanna see any more randomized sentences? Y/N:");
        scanf(" %c", &response);
        if (response != 'Y') {
            isGoing = 'N';
        }
        printf("\n\n");
    }
    
    return 0;
}

