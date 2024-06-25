#include <iostream>
#include <iomanip>

using namespace std;

struct Book
{
    string title;
    string author;
    string ISBN;
};

const int MAX_BOOKS = 100;
Book libraryCatalog[MAX_BOOKS];
int bookCount = 0;

void addBook()
{
    if (bookCount < MAX_BOOKS)
    {
        cout << "Enter book title: " << endl;
        cin.ignore();
        getline(cin, libraryCatalog[bookCount].title);

        cout << "Enter author name: ";
        getline(cin, libraryCatalog[bookCount].author);

        cout << "Enter ISBN: " << endl;
        cin >> libraryCatalog[bookCount].ISBN;

        cout << "Book added successfully" << endl;
        bookCount++;
    }
    else
    {
        cout << "Library catalog is full" << endl;
    }
}

void searchByTitle()
{
    string searchTitle;
    cout << "Enter the title to search: " << endl;
    cin.ignore();
    getline(cin, searchTitle);

    bool found = false;

    for (int i = 0; i < bookCount; ++i)
    {
        if (libraryCatalog[i].title == searchTitle)
        {
            cout << "Book found" << endl;
            cout << "Title: " << libraryCatalog[i].title << endl;
            cout << "Author: " << libraryCatalog[i].author << endl;
            cout << "ISBN: " << libraryCatalog[i].ISBN << endl;
            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "Book not found" << endl;
    }
}

void searchByAuthor()
{
    string searchAuthor;
    cout << "Enter the author to search: " << endl;
    cin.ignore();
    getline(cin, searchAuthor);

    bool found = false;

    for (int i = 0; i < bookCount; ++i)
    {
        if (libraryCatalog[i].author == searchAuthor)
        {
            cout << "Book found" << endl;
            cout << "Title: " << libraryCatalog[i].title << endl;
            cout << "Author: " << libraryCatalog[i].author << endl;
            cout << "ISBN: " << libraryCatalog[i].ISBN << endl;
            found = true;
        }
    }

    if (found == false)
    {
        cout << "Author not found" << endl;
    }
}

void searchByISBN()
{
    string searchISBN;
    cout << "Enter the ISBN to search: " << endl;
    cin.ignore();
    getline(cin, searchISBN);

    bool found = false;

    for (int i = 0; i < bookCount; ++i)
    {
        if (libraryCatalog[i].ISBN == searchISBN)
        {
            cout << "Book found" << endl;
            cout << "Title: " << libraryCatalog[i].title << endl;
            cout << "Author: " << libraryCatalog[i].author << endl;
            cout << "ISBN: " << libraryCatalog[i].ISBN << endl;
            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "Book not found" << endl;
    }
}

void sortCatalog()
{
    int choice;
    cout << "Sorting the catalog by: " << endl;
    cout << "1. Title" << endl;
    cout << "2. Author" << endl;
    cout << "3. ISBN" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string swap;

        for (int i = 0; i < bookCount; i++)
        {
            for (int j = i + 1; j < bookCount; j++)
            {
                if (libraryCatalog[i].title > libraryCatalog[j].title)
                {
                    swap = libraryCatalog[i].title;
                    libraryCatalog[i].title = libraryCatalog[j].title;
                    libraryCatalog[j].title = swap;
                }
            }
        }

        break;
    }
    case 2:
    {

        string swap;

        for (int i = 0; i < bookCount; i++)
        {
            for (int j = i + 1; j < bookCount; j++)
            {
                if (libraryCatalog[i].ISBN > libraryCatalog[j].ISBN)
                {
                    swap = libraryCatalog[i].ISBN;
                    ;
                    libraryCatalog[i].ISBN = libraryCatalog[j].ISBN;
                    libraryCatalog[j].ISBN = swap;
                }
            }
        }

        break;
    }
    case 3:
    {
        string swap;

        for (int i = 0; i < bookCount; i++)
        {
            for (int j = i + 1; j < bookCount; j++)
            {
                if (libraryCatalog[i].ISBN > libraryCatalog[j].ISBN)
                {
                    swap = libraryCatalog[i].ISBN;
                    ;
                    libraryCatalog[i].ISBN = libraryCatalog[j].ISBN;
                    libraryCatalog[j].ISBN = swap;
                }
            }
        }

        break;
    }
    default:
        cout << "Error" << endl;
    }
}

void displayCatalog()
{
    if (bookCount == 0)
    {
        cout << "Library catalog is empty.\n";
        return;
    }

    cout << setw(20) << "Title" << setw(20) << "Author" << setw(15) << "ISBN" << endl;
    cout << "--------------------------------------------------------------" << endl;

    for (int i = 0; i < bookCount; ++i)
    {
        cout << setw(20) << libraryCatalog[i].title << setw(20) << libraryCatalog[i].author << setw(15) << libraryCatalog[i].ISBN << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "|-----------------------------------| " << endl;
        cout << "| Library Catalog Management System |" << endl;
        cout << "|-----------------------------------| " << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Search by Title" << endl;
        cout << "3. Search by Author" << endl;
        cout << "4. Search by ISBN" << endl;
        cout << "5. Sort Catalog" << endl;
        cout << "6. Display Catalog" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: " << endl;
        ;
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchByTitle();
            break;
        case 3:
            searchByAuthor();
            break;
        case 4:
            searchByISBN();
            break;
        case 5:
            sortCatalog();
            break;
        case 6:
            displayCatalog();
            break;
        case 7:
            cout << "Exiting the program" << endl;
            return 0;
        default:
            cout << "Invalid" << endl;
        }
    } while (choice > 0 && choice < 8);

    return 0;
}
