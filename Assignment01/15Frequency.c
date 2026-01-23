#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,3,1,3,4,1,5};
    for (int i=0;i<10;i++){
        int count =0;
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("%d is reapeated is %d times \n",arr[i],count);  //not a correct code
    }
    return 0;
}