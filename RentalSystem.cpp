//
// Created by klaudia on 01.12.18.
//

#include <bits/streambuf_iterator.h>
#include <iostream>
#include "RentalSystem.h"

std::vector<std::pair<DVD, int>> RentalSystem::filterGenre(Genre genre) {
    std::vector<std::pair<DVD, int>> foundMovies = {};
    for (std::pair search: getBase()) {
        if (search.first.getGenre() == genre) {
            foundMovies.emplace_back(search);
        }
    }
    if (foundMovies.size() != 0) {
        std::cout << "Found movies:" << std::endl;
        for (std::pair found:foundMovies) {
            std::cout << found.first.getTitle() << "\t" << found.second << std::endl;
        }
    } else {
        std::cout << "No movies found" << std::endl;
    }
    return foundMovies;
}

void RentalSystem::returnDVD(DVD movie) {
    addToBase(movie);
    movie.setStatus(inStore);
}

void RentalSystem::rentDVD(DVD movie) {
    removeFromBase(movie);
    movie.setStatus(booked);
}
