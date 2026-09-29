#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
    int max_sofar=a[0];
   int max_end=0;
    for(i=0;i<n;i++){
        max_end=max_end+a[i];
        if(max_sofar<max_end)
        {
            max_sofar=max_end;
        }
        if(max_end<0)
        {
            max_end=0;
        }
    }
 printf("%d\n",max_sofar);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
