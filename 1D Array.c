/*By:- Ali Ashraf
*aliashrafali0155239@gmail.com
*/ 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int *ptr;
int n=0;
int sum=0;
int main() {
    scanf("%d",&n);
ptr=(int*)malloc( n*sizeof(int));
        for(int x=0;x<n;x++)
        {
            scanf("%d",ptr+x);
            sum +=*(ptr+x);
            
        }
        printf("%d\n",sum);
        free(ptr);
    return 0;
}
