def count_substring(string, sub_string):
    x=len(string)
    y=len(sub_string)
    counter=0
    for i in range(x):
        if string[i:y]==sub_string:
            counter+=1
        i+=1
        y+=1
        
        
    
    return counter

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)