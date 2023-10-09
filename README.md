# We Mzee Library Management System
![image](https://github.com/barasamichael/We_Mzee_Library_Management_System/assets/111043798/2fe2aa4e-d908-4ebc-b854-a58277cf254d)

---
## SECTION A
## Overview
Welcome to the Library Management System project! This is a C++ application that provides a simple yet efficient solution for managing books, authors, borrowers, and more for a local library. It's designed as a practical way to learn and apply C++ programming concepts in a real-world scenario.

## Features
- **Add Books:** Easily add new books to the library's collection, including book title, author, genre, ISBN, and total copies.
- **Remove Books:** Remove books from the library's collection based on title or ISBN.
- **Search Books:** Search for books by various criteria such as title, author, genre, or ISBN and get a list of matching books.
- **Check Out/Return Books:** Allow borrowers to check out and return books, updating the available copies.
- **Manage Borrowers:** Add and remove borrowers, keeping track of their information.
- **User-Friendly Interface:** A simple command-line interface guides you through operations with clear prompts and menus.
- **Data Persistence:** Store book, author, genre, and borrower data to maintain records between program runs.

## Getting Started
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/barasamichael/We_Mzee_Library_Management_System.git
   cd We_Mzee_Library_Management_System
   ```

2. **Compile the Program:**
   Use a C++ compiler (e.g., g++) to compile the source files.

3. **Run the Program:**
   Execute the compiled binary to start the Library Management System.
   ```bash
   ./library_management_system
   ```

4. **Explore and Enjoy:**
   Use the command-line interface to explore the system and manage the library's collection.

## Project Structure

## Contributing
Contributions are welcome! Whether you want to fix bugs, add new features, or improve documentation, please feel free to create issues and pull requests.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments
- Inspired by the need for practical C++ projects.
- Thank you to the C++ community for valuable resources and support.

---
## SECTION B
Here's a mini-project idea that explores building a simple library management system in C++. This project will help you practice various aspects of C++ programming, including classes, file handling, and user input. Below is a comprehensive case study for this project:

**Problem Statement:**
A local library needs a simple software system to manage its collection of books. The library contains various books authored by different authors and categorized into different genres. The system should allow library staff to perform various operations, such as adding and removing books, searching for books, and checking out books to borrowers. Additionally, it should maintain records of borrowers and their borrowing history.

**Entities:**
1. **Book:**
   - Attributes: Title, Author, Genre, ISBN, Available Copies, Total Copies, and Status (Available, Checked Out).
   - Methods: Display book information.

2. **Author:**
   - Attributes: Name, ID, and Biography.
   - Methods: Display author information.

3. **Genre:**
   - Attributes: Name, ID.
   - Methods: Display genre information.

4. **Borrower:**
   - Attributes: Name, ID, Contact Information.
   - Methods: Display borrower information.

5. **Library:**
   - Attributes: List of books, list of authors, list of genres, list of borrowers.
   - Methods: Add book, remove book, search book, display book list, add borrower, remove borrower, and more.

**Processes:**
1. **Add Book:**
   - Collect book information (title, author, genre, ISBN, total copies).
   - Add the book to the library's collection.

2. **Remove Book:**
   - Search for a book by title or ISBN.
   - Remove the book from the library's collection.

3. **Search Book:**
   - Search for books by title, author, genre, or ISBN.
   - Display a list of matching books.

4. **Check Out Book:**
   - Search for a book by title or ISBN.
   - Check out the book to a borrower, reducing the available copies.

5. **Return Book:**
   - Search for a book by title or ISBN.
   - Check the book in, increasing the available copies.

6. **Add Borrower:**
   - Collect borrower information (name, contact information).
   - Add the borrower to the library's records.

7. **Remove Borrower:**
   - Search for a borrower by name or ID.
   - Remove the borrower from the library's records.

8. **Display Borrowing History:**
   - Search for a borrower by name or ID.
   - Display the books checked out by the borrower.

**User Interface:**
You can create a simple command-line interface where the library staff can input commands and interact with the system. Use menus and prompts to guide users through various operations.

**Data Storage:**
Store book, author, genre, and borrower data in text files or simple databases to persist information between program runs.

**Additional Features (Optional):**
- Implement error handling for invalid inputs or operations.
- Provide the ability to edit book information.
- Implement fine-grained permission levels for library staff (e.g., administrator vs. librarian).
- Generate reports on the library's collection and borrowing statistics.

This project will give you a hands-on experience in designing and implementing a C++ program with multiple classes, data storage, and user interaction. It's a great opportunity to learn C++ and apply your programming skills in a real-world scenario.
