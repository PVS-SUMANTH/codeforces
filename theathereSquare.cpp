#include <stdio.h>
 
long long int findSqu(long long int val,long long int a){
   if (val%a == 0)
   return val/a;
   else
   return val/a + 1;
}
int main()
{
    
    long long int n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    printf("%lld", findSqu(n,a) * findSqu(m,a));
    
    return 0;
    
} 
