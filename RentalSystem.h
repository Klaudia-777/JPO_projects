//
// Created by klaudia on 01.12.18.
//

#ifndef DVD_RENTAL_RENTALSYSTEM_H
#define DVD_RENTAL_RENTALSYSTEM_H


#include "DVD.h"
#include "MovieBase.h"
#include "movieGenre.h"

class RentalSystem : public MovieBase {
public:
    void rentDVD(DVD movie);

    void returnDVD(DVD movie);

    std::vector<std::pair<DVD,int>> filterGenre(Genre genre);


};


#endif //DVD_RENTAL_RENTALSYSTEM_H
