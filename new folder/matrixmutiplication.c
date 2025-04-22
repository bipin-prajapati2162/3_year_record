#include <stdio.h>
int main()
{
    int m, n, p, q, i, j, k, sum = 0;
    int a[10][10], b[10][10], c[10][10];
    printf("enter rows and column of first matrix:\n");
    scanf("%d%d", &m, &n);
    printf("enter first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter rows and column for second matrix:\n");
    scanf("%d%d", &p, &q);
    printf("enter second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n first matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n second matrix is:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (n != p)
    {
        printf("cannot multiply");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
            	
                sum = 0;
                for (k = 0; k < m; k++){
				
                    sum = sum + (a[i][k] * b[k][j]);
            	}
            
            c[i][j] = sum;
        	}
    	}
	}
    printf("multiplication is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
