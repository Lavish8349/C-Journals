#include<stdio.h>
#include<stdlib.h>

int main(){
    int scores[5];
    printf("Enter Your Top 5 Scores Below (WPM):\n");
    scanf("%d %d %d %d %d", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4]);
    int max = scores[0];
    int min = scores[0];
    if(scores[1]>max) max = scores[1];
    if(scores[2]>max) max = scores[2];
    if(scores[3]>max) max = scores[3];
    if(scores[4]>max) max = scores[4];

    if(scores[1]<min) min = scores[1];
    if(scores[2]<min) min = scores[2];
    if(scores[3]<min) min = scores[3];
    if(scores[4]<min) min = scores[4];

    printf("MAX Score : %d\n", max);
    printf("MIN Score : %d\n", min);

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
    


    