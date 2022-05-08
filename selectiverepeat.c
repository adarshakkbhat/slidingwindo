#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,w,ack=0,i,ch;
    char frames[20];
    printf("Enter the number of frames\n");
    scanf("%d",&n);
    printf("Enter the content of frames\n");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&frames[i]);
    }
    printf("Enter the window size\n");
    scanf("%d",&w);
    printf("Selective\n");
    printf("Frames sent\t");
    for(i=0;i<w;i++)
    {
        printf("%c ",frames[i]);
    }
    printf("\t\tSliding window: ");
    for(i=0;i<w;i++)
    {
        printf("%c ",frames[i]);
    }
    while(ack<n)
    {
        printf("\nFrame %d: received(1)/Not Received(0)?\n",ack);
        scanf("%d",&ch);
        if(ch==1)
        {
            ack++;
            if(ack+w<=n)
            {
            printf("Frame %d sent: %c\t\t",ack+w-1,frames[ack+w-1]);
            }
        }
        else if(ch==0)
        {
        printf("Frame %d is resent: %c\t\t",ack,frames[ack]);
         }
         printf("Sliding window: ");
            for(i=ack;i<ack+w&&i<n;i++)
             {
                printf("%c ",frames[i]);
             }
    }
    printf("\nAll frames over");
}