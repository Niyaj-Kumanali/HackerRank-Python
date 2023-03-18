def miniMaxSum(arr):
    # Write your code here
    l = len(arr)
    temp = []
    for i in range(l):
        sum = 0
        for j in range(l):
            if i != j:
                sum += arr[j]
        temp.append(sum)
    print(f"{min(temp)} {max(temp)}")



# arr =  list(map(int,input().split()))
arr = [1,1,1,1,2]
miniMaxSum(arr)