#include <iostream>
#include <climits>

void segitiga()
{
    int tinggi_segitiga;
    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi_segitiga;

    for (int i = 1; i <= tinggi_segitiga; i++)
    {
        int j = tinggi_segitiga;
        for (; j > i; j--)
        {
            std::cout << " ";
        }
        for (; j >= 1; j--)
        {
            std::cout << j;
        }
        for (j += 2; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void diamond()
{
    int max_angka_diamond;
    std::cout << "Masukkan max angka diamond: ";
    std::cin >> max_angka_diamond;

    for (int i = 1; i <= max_angka_diamond; i++)
    {
        int j = i - max_angka_diamond;
        for (; j < 0; j++)
        {
            std::cout << " ";
        }
        for (j++; j <= i; j++)
        {
            std::cout << j;
        }
        for (j -= 2; j >= 1; j--)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    for (int i = max_angka_diamond - 1; i >= 1; i--)
    {
        int j = i - max_angka_diamond;
        for (; j < 0; j++)
        {
            std::cout << " ";
        }
        for (j++; j <= i; j++)
        {
            std::cout << j;
        }
        for (j -= 2; j >= 1; j--)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

int main()
{
    /*
    SEGITIGA
           1
          212
         32123
        4321234
       543212345
      65432123456
     7654321234567
    876543212345678
    */
    segitiga();

    /*
    DIAMOND
        1
       121
      12321
     1234321
    123454321
     1234321
      12321
       121
        1
    */

    diamond();
}
