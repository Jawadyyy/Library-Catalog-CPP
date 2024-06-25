# Library Catalog 

## Overview

This Library Catalog Management System is a simple C++ console application designed to manage a catalog of books. Users can add new books, search for books by title, author, or ISBN, sort the catalog, and display the catalog.

## Features

- **Add a Book**: Allows users to add new books to the library catalog.
- **Search by Title**: Enables users to search for books by their title.
- **Search by Author**: Enables users to search for books by the author's name.
- **Search by ISBN**: Enables users to search for books by their ISBN.
- **Sort Catalog**: Allows users to sort the catalog by title, author, or ISBN.
- **Display Catalog**: Displays all the books in the catalog in a formatted table.


### Usage

1. **Compile and Run**:
   - Compile the code using a C++ compiler:
     ```sh
     g++ -o lib LibraryCatalog.cpp
     ```
   - Run the executable:
     ```sh
     ./lib
     ```
2. **Menu Options**:
  - When you run the program, you will see a menu with the following options:
   - Add a Book: Enter the book's title, author, and ISBN when prompted.
   - Search by Title: Enter the title of the book you want to search for.
   - Search by Author: Enter the author's name to find all books by that author.
   - Search by ISBN: Enter the ISBN of the book you want to search for.
   - Sort Catalog: Choose to sort by title, author, or ISBN.
   - Display Catalog: View all the books currently in the catalog.
   - Exit: Exit the program.
  

## Code Structure
  - Book Structure: Contains the title, author, and ISBN of a book
  - Global Variables:
      - `MAX_BOOKS`: Maximum number of books that can be stored in the catalog.
      - `libraryCatalog[MAX_BOOKS]`: Array to store the books.
      - `bookCount`: Counter to keep track of the number of books.
   
  - Functions:
      - `addBook()`: Adds a new book to the catalog.
      - `searchByTitle()`: Searches for a book by title.
      - `searchByAuthor()`: Searches for books by author.
      - `searchByISBN()`: Searches for a book by ISBN.
      - `sortCatalog()`: Sorts the catalog by title, author, or ISBN.
      - `displayCatalog()`: Displays the entire catalog.
   

## License

This project is licensed under the MIT License.

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests with your improvements.
