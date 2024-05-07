/*Mar 13 24 M4LAB1 Mccollum J this application uses a nested for loop to draw a symbol using '*' */

#include <iostream>

using namespace std;

int main()
{
    int star = 5;
    int star2 = 5;

    for(int x = 0; x < star; x++){
        for (int i=0; i < star2; i++){
            cout << "* ";
        };
        cout << endl;
    }

    return 0;
}
