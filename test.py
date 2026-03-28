with open("practice.txt","r") as f:
    data=f.read()
    print(data)

    num=""
    for i in range(len(data)):
        num=num+data[i]

print(num)