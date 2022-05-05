//Insertion of elements from TOP, BOTTOM or Particular place in an array
#include<stdio.h>
#define M 10
int insert_p(int a[],int s)
{
    if(s>=5)
    printf("out of space");
    else
    {
        int i,p,n;
        printf("New Value: ");
        scanf("%d",&n);
        printf("Position: ");
        scanf("%d",&p);
        p=p-1;
        for(i=s;i>=p;i--)
        {
            a[i+1]=a[i];
        }
        a[p]=n;
        for(i=0;i<s+1;i++)
        {
              printf("%d\n",a[i]);
        }
        
    }

        
}
int insert_t(int a[],int s)
{
    int n,i;
    if(s>=M)
    printf("----out of space----");
    else
    {
        printf("New value: ");
        scanf("%d",&n);
        for(i=s;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=n;
        for(i=0;i<s+1;i++)
        {
              printf("%d\n",a[i]);
        }
    }    
}

int main()
{
    int a[M],i,s,c,n;
    printf("Enter Number of Elements : ");
    scanf("%d",&s);
    printf("Enter values : ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Insert element in: 1. TOP\n 2. BOTTOM\n  3. Particular position ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            insert_t(a,s);
            break;
        case 2:
            printf("New Value: ");
            scanf("%d",&n);
            a[s]=n;
            for(i=0;i<s+1;i++)
            {
                  printf("%d\n",a[i]);
            }
            break;
        case 3:
            insert_p(a,s);
            break;
    }
    return 0;
}