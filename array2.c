
#include <stdio.h>

int main()
{int n,a[100],count=0,i,j;
printf("enetr the number of elements in the array");
scanf("%d",&n);
    printf("enetr the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    count=0;
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("the number is %d",a[i]);
    }
}

    return 0;
}
