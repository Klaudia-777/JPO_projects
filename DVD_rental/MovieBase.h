//
// Created by klaudia on 01.12.18.
//

#ifndef DVD_RENTAL_MOVIEBASE_H
#define DVD_RENTAL_MOVIEBASE_H


#include <utility>
#include <vector>
#include <algorithm>
#include "DVD.h"

class MovieBase : public DVD {

private:
    std::vector<std::pair<DVD, int>> base;

public:
    MovieBase(Status status, Genre genre, std::string &title, double price,
              std::vector<std::pair<DVD, int>> &base);

    void addToBase(DVD object);

    void removeFromBase(DVD movie);

    const std::vector<std::pair<DVD, int>> &getBase() const;
};


#endif //DVD_RENTAL_MOVIEBASE_H
