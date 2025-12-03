#include<iostream>
using namespace std;

void Count(string str)
{

    int upper = 0, lower = 0;

    for (int i = 0; i < str.length(); i++)

    {
        if (str[i] >= 'A' && str[i] <= 'Z')

            upper++;

        else if (str[i] >= 'a' && str[i] <= 'z')

            lower++;

    }

    cout << lower << " " << upper;

}

int main()
{
    string str;
    cin >> str;
    Count(str);
    return 0;
}