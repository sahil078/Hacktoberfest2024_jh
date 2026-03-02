class Library {
  constructor() {
    this.books = [];
  }

  normalizeTitle(title) {
    return String(title).trim().toLowerCase();
  }

  findBook(title, availableFilter = null) {
    const normalizedTitle = this.normalizeTitle(title);
    return this.books.find(book => {
      const matchesTitle = this.normalizeTitle(book.title) === normalizedTitle;
      const matchesAvailability =
        availableFilter === null ? true : book.available === availableFilter;
      return matchesTitle && matchesAvailability;
    });
  }

  addBook(title, author) {
    const cleanTitle = String(title).trim();
    const cleanAuthor = String(author).trim();

    if (!cleanTitle || !cleanAuthor) {
      console.log("Title and author are required.");
      return;
    }

    const duplicate = this.books.find(
      book =>
        this.normalizeTitle(book.title) === this.normalizeTitle(cleanTitle) &&
        book.author.toLowerCase() === cleanAuthor.toLowerCase()
    );

    if (duplicate) {
      console.log(`Book already exists: "${cleanTitle}" by ${cleanAuthor}`);
      return;
    }

    this.books.push({ title: cleanTitle, author: cleanAuthor, available: true });
    console.log(`Book added: "${cleanTitle}" by ${cleanAuthor}`);
  }

  borrowBook(title) {
    const book = this.findBook(title, true);
    if (book) {
      book.available = false;
      console.log(`You've borrowed "${book.title}"`);
    } else {
      console.log(`"${title}" is not available.`);
    }
  }

  returnBook(title) {
    const book = this.findBook(title, false);
    if (book) {
      book.available = true;
      console.log(`You've returned "${book.title}"`);
    } else {
      console.log(`"${title}" was not borrowed.`);
    }
  }

  searchBook(title) {
    const book = this.findBook(title);
    if (book) {
      console.log(`Found: "${book.title}" by ${book.author} - ${book.available ? "Available" : "Not Available"}`);
    } else {
      console.log(`"${title}" not found in the library.`);
    }
  }

  listAvailableBooks() {
    const availableBooks = this.books.filter(book => book.available);
    if (availableBooks.length === 0) {
      console.log("No books are currently available.");
      return;
    }

    console.log("Available books:");
    availableBooks.forEach((book, index) => {
      console.log(`${index + 1}. "${book.title}" by ${book.author}`);
    });
  }
}

// Example usage:
const myLibrary = new Library();
myLibrary.addBook("The Great Gatsby", "F. Scott Fitzgerald");
myLibrary.addBook("To Kill a Mockingbird", "Harper Lee");
myLibrary.addBook("to kill a mockingbird", "harper lee");
myLibrary.searchBook("The Great Gatsby");
myLibrary.searchBook("the great gatsby");
myLibrary.borrowBook("The Great Gatsby");
myLibrary.listAvailableBooks();
myLibrary.returnBook("The Great Gatsby");
myLibrary.listAvailableBooks();
