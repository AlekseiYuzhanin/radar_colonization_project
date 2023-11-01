#include <stdio.h>

int main()
{
    int N;
    printf("Введите количество воды, необходимое для сбора: ");
    scanf("%d", &N);
    
    int days = 1;
    int factory = 1;
    int collected_water = 0;
    int drone = 0;
    
    while(collected_water < N)
    {
        ++days;
        if(days == 2)
        {
            ++drone;
            ++collected_water;
        }
        else if(days == 3)
        {
            if(drone >= 2)
            {
                collected_water+=drone;
            }
            else
            {
                if(drone+factory == 2)
                {
                    ++drone;
                }
                else
                {
                    ++factory;
                }
            }    
        }
        else{
            collected_water+=drone;
        }
    }
    printf("Минимальное количество суток, необходимое для сбора %d единиц воды: %d\n", N, days);
    
    return 0;
}