//use argc and argv to pass values throughout main function
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//create values of both tax and tip which can be entered through command line//
int main(int argc, char** argv[]){

double meal;
double totalBill;
double tax;
double tip;

//create constant meal cost of the 4 different foods
srand(time(NULL));
int r = rand()%4;
if(r == 0){
    meal = 9.95;
}
else if(r == 1){
    meal = 4.55;
}
else if(r == 2){
    meal = 13.25;
}
else if(r == 3){
    meal = 22.35;
}
printf("The meal cost is %.2f\n", meal);

for(int i=1;i<argc; ++i){
printf("The tax percent is %s%% \n",argv[i]);
    tax = atoi(argv[i]);
 i++;
printf("The tip percent is %s%%\n",argv[i]);
    tip = atoi(argv[i]);
}
//calculate from both tax and tip of the meal for total bill
    totalBill = (((tax/100)+1)*meal) + ((tip/100)*meal);
    printf("The total bill is %.2f\n", totalBill);
    
}
