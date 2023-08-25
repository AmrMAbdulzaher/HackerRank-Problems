if __name__ == '__main__':
    s = input()
    count1=0
    count2=0
    count3=0
    count4=0
    count5=0
    for i in s:
        if(i.isalnum()):
            count1=1
    if count1==1:
        print("True")
    else:
        print("False")
            
    for i in s:
        if(i.isalpha()):
            count2=1
    if count2==1:
        print("True")
    else:
        print("False")
            
    for i in s:
        if(i.isdigit()):
            count3=1
    if count3==1:
        print("True")
    else:
        print("False")
            
    for i in s:
        if(i.islower()):
            count4=1
    if count4==1:
        print("True")
    else:
        print("False")
        
    for i in s:
        if(i.isupper()):
            count5=1
    if count5==1:
        print("True")
    else:
        print("False")  