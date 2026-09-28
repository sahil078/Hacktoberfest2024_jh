const fs = require('fs');
const path = require('path');

class Library {
  constructor(dataFile = path.join(__dirname, 'library.json')) {
    this.books = [];
    this.dataFile = dataFile;
    this.loadBooks();
  }

  loadBooks() {
    try {
      if (fs.existsSync(this.dataFile)) {
        const raw = fs.readFileSync(this.dataFile, { encoding: 'utf8' });
        const data = JSON.parse(raw);
        if (Array.isArray(data)) this.books = data;
      }
    } catch (e) {
      // ignore errors and start with empty collection
      this.books = [];
    }
  }

  saveBooks() {
    try {
      fs.writeFileSync(this.dataFile, JSON.stringify(this.books, null, 2), { encoding: 'utf8' });
    } catch (e) {
      console.error('Failed to save library data:', e.message);
    }
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
    this.saveBooks();
    console.log(`Book added: "${cleanTitle}" by ${cleanAuthor}`);
  }

  borrowBook(title) {
    const book = this.findBook(title, true);
    if (book) {
      book.available = false;
      this.saveBooks();
      console.log(`You've borrowed "${book.title}"`);
    } else {
      console.log(`"${title}" is not available.`);
    }
  }

  returnBook(title) {
    const book = this.findBook(title, false);
    if (book) {
      book.available = true;
      this.saveBooks();
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

// simple command-line interface
function printHelp() {
  console.log(`Usage: node librarySystem.js <command> [args]

Commands:
  add "Title" "Author"       Add a new book
  search "Title"              Search for a book by title
  borrow "Title"              Borrow a book
  return "Title"              Return a book
  list                         List all available books
  help                         Show this message
`);
}

function main() {
  const lib = new Library();
  const [cmd, ...args] = process.argv.slice(2);

  if (!cmd || cmd === "help") {
    printHelp();
    return;
  }

  switch (cmd.toLowerCase()) {
    case "add":
      if (args.length < 2) {
        console.log("add requires title and author");
        break;
      }
      lib.addBook(args[0], args[1]);
      break;
    case "search":
      if (args.length < 1) {
        console.log("search requires title");
        break;
      }
      lib.searchBook(args[0]);
      break;
    case "borrow":
      if (args.length < 1) {
        console.log("borrow requires title");
        break;
      }
      lib.borrowBook(args[0]);
      break;
    case "return":
      if (args.length < 1) {
        console.log("return requires title");
        break;
      }
      lib.returnBook(args[0]);
      break;
    case "list":
      lib.listAvailableBooks();
      break;
    default:
      console.log(`Unknown command: ${cmd}`);
      printHelp();
  }
}

if (require.main === module) {
  main();
}
