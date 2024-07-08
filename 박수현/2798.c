#include <stdio.h>

int main()
{
    int card_num, dealer_pick, card[100], Sum = 0;

    scanf("%d %d", &card_num, &dealer_pick);
    for (int i = 0; i < card_num; i++)
        scanf("%d", &card[i]);

    for (int i = 0; i < card_num; i++) {
        for (int j = i + 1; j < card_num; j++) {
            for (int k = j + 1; k < card_num; k++) {
                int now_sum = card[i] + card[j] + card[k];
                if (now_sum <= dealer_pick && now_sum > Sum)
                    Sum = now_sum;
            }
        }
    }
    printf("%d", Sum);
    return 0;
}
