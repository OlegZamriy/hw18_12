#include "Book.h"

Book::Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pageCount)
    : author(author), title(title), publisher(publisher), year(year), pageCount(pageCount) {}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}

int Book::getPageCount() const {
    return pageCount;
}
