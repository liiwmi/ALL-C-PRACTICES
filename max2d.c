#include <stdio.h>

void searchingMax(int rows, int cols, int arr[rows][cols]);

int main()
{
  // Write a function that searches for the maximum value in a 2D array and returns its position (row and column) as well as the value itself.

  int validInput;
  int rows, cols;

  do
  {
    printf("Enter no. of rows:\t");
    validInput = scanf("%d", &rows);

    if (!validInput)
      printf("Please enter a number.");

    if (rows < 1)
      printf("Enter a positive number for rows.");
  } while (!validInput || rows < 1);

  do
  {
    printf("Enter no. of columns:\t");
    validInput = scanf("%d", &cols);

    if (!validInput)
      printf("Please enter a number.");

    if (rows < 1)
      printf("Enter a positive number for cols.");
  } while (!validInput || cols < 1);

  int arr[rows][cols];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {

      do
      {
        printf("Enter a value for [%d][%d]:\t", i, j);
        validInput = scanf("%d", &arr[i][j]);

        if (!validInput)
          printf("Enter a number.");
      } while (!validInput);
    }
  }

  searchingMax(rows, cols, arr);
  return 0;
}

void searchingMax(int rows, int cols, int arr[rows][cols])
{
  int max;
  int maxRow, maxCol;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {

      if (i == 0 && j == 0)
        max = arr[i][j];

      if (arr[i][j] > max)
      {
        max = arr[i][j];
        maxRow = i;
        maxCol = j;
      }
    }
  }

  printf("\n\nThe maximum value in the array is %d [%d][%d]", max, maxRow, maxCol);
}