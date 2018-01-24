#include <iostream>

int main()
{
    int k, b, c, d;

    cout << "Enter two numbers(intervals): ";
    cin >> k >> b;

    cout << "Prime numbers between " << k<< " and " << b << " are: ";

    while (k < b)
    {
        d = 0;

        for(c = 2; c <= k/2; ++c)
        {
            if(k% c == 0)
            {
                d = 1;
                break;

        if (d== 0)
            cout << a << " ";

        ++k;
    }

    return 0;
}
