/* Project Euler Problem 39
*   If p is the perimeter of a right angle triangle with integral length sides, {a,b,c},
*   there are exactly three solutions for p = 120: {20,48,52}, {24,45,51}, {30,40,50}
*   For which value of p ≤ 1000, is the number of solutions maximised?
*
*Written by Val Scrivner
*/

#include <stdio.h>

int main (void)

{
    int a, b, c;
    int p;
    int numOfSolutions=0;
    int maxSolutions=0;
    int pOfMaxSolutions=0;
    int half; //used to cut down the number of possibilities and speed up the output


    for (p = 1; p<=1000; p=1+p){
        half = p/2;
        numOfSolutions = 0;
        for (a=1; a < half; a++){
            for (b=a; b < half; b++){
                for (c=b; c < a+b; c++){
                    if (a + b + c ==p && a*a+ b*b == c*c){
                        numOfSolutions ++;
                        if (numOfSolutions > maxSolutions) {
                                maxSolutions = numOfSolutions;
                                pOfMaxSolutions = p;
                        }
                    }
                }
            }
        }
    }
    printf("For p = %i, the number of solutions is maximized with %i solutions\n", pOfMaxSolutions, maxSolutions);
    return 0;

}
