// Problem : Maximum 69 Number

// You are given a positive integer num consisting only of digits 6 and 9.

// Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).


// Example 1:

// Input: num = 9669
// Output: 9969
// Explanation: 
// Changing the first digit results in 6669.
// Changing the second digit results in 9969.
// Changing the third digit results in 9699.
// Changing the fourth digit results in 9666.
// The maximum number is 9969.
// Example 2:

// Input: num = 9996
// Output: 9999
// Explanation: Changing the last digit 6 to 9 results in the maximum number.


class Solution {
public:
    int maximum69Number (int num) {
        int arr[4]={0};
        int index=3;
        while(num>0)
        {
            arr[index]=num%10;
            index--;
            num=num/10;
        }

        for(int i=0;i<4;i++)
        {
            if(arr[i]==6)
            {
                arr[i]=9;
                break;
            }
        }
        int result=0;
        for(int i=0;i<4;i++)
        {
            result=result*10+arr[i];
        }

        return result;
    }
};