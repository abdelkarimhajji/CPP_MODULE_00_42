#include <iostream>

int main(int ac, char **av) {
    int i = 0;
    int j = 0;

    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if(av[i][j] >='a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            std::cout << av[i][j];
            j++;
        }
         std::cout << std::endl;
        i++;
    }
    return 0;
    
}
