#include <iostream>
/*
Resturant rating program
M6T1
McCollum, Joseph
5/5/24
*/

using namespace std;

//Defining the Class
class Resturant
{
public:
    //Sets the name/rating/and prints the resturant
    void SetName(string resturantName);
    void SetRating(int returantRate);
    void Print();

private:
    string name;
    int rating;
};


//Functions that are defined using the class that was created
void Resturant::SetName(string resturantName)
{
    //This calls the private function of the name that is set from the previous function
    name = resturantName;
}

void Resturant::SetRating(int resturantRate)
{
    rating = resturantRate;
}

void Resturant::Print()
{
    cout << name << "" << rating << " star('s)" << endl;
}


//The main program
int main()
{
    Resturant firstRest;
    firstRest.SetName("Jersey Mike's");
    firstRest.SetRating(8);
    firstRest.Print();

    cout << "**********" << endl;
    cout << "**********" << endl;


    Resturant secondRest;
    secondRest.SetName("McDonald's ");
    secondRest.SetRating(1);
    secondRest.Print();
    cout << "**********" << endl;

    return 0;
}
