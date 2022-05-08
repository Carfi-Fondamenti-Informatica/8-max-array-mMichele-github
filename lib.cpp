//
// Created by Michele Maragliano on 03/05/22.
//

float comparatore(float numeri[], int dimensione)
{
    float max = numeri[0];
    for(int i=1; i<dimensione; i++)
    {
        if(numeri[i] > max)
        {
            max = numeri[i];
        }
    }
    return max;
}