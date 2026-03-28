print("enter number to vote to the corresponding party\n")
print("1. BJP")
print("2. congress")
print("3. AAP")
print("4. BJD")
print("5. nota\n")

Party=["BJP","CONGRESS","AAP","BJD","NOTA"]
VoteBank=[0,0,0,0,0]

VoterNumber=int(input("Enter the numbers of voter "))
print("\n")


j=0
while j<VoterNumber:
    Vote=int(input("ENTER TO VOTE "))

    if(Vote == 1):
        VoteBank[0]+=1
    if(Vote == 2):
        VoteBank[1]+=1
    if(Vote == 3):
        VoteBank[2]+=1
    if(Vote == 4):
        VoteBank[3]+=1
    if(Vote == 5):
        VoteBank[4]+=1
    j+=1

i=0

idx=0

while i<len(VoteBank):
    if(max(VoteBank) == VoteBank[i]):
        idx=i
        break
    i+=1

print("\n",Party[idx]," win the election")


