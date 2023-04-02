#include <stdio.h>
int calculate_hand(char *hand)
{
    int sum = 0;
    int aces = 0;
    int i = 0;
    while(hand[i] != '\0')
    {
        switch (hand[i])
        {
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                sum += hand[i] - '0';
                break;
            case 'J':
            case 'Q':
            case 'K':
                sum += 10;
                break;
            case 'A':
                sum += 11;
                aces++;
                break;
        }

        while (sum > 21 && aces > 0)
        {
            sum -= 10;
            aces--;
        }
        i++;
    }
    return sum;
}
int main(int ac, char **argv)
{
    int hand;
    if (ac != 2)
        return (1);
    else if(ac == 2)
        {
            hand = calculate_hand(argv[1]);
        }
    if (hand == 21)
         printf("Blackjack!\n");
    else
        printf("%d\n", hand);
    return(0);
}