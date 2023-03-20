#include<stdio.h>
#include<stdlib.h>
void ifAsquareGiven(int lenght,int breadth);
void ifArectGiven(int lenght,int breadth);
int totalCount=0;
int count=0;
void main()
{
    int length=0,breadth=0;
    printf("Enter the length\n");
    scanf("%d",&length);
    printf("Enter the breadth\n");
    scanf("%d",&breadth);
    
   
    if(length==breadth)
    {
        ifAsquareGiven(length,breadth);
    }
    else
    {
        ifArectGiven(length,breadth);
    }
}
void ifAsquareGiven(int length,int breadth)
{
    printf("%d x %d",length,breadth);
    totalCount=length*breadth;
}
void ifArectGiven(int length,int breadth)
{
    int difference=length-breadth;
    totalCount=length*breadth;
    int small=breadth;
    int numOfsmallSquares=0;
    if(difference<0)
    {
        difference*=-1;
        small=length;
    }
    printf("%d x %d\n",small,small);
    count+=small*small;
    if(small>difference)
    {
        numOfsmallSquares=small/difference;
         for(int index=0;index<numOfsmallSquares;index++)
            {
            printf("%d x %d\n",difference,difference); 
            count+=difference*difference; 
            //printf("entered1\n");
            }
    }
    else if(difference>small)
    {
        numOfsmallSquares=difference/small;
         for(int index=0;index<numOfsmallSquares;index++)
            {
            printf("%d x %d\n",small,small); 
            count+=small*small; 
            //printf("entered2\n");
            }
    }
    else
    {
        numOfsmallSquares=1;
         for(int index=0;index<numOfsmallSquares;index++)
        {
            printf("%d x %d\n",difference,difference); 
            count+=difference*difference;
            //printf("entered3\n"); 
        }
    }
    if(totalCount-count)
    {
        for(int index=0;index<(totalCount-count);index++)
        {
            printf("1 x 1\n");
        }

    }
}
