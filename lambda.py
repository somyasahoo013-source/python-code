""" 
#fionacci
def fibo(n):
    if n==0:
        return 0
    if n==1:
        return 1
    return fibo(n-1)+fibo(n-2)

print(fibo(3)) """

""" 
#sum of n numbers

n=int(input("enter the number ; "))
sum=0
for i in range(1,n+1):
    sum=sum+i
print(sum) """

""" 
#sum of digits

n=int(input("enter the number ; "))
sum=0
while n!=0:
    sum=sum+n%10
    n=n//10
print(sum) """

"""
#reverse number

 n=int(input("enter the number ; "))
sum=0
while n!=0:
    sum=sum*10+n%10
    n=n//10
print(sum) """

""" #pallindrom

n=int(input("enter the number ; "))
sum=0
while n!=0:
    a=n%10
    sum=sum+a*a*a
    n=n//10
print(sum) """

""" # check vowels

vowel="aeiou"
n=input('character : ')
if n in vowel:
    print("vowel")
else:
    print("comsonant") """

