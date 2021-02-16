#include <iostream>

using namespace std;



int main()
{
    FILE *f;
    f = fopen("in.txt", "r");
    if(!f)
        perror("Error on reading! Error message: "), exit(1);

    return 0;
}
