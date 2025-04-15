#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char bodypart[20];
    char object[20];
    char animal[20];
    char place[20];

    printf("----WELCOME TO THE MADLIBS GAME----\n");
    printf("Enter a body part: ");
    scanf("%s", bodypart);
    printf("Enter an object: ");
    scanf("%s", object);
    printf("Enter an animal: ");
    scanf("%s", animal);
    printf("Enter a place: ");
    scanf("%s", place);    

    printf("I went to the %s to train my %s\n", place, bodypart);
    printf("Instead, i ended up lifting a %s\n", object);
    printf("Now my %s feels like it got attacked by a %s\n", bodypart, animal);
    printf("I guess i should have just stayed at home and played video games\n");
    printf("The end\n");
    printf("----THANK YOU FOR PLAYING THE MADLIBS GAME----\n");
    printf("----GOODBYE----\n");

    return 0;
}
    