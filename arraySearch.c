#include <stdio.h>
int binarySearch(int arr[],int n,int key)
{
	int low=0,high=n-1,mid;
	
	while (low<=high)
	{
		mid=(low+high)/2;
		
		if(arr[mid]==key)
		return mid;   //Element found
		else if (arr[mid]<key)
		low=mid+1;    //search right half
		else
		high=mid-1;   //search left half
	}
	return-1;  //element nor found
}
 int main()
 {
 	int n,key,result,i;
 	
 	printf("enter number of elements:");
 	scanf("%d",&n);
 	
 	int arr[n];
 	
 	printf("Enter %d sorted elements:\n",n);
 	for(i=0;i<n;i++)
 	  scanf("%d",&arr[i]);
 	  
 	  printf("enter element to search:");
 	  scanf("%d",&key);
 	  
 	  result=binarySearch(arr,n,key);
 	  
 	  if(result!=-1)
 	  printf("element found at index %d\n",result);
 	  else
 	  printf("element not found\n");
 	  
 	  return 0;
 }
 
 
 
