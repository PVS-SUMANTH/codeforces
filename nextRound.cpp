#include <stdio.h>
 
int main() {
int size, k,i;
scanf("%d %d",&size,&k);
int a[size];
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
 
int count=0;
 
for(i =0; i<size ; i++){
    if (a[i] >= a[k-1] && a[i] > 0)
        count++;
}
 
printf("%d\n", count);
 return 0;
}
