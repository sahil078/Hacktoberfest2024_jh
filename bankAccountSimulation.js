class BankAccount {
  constructor(owner, initialBalance = 0) {
    this.owner = owner;
    this.balance = Number(initialBalance);
    this.transactions = [];

    if (!Number.isFinite(this.balance) || this.balance < 0) {
      this.balance = 0;
    }

    this.recordTransaction("account_opened", this.balance, "Initial balance");
  }

  isValidAmount(amount) {
    return Number.isFinite(amount) && amount > 0;
  }

  recordTransaction(type, amount, note = "") {
    this.transactions.push({
      type,
      amount,
      note,
      balanceAfter: this.balance,
      timestamp: new Date().toISOString(),
    });
  }

  deposit(amount) {
    if (this.isValidAmount(amount)) {
      this.balance += amount;
      this.recordTransaction("deposit", amount);
      console.log(`${this.owner} deposited $${amount}. New balance: $${this.balance}`);
    } else {
      console.log("Deposit amount must be positive.");
    }
  }

  withdraw(amount) {
    if (this.isValidAmount(amount) && amount <= this.balance) {
      this.balance -= amount;
      this.recordTransaction("withdraw", amount);
      console.log(`${this.owner} withdrew $${amount}. New balance: $${this.balance}`);
    } else {
      console.log("Insufficient funds or invalid amount.");
    }
  }

  transferTo(otherAccount, amount) {
    if (!(otherAccount instanceof BankAccount)) {
      console.log("Transfer failed. Target account is invalid.");
      return;
    }

    if (!this.isValidAmount(amount) || amount > this.balance) {
      console.log("Transfer failed. Insufficient funds or invalid amount.");
      return;
    }

    this.balance -= amount;
    otherAccount.balance += amount;

    this.recordTransaction("transfer_out", amount, `To ${otherAccount.owner}`);
    otherAccount.recordTransaction("transfer_in", amount, `From ${this.owner}`);

    console.log(`${this.owner} transferred $${amount} to ${otherAccount.owner}.`);
  }

  getBalance() {
    console.log(`Current balance for ${this.owner}: $${this.balance}`);
    return this.balance;
  }

  showTransactions() {
    if (this.transactions.length === 0) {
      console.log(`No transactions for ${this.owner}.`);
      return;
    }

    console.log(`Transaction history for ${this.owner}:`);
    this.transactions.forEach((entry, index) => {
      const note = entry.note ? ` (${entry.note})` : "";
      console.log(
        `${index + 1}. [${entry.timestamp}] ${entry.type} $${entry.amount}${note} -> Balance: $${entry.balanceAfter}`
      );
    });
  }
}

// Example usage:
const myAccount = new BankAccount("Alice", 500);
const bobAccount = new BankAccount("Bob", 300);
myAccount.deposit(150);
myAccount.withdraw(200);
myAccount.transferTo(bobAccount, 100);
myAccount.getBalance();
bobAccount.getBalance();
myAccount.showTransactions();
bobAccount.showTransactions();

// Simple persistence for example accounts (non-blocking best-effort)
const fs = require('fs');
const path = require('path');
const DATA_FILE = path.join(__dirname, 'bank_accounts.json');

function toSerializable(account) {
  return {
    owner: account.owner,
    balance: account.balance,
    transactions: account.transactions,
  };
}

function saveAccounts(accounts) {
  try {
    const out = accounts.map(toSerializable);
    fs.writeFileSync(DATA_FILE, JSON.stringify(out, null, 2), { encoding: 'utf8' });
    console.log('Saved account snapshots to', DATA_FILE);
  } catch (e) {
    console.error('Failed to save accounts:', e.message);
  }
}

saveAccounts([myAccount, bobAccount]);
