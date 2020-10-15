#include <stdio.h>
int main() {
    int arr[20],pos,i,n;
    printf("Enter No of Element you want to insert in an array:\n");
    scanf("%d",&n);
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("Enter Element to be deleted \n");
    scanf("%d",&pos);
    if(pos>=n+1)
       printf("Deletion not possible.\n");
    else
       {
           for(i=pos-1;i<n-1;i++)
                arr[i]=arr[i+1];
           printf("After Deleting element at %d location the array is \n",pos);
           for(i=0;i<n-1;i++)
                printf("%d\n",arr[i]);
       }
	return 0;
}

