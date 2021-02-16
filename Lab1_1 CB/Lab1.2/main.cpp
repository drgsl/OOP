#include <iostream>
#include <cstring>

using namespace std;

struct word{

char txt[32];

};

int main()
{
    char str[255];
    scanf("%[^\n]s", str);

    char *p = strtok(str, " ");

    word words[10];
    while(p){
            cout<< p<<endl;
        p = strtok(NULL, " ");
    }
    return 0;
}
