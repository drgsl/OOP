#include <iostream>

using namespace std;

int convert_str_to_int(char str[]){
cout<<str<<" ";
return 0;
}


int main()
{
    FILE *f;
    f = fopen("in.txt", "r");
    if(!f)
        perror("Error on reading! Error message: "), exit(1);

    int sum;

    for(int i= 0; i<4; i++)
    {
        char buf[10];
        fscanf(f,"%s", &buf);
        sum+=convert_str_to_int(buf);
    }
    return 0;
}
