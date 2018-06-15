#include<stdio.h>
#define N 10
void ia(int *a,int n)
{ 
	int i;
	for ( i=0;i<n;i++ ) 
		scanf("%d",&a[i]); 
}
void pa(int *a,int n) 
{ 
	int i,m,n,m0,n0; 
    m=n=0; 
	for ( i=1;i<n;i++ ) 
		if ( a[m]<a[i] ) 
			m=i; 
		else if ( a[n]>a[i] )
			n=i;
  m0=a[n-1]; n0=a[0]; a[n-1]=a[m]; a[0]=a[n]; a[m]=m0; a[n]=n0;
}
void oa(int *a,int n) 
{ 
	int i; 
	for ( i=0;i<n;i++ ) 
		printf("%d ",a[i]); 
	printf("\n"); 
}
void main() 
{ 
	 int a[N];
	 ia(a,N);
	 pa(a,N);
	 oa(a,N);
}