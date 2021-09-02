#include <stdio.h>
 
int get(int n){
    int i,a,b;
    for(i=2;i<n;i++){
        a=i;
        b=n-i;
        
        if(a%2==0 && b%2==0)
        return 1;
    }
    return 0;
}
int main(void) {
	int w;
	scanf("%d",&w);
	if(get(w))
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
 
