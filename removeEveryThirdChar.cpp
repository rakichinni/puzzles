#include <iostream>
#include <string.h>

using namespace std;

// Removed every third char and prints result
int main()
{
    char str[10] = "raki";

    if (strlen(str) == 1)
    {
        cout << str << endl;
    }

    char* p = str;
    while (strlen(str) != 1)
    {
        for (int i = 2; i > 0; i--)
        {
            if (*p == '\0')
            {
                p = str;
                i++;
            }
            else
                p++;
        }

        if (p == str + strlen(str) - 1)
            str[strlen(str) - 1] = '\0';
        else
        {
            char temp[10] = {};
            if (*p == '\0')
                p = str;
            strcpy(temp, p+1);
            strcpy(p, temp);
        }
        //cout << "*p: " << *p << endl;
        //cout << "str: " << str << endl;
    }
    cout << str << endl;
}
