/*Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. He performs M operations. Each operation is
described by 3 integers a, b and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each
jar whose index lies between a and b (both inclusive). This program is to find the average number of candies after M operations?*/

#include <stdio.h> 
int main() 

{ 
    int M, N; 
      
    printf("Enter N and M: "); 
    scanf("%d %d", &N, &M); 
 
    // Declare arrays to store the operations (a, b, k) 
    int a[M], b[M], k[M]; 
     
    // Declare the array 'j' which will hold the final values 
    int j[N]; 
  
    for (int i = 0; i < N; i++) 
    { 
        j[i] = 0; 
    } 
 
    // Read the operations 
    for (int i = 0; i < M; i++) { 
        scanf("%d %d %d", &a[i], &b[i], &k[i]); 
    } 
 
    // Apply the operations to the array j 
    for (int i = 0; i < M; i++) { 
        for (int x = a[i]; x <=b[i]; x++) { 
            j[x-1]= j[x-1]+k[i];  // Add k[i] to all elements in the range [a[i], b[i]) 
        } 
    } 
 
    // Calculate the sum of elements in the array j 
    int sum = 0; 
    for (int i = 0; i < N; i++) { 
        sum =sum+ j[i]; 
    } 
 
    // Print the average (integer division) 
    printf(" Average is %d \n", sum / N); 
     
    return 0; 
}