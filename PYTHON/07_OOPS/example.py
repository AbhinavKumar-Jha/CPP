# . Write a Python program to create a class representing a bank. Include methods for managing customer accounts and transactions
class Account:
    def __init__(self, account_id, account_holder):
        self.account_id = account_id
        self.account_holder = account_holder
        self.balance = 0.0

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount}. New balance: {self.balance}")

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance: {self.balance}")

    def check_balance(self):
        print(f"Balance: {self.balance}")


class Bank:
    def __init__(self):
        self.accounts = {}

    def create_account(self, account_id, account_holder):
        if account_id not in self.accounts:
            self.accounts[account_id] = Account(account_id, account_holder)
            print(f"Account created for {account_holder}.")

    def deposit(self, account_id, amount):
        if account_id in self.accounts:
            self.accounts[account_id].deposit(amount)

    def withdraw(self, account_id, amount):
        if account_id in self.accounts:
            self.accounts[account_id].withdraw(amount)

    def check_balance(self, account_id):
        if account_id in self.accounts:
            self.accounts[account_id].check_balance()


# Example usage
if __name__ == "__main__":
    bank = Bank()
    bank.create_account("12345", "Alice")
    bank.deposit("12345", 500)
    bank.withdraw("12345", 150)
    bank.check_balance("12345")
