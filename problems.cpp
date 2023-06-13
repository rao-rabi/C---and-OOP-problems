// Q#1
// Given an array of integers, return True if the array contains a 3 next to a 3 somewhere.
// Desired output:
// has_33([1, 3, 3]) → True
// has_33([1, 3, 1, 3]) → False
// has_33([3, 1, 3]) → False
// has_33([3,3,1]) → True


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 4, 3, 7};
    int size = sizeof(arr);

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == 3 && arr[i + 1] == 3)
        {
            cout << true << endl;
            return 0;
        }
    }

    cout << false << endl;
    return 0;
}

// Q#2
// Write a function that takes an array and returns a new list with unique elements of the first list.
// Desired output:
// Sample Array : [1,1,1,1,2,2,3,3,3,3,4,5]
// Unique Array : [1, 2, 3, 4, 5]

// Q#3
// Write a function to check whether a string is pangram or not. (Assume the string passed in does not have any punctuation)
// Note:A pangram is a sentence containing every letter of the alphabet.
// Example:
// A quick brown fox jumps over the lazy dog.

// Q#4
// LESSER OF TWO EVENS: Write a function that returns the lesser of two given numbers if both numbers are even, but returns the greater if one or both numbers are odd.
// Desired output:
// lesser_of_two_evens(2,4)---> 2
// lesser_of_two_evens(2,3)---> 3
// lesser_of_two_evens(3,4)---> 4

// Q#5
// Write a function takes a two-word string and returns True if both words begin with same letter
// animal_crackers('Crazy Chocolate') --> True
// animal_crackers('Lazy Dog') --> False

// Q#6
// Given an input by the user in the form of a positive integer, the program should print out a triangle-shaped pattern made of the star character (*). The input should be stored in a variable called N. N represents the number of rows in the pattern. The number of stars in each row increases by 2 each time.
// Desired output:
// For example:
// If N = 3
// *
// ***
// *****

// Q#7
// Write a program to print the Fibonacci series.
// The Fibonacci numbers are the numbers in the following integer sequence.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
// In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation
// Fn = Fn-1 + Fn-2
// with seed values
// F0 = 0 and F1 = 1

// Q#8
// Write a program to find the sum of squares of first 'n' natural numbers.
// Input : N = 4
// Output : 30

// Q#9
// Write a program to find how many times substring “Emma” appears in the given string.
// input:
// str = "Emma is good developer. Emma is a writer"
// Output:
// Emma appeared 2 times

// Q#10
// Write a C++ code to accept a string and count the number of vowels and consonants.
// Print them separately.

// Q#11
// Write a function in C++ that accepts a credit card number.
// It should return a string where all the characters are hidden with an asterisk except the last four.
// For example, if the function gets sent "4444444444444444", then it should return "4444".

// Q#12
// BLACKJACK: Given three integers between 1 and 11,
// if their sum is less than or equal to 21, return their sum.
// If their sum exceeds 21 and there's an eleven, reduce the total sum by 10.
// Finally, if the sum (even after adjustment) exceeds 21, return 'BUST'
// blackjack(5,6,7) --> 18
// blackjack(9,9,9) --> 'BUST'
// blackjack(9,9,11) --> 19

// Q#13
// Write a program that prints the integers from 1 to 100.
// But for multiples of three print "Fizz" instead of the number,
// and for the multiples of five print "Buzz".

// Q#14
// Write a program to print the Sum of the diagnals(both) of a Matrix, using 2D Array.

// Q#15
// Print all Strong numbers(Strong number is a special number whose sum of the factorial of digits is equal to the original number) form 1 to 150.
// eg. 145 is a strong number,(1!+5!+5!)=145

// Q#16
// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

// Q#17
// Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now make two constructors of this class as follows:
// 1 - without any parameter - no amount will be added to the Piggie Bank
// 2 - having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.

// Q#18
// Create a class to print an integer and a character using two functions having the same name but different sequence of the integer and the character parameters.
// For example, if the parameters of the first function are of the form (int n, char c), then that of the second function will be of the form (char c, int n).

// Q#19
// Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.
// Q#20
// Create an array of characters and then print the address of each of the elements of the array. Take difference of two consecutive addresses and compare this with array of integers.