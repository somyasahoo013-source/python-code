""" a=int(input("enter the first number : "))
b=int(input("enter the second number : "))
print("before swapping")
print(a)
print(b)
a=a+b
b=a-b
a=a-b
print("after swapping")
print(a)
print(b) """

""" 
#ciecumference of circle

rad=float(input("enter the radius"))
print("circumference is : ",2*3.14*rad) """

""" 
#check even or odd

a=int(input("enter the number"))
if a%2==0:
    print("even")
else:
    print("odd") """

""" 
#largest among 3

a=int(input("enter first number"))
b=int(input("enter second number"))
c=int(input("enter third number"))
if a>b and a>c:
    print(a)
elif b>a and b>c:
    print(b)
else:
    print(c) """
""" 
a=int(input("enter the number"))
if a>0:
    print("positive")
elif a<0:
    print("negative")
else:
    print("zero") """

""" i=1
while i<=100:
    print(i)
    i=i+1
i=i-1
print("\n")
for x in range(i,0,-1):
    print(x) """

""" 
# multiplication tabel

a=int(input("enter ther number : "))
i=1
while i<=10:
    print(i*a)
    i=i+1
for x in range(a,a*10+1,a):
    print(x) """

""" 
# factorial of anumber using loop

a=int(input("enter the number"))
b=a
fact=1
fact2=1
while a!=0:
    fact=fact*a
    a=a-1
print(fact)
for x in range(b,0,-1):
    fact2=fact2*x
print(fact2) """

""" 

# check prime or not

a=int(input("enter the number"))
flag=0
for x in range(2,a):
    if a%x==0:
        print("not prime")
        break
else:
    print("prime") """

""" 
#reverse the string

a=input("enter the string : ")
b=len(a)-1
c=""
#for x in range(b,-1,-1):
#    c=c+a[x]
#print(c)
while b>-1:
    c=c+a[b]
    b=b-1
print(c) """

""" 
#string pallindrum

a=input("enter the string : ")
b=len(a)-1
c=""
#for x in range(b,-1,-1):
#    c=c+a[x]
#print(c)
while b>-1:
    c=c+a[b]
    b=b-1
print(c) 
if c==a:
    print("palindrom")
else:
    print("not pallindrom")

 """

""" 

# count vowels in string
 
a=input("enter the string : ")
vowel="aeiou"
count=0
for x in a.lower():
    if x in vowel:
        count=count+1
print(count)
 """
""" 
# remove blank spaces
a=input("enter the string : ")
b=len(a)
c=""
for x in a:
    if x==" ":
        continue
    c=c+x
print(c) """

""" a=input("enter the string")
count=0
c=input("enter the number which frequency you wantgaed to know : ")
for x in c:
    if x=='a':
        count=count+1
print(count) """

""" 
#maximum number in list

a=[1,5,8,3,9,5,7]
b=max(a)
print(b)
 """
""" 

# remove duplicate from string

a=[2,7,5,4,8,9,3,2,6,4,5]
b=list(set(a))
print(b) """
""" 

#second largest number
a=[2,7,5,4,3,7,8,9]
b=max(a)
print(b)

a.remove(b)
c=max(a)
print(c) """

""" 
#merge two list

a=[1,2,3,3]
b=[5,6,7,8,9]
c=a+b
print(c) """


""" 
# factorial by recursion

def fact(n):
    if(n==1):
        return 1
    return n*fact(n-1)

n=int(input("enter the number : "))
a=fact(n)
print(a) """

""" 
# fibonnaci in recursion
def fiboa(n):
    if n==0:
        return 0
    if n==1:
        return 1
    return fiboa(n-1)+fiboa(n-2)

a=int(input("enter the number"))
c=fiboa(4)
print(c) """

""" 
# armstrong number

a=int(input("enter the number : "))
sum=0
while a!=0:
    b=a%10
    sum=sum+b*b*b
    a=a//10
print(sum)
 """
""" 
# common elemts from two list 

a=[1,2,3,4]
b=[3,4,5,5]
c=list(set(a)&set(b))
print(c)
 """

""" 
#Program to find length of string without using string function

s=input("Enter string:")
count=0
for i in s:
      count=count+1
print("Length of the string is:")
print(count)
 """

