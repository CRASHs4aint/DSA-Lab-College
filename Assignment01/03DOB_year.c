#include<stdio.h>
int main(){
    int DOB;
    printf("Enter your DOB(DDMMYYYY):");
    scanf("%d",&DOB);
    int year=DOB%10000;
    printf("Your Birth year:%d",year);
    return 0;
}