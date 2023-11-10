// 1.Write a program to count the minimum number of notes in a given amount using the switch statement.Input 1 : 510 Output1 : notes of “500” = 1 and notes of “10” = 1 Solution :
#include <iostream>
using namespace std;
int main()
{
    int amount;
    int n1, n2, n5, n10, n20, n50, n100, n500;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = 0;
    cout << "Please Enter Your total Amount to find the notes : ";
    cin >> amount;
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount -= n500 * 500;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount -= n100 * 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount -= n50 * 50;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount -= n20 * 20;
        break;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount -= n10 * 10;
        break;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount -= n5 * 5;
        break;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount -= n2 * 2;
        break;
    }
}

// 2.Predict the output :
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b, c;
    b = a = 15;
    c = a < 15;
    cout << "a = " << a << ", b = " << b << " , c = " << c;
    return 0;
}
// Output: a = 15, b = 15, c = 0

// 3.Predict the output :
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    float y = 3.0;
    if (x == y)
        cout << "x and y are equal";
    else
        cout << "x and y are not equal";
    return 0;
}

Solution Output : x and y are equal

// 4.predict the output :
#include <iostream>
                  using namespace std;
int main()
{
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;
    return 0;
}

Solution Output : First character 1 Second character 49

// 5.predict the output :
#include <iostream>
                  using namespace std;
int main()
{
    int a = 18;
    int b = 12;
    bool t = (a > 20 && b < 15) ? true : false;
    cout << "Value of t: " << t;
    return 0;
}

// Solution Output : Value of t : 0

// 6.predict the output :
#include <iostream>
using namespace std;
int main()
{
    int number = -4;
    char result;
    result = number > 0 ? 'P' : 'N';
    cout << result << endl;
    return 0;
}

Output : N