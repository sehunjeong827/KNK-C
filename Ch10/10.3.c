#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight,flush,four,three;
int pairs;

void read_cards(int[][2]);
void analyze_hand(int[][2]);
void print_result(void);

int main(){
        for(;;){
                int hand[5][2]; // [rank][suit]
                read_cards(hand);
                analyze_hand(hand);
                print_result();
        }
        return 0;
}

void read_cards(int hand[][2]){
        char ch, rank_ch, suit_ch;
        int rank, suit;
        bool bad_card;
               int cards_read = 0;

        for(int i=0;i<5;i++)
                for(int j=0;j<2;j++)
                        hand[i][j] = 0;

        while(cards_read<NUM_CARDS){
                bad_card = false;
                printf("Enter a card: ");
                rank_ch = getchar();
                switch(rank_ch){
                        case '0': exit(EXIT_SUCCESS);
                        case '2': hand[cards_read][0] = 0; break;
                        case '3': hand[cards_read][0] = 1; break;
                        case '4': hand[cards_read][0] = 2; break;
                        case '5': hand[cards_read][0] = 3; break;
                        case '6': hand[cards_read][0] = 4; break;
                        case '7': hand[cards_read][0] = 5; break;
                        case '8': hand[cards_read][0] = 6; break;
                        case '9': hand[cards_read][0] = 7; break;
                        case 't': case 'T': hand[cards_read][0] = 8; break;
                        case 'j': case 'J': hand[cards_read][0] = 9; break;
                        case 'q': case 'Q': hand[cards_read][0]= 10; break;
                        case 'k': case 'K': hand[cards_read][0] = 11; break;
                        case 'a': case 'A': hand[cards_read][0] = 12; break;
                        default: bad_card = true;
                }
                suit_ch = getchar();
                               switch(suit_ch){
                        case 'c': case 'C': hand[cards_read][1] = 0; break;
                        case 'd': case 'D': hand[cards_read][1] = 1; break;
                        case 'h': case 'H': hand[cards_read][1] = 2; break;
                        case 's': case 'S': hand[cards_read][1] = 3; break;
                        default: bad_card = true;
                }
                while((ch = getchar()) != '\n')
                        if(ch != ' ') bad_card = true;
                if(bad_card){
                        printf("Bad card: ignored.\n");
                        cards_read--;
                }
                for(int i=0;i<cards_read;i++){
                        if(hand[i][0]==hand[cards_read][0]&&hand[i][1]==hand[cards_read][1]){
                                printf("Duplicate card: ignored\n");
                                cards_read--;
                                break;
                        }
                }
                cards_read++;
        }
}
void analyze_hand(int hand[][2]){
        int num_consec = 0;
        int rank,suit;
        straight = false;
        flush = false;
                four = false;
        three = false;
        pairs = 0;

        int val = hand[0][1],equal = 0;
        for(int i = 0;i<NUM_CARDS;i++){
                if(val == hand[i][1]) equal++;
                if(equal == 5) flush =true;
        }

        bool a=false,b=false,c=false,d=false,e=false;
        for(int i=0;i<NUM_CARDS;i++){
                if(hand[i][0] == 0) a = true;
                if(hand[i][0] == 1) b = true;
                if(hand[i][0] == 2) c = true;
                if(hand[i][0] == 3) d = true;
                if(hand[i][0] == 4) e = true;
                if(a==true&&b==true&&c==true&&d==true&&e==true){
                        straight = true;
                        return;
                }
        }

        for(int a = 5; a>1;a--){
                int max = -1,index;
                for(int i=0;i<a;i++){
                        if(max<hand[i][0]){
                                max = hand[i][0];
                                                                index = i;
                        }
                }
                hand[index][0] = hand[a-1][0];
                hand[a-1][0] = max;
        }
        int val_pair = hand[0][0],h=0,past;
        for(int i=1;i<NUM_CARDS;i++){
                if(val_pair == hand[i][0]) h++;
                else{
                        past = h;
                        h = 0;
                }
                val_pair = hand[i][0];
        }
        if(h == 1) pairs++;
        if(h == 2) three = true;
        if(h == 3) four = true;
}
void print_result(){
        if(straight && flush) printf("Straight flush");
        else if(four) printf("Four of a kind");
        else if(three && pairs==1) printf("Full house");
        else if(flush) printf("Flush");
        else if(straight) printf("Straight");
        else if(three) printf("Three of a kind");
        else if(pairs == 2) printf("Two pairs");
        else if(pairs == 1) printf("Pair");
        else printf("High card");
        printf("\n\n");
}