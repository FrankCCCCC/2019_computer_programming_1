// NTHUOJ 11662 - Fill containers with water   
// Description
// Suppose that you have an infinite number of containers with different sizes, already filled with water. Given another empty container with size N liters, you need to find the best way to fill this N-liter empty container using the provided smaller containers. By ‘best’, we mean that the total number of used containers should be as small as possible. For example, assume that we have containers in 1, 5, and 10 liters. To get the 17 liters of water, we need 2 containers of 1 liter, 1 container of 5 liters, and 1 container of 10 liters. Another example: assume that we have containers in 1, 5, 10 and 50 liters. To get the 57 liters of water, we need 1 container of 50 liters, 1 container of 5 liters, and 2 containers of 1 liter. Note that, to avoid water wastage, if you choose to use a container, all the water in this container should be poured.
// The following is an excerpt of incomplete code:
// #include <stdio.h>
// #define MAXNV 5
// int DONE = 0;
// int liters[MAXNV];
// int numbers[MAXNV];
// void show(int nv);
// void filling(int amount, int cur, int nv);
// int j=0;
// int water;
// int min=100;
// int min_numbers[MAXNV]={0};
// int main(void)
// {
//     int nv, i;

//     scanf("%d", &nv);
//     for (i=0; i<nv; i++) {
//         scanf("%d", &liters[i]);
//     }
//     scanf("%d", &water);
//     filling(water, 0, nv);

//     for(i=0;i<nv;i++)
//         numbers[i]=min_numbers[i];
//     show(nv);
//     return 0;
// }

// void show(int nv)
// {
//     int i;
//     printf("(%d", numbers[0]);
//     for (i=1; i<nv; i++) {
//         printf(",%d", numbers[i]);
//     }
//     printf(")\n");
// }

// void filling(int amount, int cur, int nv)
// {
//     /* your code */
// }

// Input
// The input contains three lines.
// The first line contains an integer N, indicating that how many containers you have.
// The second line gives you each container's size.
// The last line is the total amount of water you have to pour.

// Output
// The result can be displayed by calling the function show().
// Only the best way to fill the empty container should be displayed.

// Sample Input  
// 4
// 50 10 5 1
// 57

// Sample Output  
// (1,0,1,2)
 
// 2020/05/19 SYC

#include<stdlib.h>
#include<stdio.h>

int main(){

    return 0;
}