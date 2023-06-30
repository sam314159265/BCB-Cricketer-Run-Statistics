//Project: BCB Cricketers Batting Statistics
#include <stdio.h>
main()
{
    //taking inputs in array
    int runs[100],i,j,srch,sz=0;
    char press;

    printf("Project: BCB Cricketers Batting Statistics Menu \n \n");
    printf("Press 'r' to take input\n");
    printf("Press 's' to search\n");
    printf("Press 't' to display runs in reverse order\n");
    printf("Press 'q' to quit the program\n");

    start3:
    printf("No batting scores found. Please populate your batting scores first.");

    start:
    printf("\nEnter Your Choice: ");
    start2:
    scanf("%c",&press);


    switch(press)
    {
        case 'r':
            {
            //size of array
               printf("Enter size of array: ");
               scanf("%d",&sz);
               printf("Give inputs as run: \n");

                for(i=0;i<sz;i++)
                {
                    scanf("%d",&runs[i]);
                }

                for(i=0;i<sz;i++)
                {
                    printf("no. %d score is %d\n",i+1,runs[i]);
                }
                goto start;
            }
        case 's':
            {
                if(sz==0)
                {
                    goto start3;
                }
                //searching at array
                printf("Search a batting score: ");
                scanf("%d",&srch);

                int found = 0;

                for(i=0; i<sz; i++)
                {
                    if(runs[i] == srch)
                    {
                        found = 1;
                        break;
                    }
                }

                if(found == 1)
                {
                    printf("\n%d is found at index no %d", srch, i);
                }
                else
                {
                    printf("\n Not Found", srch);
                }

                printf("\n");
                goto start;
            }

        case 't':
            {
                if(sz==0)
                {
                    goto start3;
                }

                //displaying in reverse order
                for(j=sz;j>0;j--)
                {
                  printf("no. %d score is %d\n",j,runs[j-1]);
                }
                goto start;
            }
        case 'q':
            {
                return 0;
            }

    }

    if (press == 'r' || 's' || 't')
    {
        goto start2;
    }
}
