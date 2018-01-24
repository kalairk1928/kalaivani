#include <iostream>

int main()
{
    int a, b, c, d;

    cout << "Enter two numbers(intervals): ";
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b << " are: ";

    while (a < b)
    {
        d = 0;

        for(c = 2; c <= a/2; ++c)
        {
            if(a % c == 0)
            {
                d = 1;
                break;

        if (d== 0)
            cout << a << " ";

        ++a;
    }

    return 0;
}
