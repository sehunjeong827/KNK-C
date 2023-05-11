#include<stdlib.h>
#include"readline.h"

#define NAME_LEN 25

struct part{
        int number;
        char name[NAME_LEN+1];
        int on_hand;
        double price;
}*inventory;

int MAX_PARTS = 10;
int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(){
        char code;
        if((inventory = malloc(MAX_PARTS * sizeof(struct part))) == NULL){
                printf("Error: malloc\n");
                exit(EXIT_FAILURE);
        }

        for(;;){
                           printf("Enter operation code: ");
                scanf(" %c",&code);
                while(getchar() != '\n');

                switch(code){
                        case 'i': insert();
                                  break;
                        case 's': search();
                                  break;
                        case 'u': update();
                                  break;
                        case 'p': print();
                                  break;

                        case 'q': return 0;
                        default: printf("Illegal code\n");
                }
                printf("\n");
        }
}

int find_part(int number){
        int i;

        for(i=0;i<num_parts;i++){
                if(inventory[i].number == number) return i;
        }
        return -1;
        }

void insert(void){
        int part_number;

        if(num_parts == MAX_PARTS){
                if((inventory = realloc(inventory, sizeof(struct part) * (MAX_PARTS *=2))) == NULL){
                        printf("Error: alloc\n");
                        exit(EXIT_FAILURE);
                }
        }

        printf("Enter part number: ");
        scanf("%d", &part_number);

        if(find_part(part_number) >= 0){
                printf("Part already exists.\n");
                return;
        }

        inventory[num_parts].number = part_number;
        printf("Enter part name: ");
        read_line(inventory[num_parts].name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d",&inventory[num_parts].on_hand);
        printf("Enter price: ");
        scanf("%lf",&inventory[num_parts].price);
        num_parts++;
        }

void search(void){
        int i,number;

        printf("Enter part number: ");
        scanf("%d", &number);
        i = find_part(number);
        if(i >= 0){
                printf("Part name: %s\n",inventory[i].name);
                printf("Quantity on hand %d\n",inventory[i].on_hand);
                printf("Price %lf\n",inventory[i].price);
        }
        else printf("Part not found.\n");
}

void update(void){
        int i, number, change;
        double price;

        printf("Enter part name: ");
        scanf("%d", &number);
        i = find_part(number);
        if(i >= 0){
                printf("Enter change in quantity on hand: ");
                scanf("%d",&change);
                inventory[i].on_hand += change;

                printf("Enter change in price: ");
                scanf("%lf",&price);
                inventory[i].price += price;
        }
        else printf("Part not found.\n");
}

void print(void){
        int i;

        printf("Part Number     Part Name           Quantity on hand            Price\n");
        for(i=0;i<num_parts;i++)
                printf("%7d              %-20s%8d                %.3lf\n", inventory[i].number,inventory[i].name,inventory[i].on_hand,inventory[i].price);
}