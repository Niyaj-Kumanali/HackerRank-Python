def timeConversion(s):
    # Write your code here
    h = s[0]+s[1]
    m = s[3]+s[4]
    sec = s[6]+s[7]
    f= s[8]+s[9]
    t = f.upper()
    if t == "PM" and h == "12":
        pass
    elif t == "PM":
        h = 12+int(h)
    elif t == "AM" and h == "12":
        h = "00"
    return f"{h}:{m}:{sec}"





s ='09:45:36pm'
# s = input()
result = timeConversion(s)
print(result)
