if __name__ == '__main__':
    N = int(input())
    myList=[]

    for _ in range(N):
        #split the input string into a list , the index 0 will be the input command
        command=input().split()
        if command[0]=='insert':
            myList.insert(int(command[1]),int(command[2]))
        elif command[0]=='print':
            print(myList)
        elif command[0]=='remove':
            myList.remove(int(command[1]))
        elif command[0]=='append':
            myList.append(int(command[1]))
        elif command[0]=='sort':
            myList.sort()
        elif command[0]=='pop':
            myList.pop()
        elif command[0]=='reverse':
            myList.reverse()