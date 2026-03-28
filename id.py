class Account:
    def __init__(self,bal,acc):
        self.balance=bal
        self.account=acc

    def credit(self,ammount):
        self.balance=self.balance+ammount
        print(ammount," was credited")
        print("ammount balance ",self.balance)

    def debit(self,ammount):
        self.balance=self.balance-ammount
        print(ammount," was debited")
        print("ammount balance ",self.balance)

    def display(self):
        return self.balance
    
acc1=Account(10000,876)
acc1.credit(200)
acc1.debit(500)