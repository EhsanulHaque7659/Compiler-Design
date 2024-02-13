#include<stdio.h>
int main(){
    int Number;
printf("Enter the Number a turtle: ");
scanf ("%d", & Number);
printf("\nEnter the table %d:\n\n",Number);
for (int i=1; i<=10; i++){
    printf("%i*%d =%i\n",Number,i,Number*i);
}
    return 0;
}
