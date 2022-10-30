    #include<stdio.h>
    #include<stdbool.h>
    int main()
    {
        // Write a program that prints the number of unique rows in a binary
        // a matrix composed only of ones and zeros
        int row,collumn;
        printf("Enter number of rows:");
        scanf("%d",&row);
        printf("Enter number of collumns:");
        scanf("%d",&collumn);
        int i,j,k,count = 0;
        int arr[row][collumn];
        bool isMatch = true;
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < collumn; j++)
            {
                scanf("%d",&arr[i][j]);
            }
                
        }     
            
        for(int i=0; i<row; i++)
        {

            for(int j = 0; j < i; j++)
            {
                isMatch = true;

                for(int k = 0; k <= collumn; k++)
                if (arr[i][k] != arr[j][k])
                {

                    isMatch = false;
                
                }

                if (isMatch)
                {

                    break;

                }
            }
            if (isMatch)
            {
                count++;
            }
        }
            printf("Number of unique rows is %d\n",count);
}
    