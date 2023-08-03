if __name__ == '__main__':
    a = int(input())
    b = int(input())
    if a and b in range(1,(10**10)+1):
        print(f"{a+b}\n{a-b}\n{a*b}")
