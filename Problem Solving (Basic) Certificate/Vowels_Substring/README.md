# HackerRank Problem: Vowel Substring

This repository contains a Python solution for the HackerRank problem "[Vowel-Substring]" Problem Solving (Basic) Certificate Test.

## Problem Description

The problem involves finding a substring of a given string that contains the maximum number of vowels and has a specified length.  

## How It Works

The script defines a function `findSubstring(s, k)` that takes an input string `s` and an integer `k` representing the desired length of the substring. The function iterates through all possible substrings of length `k` within the input string.

During each iteration, it counts the number of vowel letters (a, e, i, o, u) within the current substring. The script maintains two important variables: `maxCount` to track the maximum vowel count found, and `maxString` to store the substring with the maximum vowel count.

The script returns the substring with the highest vowel count. If no such substring is found (i.e., the maximum vowel count is 0), it returns "Not found!".

## Additional Notes

- This solution is designed for the HackerRank "[Vowel-Substring]" challenge.
- The author of the solution is Amr Mohamed Abdulzaher.
- For questions or improvements, you can contact the author at amrnassareng@gmail.com.

Feel free to use, modify, and distribute this solution according to the terms of the HackerRank platform.

Happy coding!