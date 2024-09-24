#include <stdio.h>
#include<string.h>
void main()
{
    char arr[10][10];
    int ch,i=0;
    while (1)
    {
        printf("\n\n1. Create File\t2. Delete File\t3. Search File\n4. Display Files\t5. Exit\nEnter your choice -- ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            char filename[10];
            scanf("Enter the file name");
            strcpy(arr[i],filename);
            i++;
            break;

        case 2:
            char filename[10];
            scanf("Enter the file name");

            for(int j=0;j<10; j++)
            {
                if(strcmp(arr[j],filename))
            }
        }

        default:
            break;
        }
    }
}