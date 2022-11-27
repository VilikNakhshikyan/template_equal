#include <iostream>
#include <vector>
template <typename T>
bool equal(const std::vector<T> &frist, std::vector<T> second)
{
    bool key = false;
    for (auto &i : second)
    {
        for (auto &j : frist)
        {
            if (i == j)
            {
                key = true;
                break;
            }
        }
        if (!key)
            return false;
        key = false;
    }
    return true;
}

int main()
{
    std::vector<const char *> c_c{"hello", "world", "pass", "error"};
    std::vector<const char *> C_C{"hello", "pass"};
    if (equal(c_c, C_C))
        std::cout << "pass" << std::endl;
    else
        std::cout << "error" << std::endl;

    std::vector<int> i{1, 2, 3, 4, 5, 6};
    std::vector<int> I{2, 6, 1};
    if (equal(i, I))
        std::cout << "pass" << std::endl;
    else
        std::cout << "error" << std::endl;

    std::vector<char> c{'a', 'b', 'c', 'd'};
    std::vector<char> C{'a', 'c'};
    if (equal(c, C))
        std::cout << "pass" << std::endl;
    else
        std::cout << "error" << std::endl;

    std::vector<double> d{1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    std::vector<double> D{2.2, 6.6, 1.1};
    if (equal(d, D))
        std::cout << "pass" << std::endl;
    else
        std::cout << "error" << std::endl;
}