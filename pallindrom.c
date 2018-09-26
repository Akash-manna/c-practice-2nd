//Q.36>Write to check pallindrom
#include <stdio.h>
#include <string.h>
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}
// Driver program to test above function
int main()
{
	char A[100];
	printf("Enter the String:");
	gets(A);
	isPalindrome(A);
	//String
    return 0;
}