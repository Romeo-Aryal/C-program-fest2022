#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int ar[n], key;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int j=0;j<n-1;j++){
        int small=j;
        for(int i=j+1;i<n;i++){
            if(ar[i]<ar[small]){
                small=i;
            }
        }
        int temp=ar[j];
        ar[j]=ar[small];
        ar[small]=temp;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }

return 0;
}