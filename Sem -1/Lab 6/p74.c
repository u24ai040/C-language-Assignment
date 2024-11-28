/*Given are One Dimensional arrays A and B which are sorted in Ascending Order.
It is a program to merge them into a single sorted array C that contains every 
item from A and B ,in Ascending Order. */

#include<stdio.h>

void main() {
    int i, j, n, m;

    printf("Enter size of A and B array \n");
    scanf("%d%d", &n, &m);

    int a[n], b[m], c[n + m];
    
    // Taking input
    printf("Enter terms in A array \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //Printing Array A
    printf("\nYour A array is\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    //Taking input
    printf("\nEnter terms in B array \n");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    //Printing Array B
    printf("\nYour B array is\n");
    for (i = 0; i < m; i++) {
        printf("%d\t", b[i]);
    }

    //copying element of Array A in Array C
    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    //copying element of Array b in Array C
    for (i = n; i < n + m; i++) 
    {
        c[i] = b[i - n];
    }

    //Sorting in Array C
    for (j = 0; j < n + m - 1; j++) 
       { 
        for (i = 0; i < n + m - j - 1; i++)
         {
            if (c[i] > c[i + 1])
             {
                c[i] = c[i] + c[i + 1];
                c[i + 1] = c[i] - c[i + 1];
                c[i] = c[i] - c[i + 1];
            }
        }
    }

    printf("\n Sorted Array C  is  : \n");
    for (i = 0; i < n + m; i++)
     {
        printf("%d\t", c[i]);
    }
}