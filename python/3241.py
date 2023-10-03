a = int(input())

for x in range(a):
    e = input()
    if e == "P=NP":
        print("skipped")
    elif e == "0+0":
        print(0)
    else:
        print(eval(e))