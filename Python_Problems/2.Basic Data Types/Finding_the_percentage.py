if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    if query_name in student_marks.keys():
        sum=0
        counter=0
        for num in student_marks[query_name]:
            sum+=num
            counter+=1
        avg=sum/counter
        print("{:.2f}".format(avg))