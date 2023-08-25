import textwrap

def wrap(string, max_width):
    result=""
    start=0
    end=max_width
    iteration=max_width*2
    for i in range(iteration):
        result+= string[start:end]+"\n"
        start=end
        end+=max_width
        
    return result

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)