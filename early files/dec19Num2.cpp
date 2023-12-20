#include <iostream>
#include <string>

using std::cout;
using std::cin;

void readNextPost();

int main() {

    int numCatPost = 0, numDogPost = 0, numAnimalPost = 0;
    bool enoughCat = false, enoughDog = false, enoughAnimal = false;
    int numDomesticNews = 0, numInterNews = 0, numSportNews = 0, numOtherNews = 0;
    bool enoughDomesticNews = false, enoughInterNews = false;
    bool enoughSportNews = false, enoughOtherNews = false;

    const bool enoughCute = enoughCat && enoughDog && enoughAnimal;
    const bool enoughNews = enoughDomesticNews && enoughInterNews
        && enoughSportNews && enoughOtherNews;
    const bool enoughPosts = enoughCute && enoughNews;


    std::string postContents[1000] = {"cat", "dog", "..."};
    while (!enoughPosts) {
        int i = 0;
        if (!enoughCat) if (postContents[i] == "cat") {
            numCatPost++;
            if (numCatPost > 5) enoughCat = true;
        }
        else if (enoughCat && postContents[i] == "cat") {i++; continue;}
        //etc.
        else if (!enoughDog) if (postContents[i] == "dog") {
            numDogPost++;
            if (numDogPost > 5) enoughDog = true;
        }
        else if (enoughDog && postContents[i] == "dog") {i++; continue;}
        //etc.
        else if (!enoughSportNews) if (postContents[i] == "sport news") {
            numSportNews++;
            if (numSportNews > 5) enoughSportNews = true;
        }
        else if (enoughSportNews && postContents[i] == "sport news") {i++; continue;}
        //etc.
        else {
            numOtherNews++;
            if (numOtherNews > 5) enoughOtherNews = true;
        }
        i++;
    }



    return 0;
}