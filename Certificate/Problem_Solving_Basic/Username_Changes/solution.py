#
############################################################################################################
# @file             : solution.py
# @author           : Amr Mohamed Abdulzaher (amrnassareng@gmail.com)
# @brief            : contains a solution of [Usernames-Changes] Challenge PS (Basic) Certificate Test 
############################################################################################################
#

#!/bin/python3
import math
import os
import random
import re
import sys

def possibleChanges(usernames):
    #to store result of each username
    result=[]
    #iterate through each username
    for user in usernames:
        #check if username length 1 or less => this username is unchangeable
        if(len(user)<=1):
            result.append("NO")
        #iterate through characters in current username
        for ch in range(len(user)-1):
            #compare ASCII Values of current character with next character
            if (user[ch]>user[ch+1]):
                result.append("YES")
                break
            else:
                result.append("NO")
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    usernames_count = int(input().strip())

    usernames = []

    for _ in range(usernames_count):
        usernames_item = input()
        usernames.append(usernames_item)

    result = possibleChanges(usernames)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()