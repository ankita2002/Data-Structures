#include<stdio.h>
int main()
{
	int a[100],search,n,i;
	
	printf("\nEnter size of array: ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements: ",n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	printf("\nEnter elements to search: ");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(a[i]==search){
			printf("\n %d is present at location %d",search,i+1);
			break;
		}
	}
	if(i==n) printf("\n\nElement Not Found\n\n");
	return 0;
}

