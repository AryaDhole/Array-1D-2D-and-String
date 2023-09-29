### Arya Dhole  ENTC-A2  22070123027

# 1. Array
## Aim:
The program takes enters 5 numbers and prints them.
## Theory:
In C++, an array is a variable that can store multiple values of the same type.

#### C++ Array Declaration : 
dataType arrayName[arraySize];


## Explanation:
* int arr[5], i;: We declare an integer array arr of size 5 to store the numbers entered by the user also variable i to be used as a loop counter.

* For loop runs from i = 0 to i = 4. Inside the loop.
* It displays a message prompting the user to enter a number using cout.
* It reads the user's input (an integer) and stores it in the arr array at the current index i using cin.


# 2. Array Greater and Smaller Number

## Aim:
The program is designed to find the smallest and largest numbers from an array of 5 integers entered by the user. 

## Explanation:
* A for loop is used to get input from the user. It prompts the user to enter 5 numbers one by one and stores them in the arr array.

* Another for loop is used to compare adjacent elements in the array in order to find the largest number. The loop runs from i = 0 to i = 4.

* Inside the loop, it checks if arr[i] is greater than arr[i+1]. If it is, it swaps the values of arr[i] and arr[i+1] using the variable a.

* After the loop, it attempts to print the smallest and largest numbers. It prints arr[0] as the smallest number and arr[5] as the largest number.

# 3. Array Number Search
## Aim:
The program allows you to enter 5 numbers and then prompt you to enter a number to search for within those 5 numbers. It will display the positions where the number was found, or inform you if the number is missing from the array.
## Explanation:
* It uses a for loop to collect 5 numbers from the user and store them in the arr array.

* After getting the user's input, it prompts the user to enter a number (num) that they want to find in the array.

* It uses another for loop to search for the entered number num in the array. If num is found at position i (where i is the index), it prints a message indicating that the number was found at that position and increments the num1 variable to count the occurrences of num.

* Finally, it checks the value of num1. If num1 is still 0, it means that the number was not found in the array, and it prints a message to inform the user.

# 4. Array Number Search Optimized
## Aim:
This program performs a binary search to efficiently find a number within the sorted array and provides the position where the number was found or informs the user if the number is missing from the array.

## Explanation:
* Prompts the user to enter the number of elements (num) and then uses a for loop to collect num floating-point numbers from the user and store them in the array array.

* Initializes variables low, high, and mid for binary search. low is the lower bound of the search range, high is the upper bound, and mid is the middle index.

* Uses a while loop to perform binary search. The loop continues as long as low is less than or equal to high.

* Inside the loop, it calculates the mid index and compares the element at array[mid] with the key. If array[mid] is less than key, it updates the low index. If they are equal, it prints a message indicating that the key was found at position mid + 1. If array[mid] is greater than key, it updates the high index and recalculates mid.


* Finally, it checks whether low is greater than high. If this is the case, it means the key was not found in the array, and it prints a message informing the user that the number is missing. Otherwise, it returns 0 to indicate successful execution.

# 5. Number of Elements in String
## Aim:
The program you is designed to count the number of characters in a given input string,excluding spaces.
## Theory:
The cin.get function is used to read input including spaces.
## Explanation:
* Uses a while loop to iterate through each character of the input string until it encounters the null character '\0', which indicates the end of the string.

* Inside the loop, it checks if the current character str[i] is not a space (i.e., ' '). If it's not a space, it increments the count variable.

* The i variable is incremented in each iteration to move to the next character in the string.
* Finally, the program prints the value of the count variable, which represents the number of characters in the input string (excluding spaces), and it returns 0 to indicate successful execution.

# 6. Number of Elements in String
## Aim:
The program you reads a string from the user and then prints the entire string and the character at the third position of the string

## Theory:
The cin.get function is used to read input including spaces.
## Explanation:
* Uses cout to print the character at index 2 of the string, which is the third character in the input string ( C++ uses 0-based indexing, so index 2 corresponds to the third position).

# 7. Matrix Addition
## Aim:
The program performs the addition of two matrices.
## Theory:
A matrix is a two-dimensional array, where each element is accessed using two indices: a row index and a column index.
### e.g. (int matrix[3][3]);
## Explanation:
* First prompts the user to enter the dimensions (number of rows and columns) for two matrices, the first matrix having dimensions m x n and the second matrix having dimensions p x q.

* It declares two integer arrays, mat and mat1, to store the two matrices. The dimensions of these matrices are determined by the user's input.

* It checks if the dimensions of the two matrices are compatible for addition. In this case, they are compatible if the number of rows (m) and the number of columns (n) of the first matrix are equal to the number of rows (p) and the number of columns (q) of the second matrix.

* If the dimensions are compatible, the program proceeds to input the elements of both matrices and then performs the addition of the matrices.





