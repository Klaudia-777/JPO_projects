//
// Created by klaudia on 01.12.18.
//

#ifndef DVD_RENTAL_DVD_H
#define DVD_RENTAL_DVD_H

#include "movieGenre.h"
#include "Status.h"
#include <string>


class DVD {
private:
    Status status;
    Genre genre;
    std::string title;
    double price;
public:
    DVD(Status status, Genre genre, std::string title, double price);

    Status getStatus();

    void setStatus(Status status);

    Genre getGenre();

    void setGenre(Genre genre);

    const std::string &getTitle();

    void setTitle(std::string &title);

    double getPrice();

    void setPrice(double price);

    bool operator==(const DVD &rhs) const;
};


#endif //DVD_RENTAL_DVD_H
