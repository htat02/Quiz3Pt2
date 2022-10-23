//use argc and argv to pass values throughout main function
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, int *argv){

float meal;

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



//create values of both tax and tip which can be entered through command line//

//create constant meal cost of the 4 different foods

//calculate from both tax and tip of the meal for total bill

