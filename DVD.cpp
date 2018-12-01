//
// Created by klaudia on 01.12.18.
//

#include "DVD.h"

DVD::DVD(Status status, Genre genre, std::string title, double price) {
    this->status = status;
    this->genre = genre;
    this->title = title;
    this->price = price;
}

Status DVD::getStatus() {
    return status;
}

void DVD::setStatus(Status status) {
    DVD::status = status;
}

Genre DVD::getGenre() {
    return genre;
}

void DVD::setGenre(Genre genre) {
    DVD::genre = genre;
}

const std::string &DVD::getTitle() {
    return title;
}

void DVD::setTitle(std::string &title) {
    DVD::title = title;
}

double DVD::getPrice() {
    return price;
}

void DVD::setPrice(double price) {
    DVD::price = price;
}

bool DVD::operator==(const DVD &rhs) const {
    return status == rhs.status &&
           genre == rhs.genre &&
           title == rhs.title &&
           price == rhs.price;
}
