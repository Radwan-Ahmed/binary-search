#include<stdio.h>
#include<conio.h>
void main()
{
    int first,last,middle,R,search;
  int i;
  printf("Enter how many  elements:\n");
  scanf("%d",&R);
  printf("Enter the values:\n");
  int array[R];
  for(i=0;i<R;i++)
  {
          scanf("%d",&array[i]);
  }


    printf("Enter value to find\n");
    scanf("%d",&search);
    first =0;
    last =R-1;
    middle=first+last/2;
    while(first<=last)
    {
        if(array[middle]<search)
            first=middle+1;
        else if(array[middle]==search)
        {
            printf("%d found at location %d\n",search,middle+1);
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
        printf("Not found %d is not present in the list\n",search);
    getch();
}

