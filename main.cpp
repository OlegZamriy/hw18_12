#include <iostream>
#include "Book.h"

int main() {
    Book book1("Author1", "Title1", "Publisher1", 2020, 200);
    Book book2("Author2", "Title2", "Publisher2", 2018, 150);
    Book book3("Author1", "Title3", "Publisher1", 2022, 180);
    Book book4("Author3", "Title4", "Publisher2", 2021, 220);

    Book books[] = { book1, book2, book3, book4 };

    std::string targetAuthor = "Author1";
    std::cout << "Books by author " << targetAuthor << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == targetAuthor) {
            std::cout << book.getTitle() << " (" << book.getYear() << ")\n";
        }
    }

    std::string targetPublisher = "Publisher2";
    std::cout << "\nBooks published by " << targetPublisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == targetPublisher) {
            std::cout << book.getTitle() << " (" << book.getYear() << ")\n";
        }
    }

    int targetYear = 2019;
    std::cout << "\nBooks published after " << targetYear << ":\n";
    for (const auto& book : books) {
        if (book.getYear() > targetYear) {
            std::cout << book.getTitle() << " (" << book.getYear() << ")\n";
        }
    }

    return 0;
}
