//
// Created by klaudia on 01.12.18.
//

#include <bits/streambuf_iterator.h>
#include "MovieBase.h"


MovieBase::MovieBase(Status status, Genre genre, std::string &title, double price,
                     std::vector<std::pair<DVD, int>> &base) : DVD(status, genre, title, price), base(base) {
    this->base = base;
}

void MovieBase::addToBase(DVD object) {
    std::pair<DVD, int> toAdd = std::make_pair(object, 1);
    for (std::pair<DVD, int> add : base) {
        if (add.first == object) add.second++;
        else base.emplace_back(toAdd);
    }

}

void MovieBase::removeFromBase(DVD movie) {
    std::pair<DVD, int> toRemove = std::make_pair(movie, 0);
    for (int i = 0; i < base.size(); i++) {
        if (base[i] == toRemove) base.erase(base.begin() + i);
        else if (base[i].first == movie && base[i].second != 0) base[i].second--;
    }
}

const std::vector<std::pair<DVD, int>> &MovieBase::getBase() const {
    return base;
}
