#include <iostream>

using namespace std;

int main()
{
    int weekday;
    cin >> weekday;
    if (weekday < 5){
        weekday = 0;
        weekday++;
    }
    else{
        weekday = 1;
    }

    return 0;
}
