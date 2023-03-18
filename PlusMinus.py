# The function accepts INTEGER_ARRAY arr as parameter.
def plusMinus(arr):
    # Write your code here
    length = len(arr)
    positive = []
    negative = []
    zero = []
    for i in arr:
        if i > 0:
            positive.append(i)
        elif i < 0:
            negative.append(i)
        else:
            zero.append(i)
    print(len(positive)/length)
    print(len(negative)/length)
    print(len(zero)/length)

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
