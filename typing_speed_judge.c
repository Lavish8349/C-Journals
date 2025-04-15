#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int wpm;
    char name[20];
    
    printf("----WELCOME TO THE TYPING SPEED JUDGE----\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your avg WPM: ");
    scanf("%d", &wpm);

    if (wpm <= 20){
        printf("ngl, you might be a snail disguised as a human\n");
    }
    else if (wpm > 20 && wpm <= 60){
        printf("ngl %s, you need to get some reps in\n", name);
    }
    else if (wpm > 60 && wpm <= 100){
        printf("Reaching 100 is gonna take forever stick with it %s\n", name);
    }
    else if (wpm > 100 && wpm <= 150){
        printf("%s sheesh man get off the keyboard\n", name);
    }
    else if (wpm > 150 && wpm <= 200){
        printf("ngl %s, carpel tunnel is waiting for you my man\n", name);
    }
    else{
        printf("STOP THE CAP %s , YOU Ain't HIM\n", name);
    }
    printf("----THANK YOU FOR PLAYING THE TYPING SPEED JUDGE----\n");
    printf("----GOODBYE----\n");
    return 0;
}
