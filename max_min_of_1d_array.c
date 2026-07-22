#include<stdio.h>
int main(){

int arr[]={1,2,3,4,5,6};
int n = 6;
int max=arr[0], min=arr[0];

for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}

printf("maximum = %d \n", max);
printf("minimum = %d \n", min);

return 0;
}