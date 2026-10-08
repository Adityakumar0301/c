#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter The Number Of Units Utilised : ");
    scanf("%d", &unit);
    if(unit <= 200){
        bill = unit * 80;
    }else if(unit >200 && unit <= 300){
        bill = 200 * 80 + (unit-200)*90;
    }else{
        bill = 200*80 + 100*90 + (unit - 300) * 100;
    }

    if(bill/100.0 < 100){
        bill = 10000;
    }else if(bill/100.0 > 400){
        bill = bill + (bill * 0.15);
    }
    printf("Your Bill Amount is : Rs. %.2f", bill/100.0);
}

