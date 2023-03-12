#include<stdio.h>

int main(){
        int i,input_dialog;
        struct dialing_code{
                char *country;
                int code;
        };

        const struct dialing_code country_codes[] = {
                {"Argentina", 54},{"Bangladesh", 800},{"Brazil", 55},{"Burma(Myanmar)", 95},{"China", 86},{"Colombia", 57},{"Congo, Dem. Rep. of",243},{"Egypt", 20},{"Ethiopia", 251},{"France", 33},{"Germany", 49},{"India", 91}
        };

        printf("Enter your dialog: ");
        scanf("%d",&input_dialog);

        for(i=0;i<12;i++){
                if(input_dialog == country_codes[i].code){
                        puts(country_codes[i].country);
                        return 0;
                }
        }
        printf("no country_code in program\n");
}