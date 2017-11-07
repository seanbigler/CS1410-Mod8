#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *str = "Waldo is the best mascot in Utah.";
    int len = strlen(str);

    char *ptr;      // makes a pointer to char
    prt = new char[len + 1];    // set aside memory: string + null character '\0'
    strcpy(ptr, str);
    cout << "Original: " << str << endl;
    cout << "Copy: " << ptr << endl;
    
    delete[] ptr;   // release ptr's memory

    return 0;
}