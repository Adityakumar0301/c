#include<stdio.h>
int main(){

    int arr[5]={1,3,5,7,10};
    int sum1=0;
    int sum2=0;
    // for(int i=0;i<5;i++){

    //         sum *= arr[i];
    //         // printf("sum is %d",sum);
    // }
  
    // printf("sum is %d",sum);

    for (int i=0;i<5;i++){

        if(i%2==0){
            sum1+=arr[i];
        }
    }
     for (int j=0;j<5;j++){

        if (j%2!=0)
        {
             sum2+=arr[j];
        }
        }

    int diff=sum2-sum1;
    printf("difference is %d",diff);
    return 0;

}