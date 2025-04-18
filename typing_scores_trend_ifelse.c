#include<stdio.h>
#include<stdlib.h>

int main(){
    int scores[3];
    printf("Enter Your Top 3 Scores Below (WPM):\n");
    scanf("%d\n%d\n%d", &scores[0], &scores[1], &scores[2]);
    if(scores[0]>scores[1] && scores[0]>scores[2]){
        printf("Highest Score:%d\n", scores[0]);
    }
    else if(scores[1]>scores[0] && scores[1]>scores[2]){
        printf("Highest Score:%d\n", scores[1]);
    }
    else {
        printf("Highest Score:%d\n", scores[2]);
    }
    if(scores[0]<scores[1] && scores[0]<scores[2]){
        printf("Lowest Score:%d\n", scores[0]);
    }
    else if(scores[1]<scores[0] && scores[1]<scores[2]){
        printf("Lowest Score:%d\n", scores[1]);
    }
    else {
        printf("Lowest Score:%d\n", scores[2]);
    }
    if (scores[0] < scores[1] && scores[1] < scores[2]) {
        printf("🔥 You're improving with every attempt!\n");
    } else if (scores[0] > scores[1] && scores[1] > scores[2]) {
        printf("📉 Your speed is going downhill, bruh.\n");
    } 
    else {
        printf("🔄 Inconsistent typing — keep grinding!\n");
    }
    return 0;
}