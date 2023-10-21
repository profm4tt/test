#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    int table[10];
    table[0]=1;
    table[1]=5;
    table[2]=9;
    table[3]=0;
    table[4]=-30;
    table[5]=30;
    table[6]=100;
    table[7]=20;
    table[8]=70;
    table[9]=90;
float sum = 0;
int how_many = 10;
int i=0;
for (i = 0; i < how_many; i++) {
    sum += table[i];
}
float average = sum / how_many;
printf("Average : %f", average);
}
