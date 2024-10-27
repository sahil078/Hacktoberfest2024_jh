class BankAccount {
  constructor(owner, initialBalance = 0) {
    this.owner = owner;
    this.balance = initialBalance;
  }

  deposit(amount) {
    if (amount > 0) {
      this.balance += amount;
      console.log(`${this.owner} deposited $${amount}. New balance: $${this.balance}`);
    } else {
      console.log("Deposit amount must be positive.");
    }
  }

  withdraw(amount) {
    if (amount > 0 && amount <= this.balance) {
      this.balance -= amount;
      console.log(`${this.owner} withdrew $${amount}. New balance: $${this.balance}`);
    } else {
      console.log("Insufficient funds or invalid amount.");
    }
  }

  getBalance() {
    console.log(`Current balance for ${this.owner}: $${this.balance}`);
    return this.balance;
  }
}

// Example usage:
const myAccount = new BankAccount("Alice", 500);
myAccount.deposit(150);
myAccount.withdraw(200);
myAccount.getBalance();
