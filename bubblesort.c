#include <stdio.h>
#include <stdlib.h>

int count=0;

void bubblesort(int a[10],int n)
{

    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {

            count=count+1;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{

    int n,i,a[10];
    printf("\n read array size:\n");
    scanf("%d",&n);
    printf("\n Read array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


bubblesort(a,n);
printf("\n sorted elements are: \n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n total number of comparision =%d",count);
    return 0;

}
