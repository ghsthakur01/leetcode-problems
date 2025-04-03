#include <stdio.h>
#include <limits.h>

#define ROWS 6
#define COLS 6

// Function to find the maximum hourglass sum in a 6x6 array
int maxHourglassSum(int arr[ROWS][COLS]) {
    int maxSum = INT_MIN;

    // Loop through all possible hourglasses
    for (int i = 0; i <= ROWS - 3; i++) {
        for (int j = 0; j <= COLS - 3; j++) {
            // Compute the sum of the hourglass pattern
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                    + arr[i+1][j+1] 
                    + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            // Update maximum sum if the current sum is greater
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    return maxSum;
}

int main() {
    int arr[ROWS][COLS];

    // Input the 6x6 matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Compute and print the maximum hourglass sum
    printf("%d\n", maxHourglassSum(arr));

    return 0;
}
