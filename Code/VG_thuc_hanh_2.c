#include <stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int A[n];
    for (i=0;i<n;i++)
        scanf("%d", &A[i]); // tich 2 phan tu lien tiep lon nhat
    int max=A[0];
    if (n==1){
        printf("0");
        return 0;
    } 
    for(i=1;i<n;i++)
    {
    	if(max<A[i]*A[i-1])
        	max = A[i]*A[i-1];
	}
    printf("%d", max);
}
