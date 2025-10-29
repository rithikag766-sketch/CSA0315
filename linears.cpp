#include <stdio.h>

int main() {
   
    int A[20],n,key,flag=0,pos,i;

    printf("Enter the n: ");
    scanf("%d", &n);
 
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d", &A[i]);

    printf("Enter the key: ");
    scanf("%d", &key);
    
     for(i=0;i<n;i++)
     {
     	if(A[i]==key)
        {
     		pos=i;
     		flag=1;
     		break;
		}
	 }
	 if (flag==1)
	 	printf("The position of key %d is %d \n",key, pos );
	 else
	    printf("The  key %d is not an element\n",key );
        return 0;
}

