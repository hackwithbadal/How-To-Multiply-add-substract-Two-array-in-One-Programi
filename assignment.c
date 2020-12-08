// 10-10-2020
#include <stdio.h>
int main()
{
    // initiating the value
    int i, j, k, val, ask, first, second;
    int a[2][2], b[2][2], mul[2][2], sum[i][j], sub[i][j];
start:
    printf("Enter '1' For Multiplication of Matrix\nEnter '2' for Addition the matrix\nEnter '3' to substraction the Matrix\n");
    scanf("%d", &val);
    if (val == 0 || val > 4)
    {
        printf("\nWrong Input Please Enter The Corect Key !\n\n");
        printf("Do You Want to repeat It Again ,Press '0' To Continue\npress another key to Exit\n");
        scanf("%d", &ask);
        if (ask == 0)
        {
            goto start;
        }
        else
        {
            // printf("Exiting from program");
            goto end;
        }
    } //taking value for first matrix
    printf("\n");
    printf("Enter the first matrix element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    } //taking the value for second matrix
    printf("\n");
    printf("Enter the second matrix element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    switch (val)
    {
    case 1: //multiplication of matrix
        printf("\n");
        printf("Multiply of the matrix\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < 2; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        } //printing the result
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        } //asking for repeat
        printf("Do You Want to repeat It Again ,Press '0' To Continue\nPress another key to Exit\n");
        scanf("%d", &first);
        if (first == 0)
        {
            goto start;
        }
        else
        {
            printf("Exiting from program");
        }
        break;
    case 2: //addition of two matrix
        printf("\nAddition Of Two Matrix\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d   ", sum[i][j]);
            }
            printf("\n");
        } //asking for repeat
        printf("Do You Want to repeat It Again ,Press '0' To Continue\npress another key to Exit\n");
        scanf("%d", &first);
        if (first == 0)
        {
            goto start;
        }
        else
        {
            printf("Exing The Program");
        }
        break;
    case 3: //substraction of matrix
        printf("\n");
        printf("\n\nSubstraction Of Two Matrix\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                sum[i][j] = a[i][j] - b[i][j];
                printf("%d   ", sub[i][j]);
                if (j == 1)
                {
                    printf("\n\n");
                }
            }
        } //asking for repeat
        printf("Do You Want to repeat It Again ,Press '0' To Continue\npress another key to Exit\n");
        scanf("%d", &first);
        if (first == 0)
        {
            goto start;
        }
        else
        {
            printf("Exiting from program");
        }
        break;
end:
    case 4:
        printf("Exing The program");
        break;
    }
    return 0;
}