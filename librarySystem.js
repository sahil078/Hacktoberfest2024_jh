class Library {
  constructor() {
    this.books = [];
  }

  addBook(title, author) {
    this.books.push({ title, author, available: true });
    console.log(`Book added: "${title}" by ${author}`);
  }

  borrowBook(title) {
    const book = this.books.find(b => b.title === title && b.available);
    if (book) {
      book.available = false;
      console.log(`You've borrowed "${title}"`);
    } else {
      console.log(`"${title}" is not available.`);
    }
  }

  returnBook(title) {
    const book = this.books.find(b => b.title === title && !b.available);
    if (book) {
      book.available = true;
      console.log(`You've returned "${title}"`);
    } else {
      console.log(`"${title}" was not borrowed.`);
    }
  }

  searchBook(title) {
    const book = this.books.find(b => b.title === title);
    if (book) {
      console.log(`Found: "${book.title}" by ${book.author} - ${book.available ? "Available" : "Not Available"}`);
    } else {
      console.log(`"${title}" not found in the library.`);
    }
  }
}

// Example usage:
const myLibrary = new Library();
myLibrary.addBook("The Great Gatsby", "F. Scott Fitzgerald");
myLibrary.addBook("To Kill a Mockingbird", "Harper Lee");
myLibrary.searchBook("The Great Gatsby");
myLibrary.borrowBook("The Great Gatsby");
myLibrary.returnBook("The Great Gatsby");
