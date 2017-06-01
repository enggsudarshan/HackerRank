/*

Anna and Brian order  items at a restaurant, but Anna declines to eat any of the  item (where ) due to an allergy. 
When the check comes, they decide to split the cost of all the items they shared; 
however, Brian may have forgotten that they didn't split the  item and accidentally charged Anna for it.

You are given , , the cost of each of the  items, and the total amount of money that Brian charged Anna for her portion of the bill. 
If the bill is fairly split, print Bon Appetit; otherwise, print the amount of money that Brian must refund to Anna.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b_charged,b_actual=0;
    scanf("%d",&b_charged);

    int total_cost = 0;
    for(i=0;i<n;i++)
        total_cost = total_cost + a[i];

    int total_cost_without_item_k = total_cost - a[k];
    b_actual = total_cost_without_item_k/2;

    //printf("\ntotal_cost_without_item_k = %d\n",total_cost_without_item_k);
    //printf("\nactual = %d\n",b_actual);
    if((b_charged - b_actual) == 0)
        printf("Bon Appetit");
    else
        printf("%d",b_charged - b_actual);
    return 0;
}
