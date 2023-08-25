#
############################################################################################################
# @file             : solution.py
# @author           : Amr Mohamed Abdulzaher (amrnassareng@gmail.com)
# @brief            : contains a solution of [Vowel-Substring] Challenge PS (Basic) Certificate Test
############################################################################################################
#


#!/bin/python3
import math
import os
import random
import re
import sys

def findSubstring(s, k):
    
    vowelLetters = ["a", "o", "u", "e", "i"]
    maxCount=0
    currentCount=0
    startIndex=0
    currentString=[]
    maxString=[]
    
    #loop through all possible substrings of length k
    for endIndex in range(k,len(s)+1):
        currentString= s[startIndex:endIndex]
        #count number of vowels in current substring
        for letter in range(len(currentString)):
           currentCount += currentString[letter] in vowelLetters
        #update maxCount and maxString if a higher count is found
        if(currentCount>maxCount):
            maxCount = currentCount
            maxString= currentString
        #reset currentCount for next substring
        currentCount=0
        #move to the next substring
        startIndex+=1
        
    return maxString if maxCount > 0 else "Not found!"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    k = int(input().strip())

    result = findSubstring(s, k)

    fptr.write(result + '\n')

    fptr.close()