#include<stdio.h>
int main(){
    int arr[200];
    int s=0;
    int choice;
    while(1){
        printf("\n--Naruoto Arry Jutsu Manu--\n");
        printf("1.Summon arry(input size and values)\n");
        printf("2.use Rassengan on one element(update the value)\n");
        printf("3.Use Shadow Clone Removal(delete the element)\n");
        printf("4.Show Team7( display the arry)\n");
        printf("5.Control The Chakra(sort array asc/desc)\n");
        printf("6.Use Byakugan(search for value)\n");
        printf("7.say 'Dattebayo!' end axit\n");
        printf("Your Choice,ninja?");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("How many ninja tool(1-200) you wanna summon?");
                scanf("%d",&s);
                if(s<=0||s>200){
                    printf("Thats not a ninja math! Try between 1 and 200.\n");
                    s=0;
                    break;
                }
                printf("Enter your ninja tools:\n");
                for(int i=0; i<s; i++){
                    printf("Too%d:",i+1);
                    scanf("%d",&arr[i]);
                }
                break;
                }

            case 2:{
                if(s==0){
                    printf("NO tools to Rasengan!Use option 1 first, Naruto.\n");
                    break;
                }
                int i;
                printf("which tool index to hit with Rasengan(0 to %d)?",s-1);
                scanf("%d",&i);
                if(i>=0&&i<s){
                    printf("New power level?");
                    scanf("%d",&arr[i]);
                    printf("Boom! Tool %d powered up!\n",i);
                }else{
                    printf("That index doesn't exist in the Hidden Leaf village!\n ");
                }
                break;
                }

            case 3:{
                if(s==0){
                    printf("No shadow clones to remove! Use option 1 first.\n");
                    break;
                }
                int v;
                printf("which value to erase from existance?");
                scanf("%d",&v);
                int found=0;
                for(int i=0; i<s; i++){
                    if(arr[i]==v){
                        for( int j=1; j<s-1; j++){
                            arr[j]=arr[j+1];
                        }
                        s--;
                        found=1;
                        printf("shadow clone %d deleted!\n",v);
                        break;
                    }
                }
                if(!found){
                    printf("Shadow clone %d deleted!\n",v);
                }
                break;
            }

            case 4:{
                if(s==0){
                    printf("The Team 7 is empty! Go summon some members.\n");
                    break;
                }
                printf ("Team 7 status:");
                for(int i=0; i<s; i++){
                    printf("%d",arr[i]);
                }
                printf("\n");
                break;
            }

            case 5: {
                if (s == 0) {
                    printf("No chakra to control. Use option 1 first.\n");
                    break;
                }
                char o;
                printf("Sort with chakra flow (A for Ascending, D for Descending): ");
                scanf(" %c", &o);
                if (o != 'A' && o != 'a' && o != 'D' && o != 'd') {
                    printf("That's not how chakra works! Choose A or D.\n");
                    break;
                }
                for (int i = 0; i < s - 1; i++) {
                    for (int j = i + 1; j < s; j++) {
                        if ((o == 'A' || o == 'a') && arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                    } else if ((o == 'D' || o == 'd') && arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
            printf("Array chakra now flows in %s order.\n", (o == 'A' || o == 'a') ? "ascending" : "descending");
                break;
            }

            case 6: {
                if (s == 0) {
                    printf("Can't use Byakugan on nothing! Input array first.\n");
                    break;
                }
                int value;
                printf("Which value are you spying with your Byakugan? ");
                scanf("%d", &value);
                int indices[200], count = 0;
                for (int i = 0; i < s; i++) {
                    if (arr[i] == value) {
                        indices[count++] = i;
                    }
                }
                if (count == 0) {
                    printf("Your Byakugan failed! Value not found.\n");
                } else if (count == 1) {
                    printf("Found it! Value %d at index %d.\n", value, indices[0]);
                } else {
                    printf("Value %d found at these places: ", value);
                    for (int i = 0; i < count; i++) {
                        printf("%d ", indices[i]);
                    }
                    printf("\nPick one index: ");
                    int selected;
                    scanf("%d", &selected);
                    int valid = 0;
                    for (int i = 0; i < count; i++) {
                        if (indices[i] == selected) {
                            printf("Locked on value %d at index %d.\n", value, selected);
                            valid = 1;
                            break;
                        }
                    }
                    if (!valid) {
                        printf("That index is from another village! Try again.\n");
                    }
                }
                break;
            }
        case 7: {
                printf("Goodbye, Hokage! Dattebayo!\n");
                return 0;
            }
                        default: {
                printf("Even Naruto knows that's not a valid move! Try again.\n");





            }
            }
        }
        return 0;
    }

