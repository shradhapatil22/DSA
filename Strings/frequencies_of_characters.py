str=input("Enter the string: ")
d = {}
for i in str:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
for i in str:
    if d[i] != 0:
        print("{}{}".format(i,d[i]), end =" ")
        d[i] = 0