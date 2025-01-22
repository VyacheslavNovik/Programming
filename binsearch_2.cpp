#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cout << "введите количество верёвок ";
    std::cin >> n;
    int x;

    std::vector<int> V = {};

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        V.push_back(x);
    }

    int a;
    std::cout << "введите a ";
    std::cin >> a;

    int k;
    for (int i = 0; i < n; i++)
    {
        k += V[i];
    }

    int l = 0;
    int r = k + 1;

    int m;
    
    while (r - l > 1)
    {
        m = (l + r) / 2;

        int b = 0;
        for (int i = 0; i < n; i++)
        {
            b += V[i] / m;
        }

        if (b >= a)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    std::cout << l;
}
