/*SNAKE AND LADDERS GAME*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dice(int d);                 // obtaining a random number between 1 to 6
void board();                    // prints the board
int turn(int pos);               // rolls dice and checks the position of the player
int snake(int sn1, int sn2);    
int ladder(int ld1, int ld2);
int check(int val);              // checks for snake and ladders
void rules();                    // prints the rules of the game


int main(){
    int i=1,P;   
    int pos[5]={0,0,0,0};   // initializing the positions of the players 
    char p[10], p1[10], p2[10], p3[10], p4[10];              // initializing names of the players in strings
    int pos1=0, pos2=0 ,pos3=0, pos4=0;

    board();                                   // printing the board

    // GAME STARTS
    printf("\n\n\nEnter the number of players:\n__________Options_________:\n'1':\tSingle Player(Play With Robot)\n'2':\tTwo Players\n'3':\tThree players\n'4':\tFour Players\n'5':\tHow to play and Rules of the game\n");
    scanf("%d",&P);                             //taking number of players from the  user
    getc(stdin);


    switch(P){
        // for single player
        case 1:
        printf("Enter your name:");
        scanf("%s", p1);
        while(pos1<100 && pos2<100){
        printf("\nRound %d\n",i);
            //PLAYER 1
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p1);
            getc(stdin);
            pos1=turn(pos1);   // rolling dice
            printf("Position of %s:%d\n",p1,pos1);
            pos1=check(pos1);   // checking for snake and ladders
            if(pos1==100){
            printf("%s is the winner\nGAME OVER",p1);
            return 0;
            }
            
            // BOT
            printf("\n\nBot's turn.\nPress Enter to see bot's dice number");
            getc(stdin);
            pos2=turn(pos2);   // rolling dice
            printf("Position of %s:%d\n",p2,pos2);
            pos2=check(pos2);   // checking for snake and ladders
            if(pos2==100){
            printf("%s is the winner\nGAME OVER",p2);
            return 0;
            }
            i++; // to increase round number

        }
        break;
        
        
        // for two players
        case 2:
        printf("Enter Player 1's name:");
        scanf("%s", p1);
        printf("Enter Player 2's name:");
        scanf("%s", p2);
        while(pos1<100 && pos2<100){
            printf("\nRound %d\n",i);

            //PLAYER 1
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p1);
            getc(stdin);
            pos1=turn(pos1);   // rolling dice
            printf("Position of %s:%d\n",p1,pos1);
            pos1=check(pos1);   // checking for snake and ladders
            if(pos1==100){
            printf("%s is the winner\nGAME OVER",p1);
            return 0;
            }

            // PLAYER 2
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p2);
            getc(stdin);
            pos2=turn(pos2);   // rolling dice
            printf("Position of %s:%d\n",p2,pos2);
            pos2=check(pos2);   // checking for snake and ladders
            if(pos2==100){
            printf("%s is the winner\nGAME OVER",p2);
            return 0;
            }

            i++;   // increasing the number of rounds
        }
        break;
        
        // for three players
        case 3:
        printf("Enter Player 1's name:");
        scanf("%s", p1);
        printf("Enter Player 2's name:");
        scanf("%s", p2);
        printf("Enter Player 3's name:");
        scanf("%s", p3);
        while(pos1<100 && pos2<100 &&  pos3<100){
            printf("\nRound %d\n",i);

            //PLAYER 1
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p1);
            getc(stdin);
            pos1=turn(pos1);   // rolling dice
            printf("Position of %s:%d\n",p1,pos1);
            pos1=check(pos1);   // checking for snake and ladders
            if(pos1==100){
            printf("%s is the winner\nGAME OVER",p1);
            return 0;
            }

            // PLAYER 2
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p2);
            getc(stdin);
            pos2=turn(pos2);   // rolling dice
            printf("Position of %s:%d\n",p2,pos2);
            pos2=check(pos2);   // checking for snake and ladders
            if(pos2==100){
            printf("%s is the winner\nGAME OVER",p2);
            return 0;
            }
            
            // PLAYER 3
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p3);
            getc(stdin);
            pos3=turn(pos3);   // rolling dice
            printf("Position of %s:%d\n",p3,pos3);
            pos3=check(pos3);   // checking for snake and ladders
            if(pos3==100){
            printf("%s is the winner\nGAME OVER",p3);
            return 0;
        }
        i++;   // increasing the number of rounds
        }
        break;
        
        // for four players
        case 4:
        printf("Enter Player 1's name:");
        scanf("%s", p1);
        printf("Enter Player 2's name:");
        scanf("%s", p2);
        printf("Enter Player 3's name:");
        scanf("%s", p3);
        printf("Enter Player 4's name:");
        scanf("%s", p4);
        while(pos1<100 && pos2<100 &&  pos3<100  && pos4<100){
            printf("\nRound %d\n",i);

           //PLAYER 1
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p1);
            getc(stdin);
            pos1=turn(pos1);   // rolling dice
            printf("Position of %s:%d\n",p1,pos1);
            pos1=check(pos1);   // checking for snake and ladders
            if(pos1==100){
            printf("%s is the winner\nGAME OVER",p1);
            return 0;
            }

            // PLAYER 2
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p2);
            getc(stdin);
            pos2=turn(pos2);   // rolling dice
            printf("Position of %s:%d\n",p2,pos2);
            pos2=check(pos2);   // checking for snake and ladders
            if(pos2==100){
            printf("%s is the winner\nGAME OVER",p2);
            return 0;
            }
            

            // PLAYER 3
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p3);
            getc(stdin);
            pos3=turn(pos3);   // rolling dice
            printf("Position of %s:%d\n",p3,pos3);
            pos3=check(pos3);   // checking for snake and ladders
            if(pos3==100){
            printf("%s is the winner\nGAME OVER",p3);
            return 0;
            }

            // PLAYER 4
            printf("\n%s's turn.\nPress ENTER to roll a dice:",p4);
            getc(stdin);
            pos4=turn(pos4);
            printf("Position of %s:%d\n",p4,pos4);
            pos4=check(pos4);
            if(pos4==100){
            printf("%s is the winner\nGAME OVER",p4);
            return 0;
            }
            i++;   // increasing the number of rounds
        }
        break;

        case 5:
            rules();
            break;
            
        default:
            printf("INPUT VIOLATION!!!");
            break;
    }
    return 0;
}


int dice(int n){
    srand(time(0));
    n=rand()%6+1;
    return n;
}

// rolling dices and updating positions 
int turn(int pos){
    int posd;
    int d,p;
    p=dice(d);
    printf("Number on Dice=%d\n",p);
    posd=pos+p;
    if(posd>100){
        printf("Number on dice too large!\n");
        return pos;
    }
    else{
        return posd;
    }
    
}

int snake(int sn1, int sn2){
    printf("OOOPS you met a snake!\n");
    sn1=sn2;
    printf("Updated position of player is %d\n",sn1);
    return sn1;
}

int ladder(int ld1, int ld2){
    printf("YAYYYY You got a ladder!\n");
    ld1=ld2;
    printf("Updated position of player is %d\n",ld1);
    return ld1;
}

int check (int val){
// checking for snake and ladders
    switch(val){ 
        case 6:
            val=ladder(val,16);
            break;
        case 20:
            val=ladder(val, 60);
            break;
        case 33:
            val=ladder(val,88);
            break;
        case 61:
            val=ladder(val,94);
            break;
        case 85:
            val=snake(val, 65);
            break;
        case 41:
            val=snake(val, 11);
            break;
        case 45:
            val=snake(val,9);
            break;
        case 91:
            val=snake(val, 64);
            break;
        case 99:
            val=snake(val, 79);
            break;
        case 80:
            val=ladder(val,98);
            break;
        default:
            return val;
            break;
    }
    return val;
}

// printing out board
void board(){
    int i;   
    // for 'for' loops

    int arr[100];
    for (i=1; i<101; i++){
        arr[i]=i;
    } // assingning the values  to the board array

    printf("\n*********************  Welcome to the SNAKE AND LADDERS board game *************************\n");
    printf("Here '*' represents Snake and '#' represents Ladder\n\n");
    printf("LADDER 1: 20 TO 60\tSNAKE 1: 45 TO 9\nLADDER 2: 61 TO 94\tSNAKE 2: 91 TO 64\nLADDER 3: 33 TO 88\tSNAKE 3: 41 TO 11\nLADDER 4: 80 TO 98\tSNAKE 4: 99 TO 79\nLADDER 5: 6 TO 16\tSNAKE 5: 85 TO 65\n\n");
    printf("OUR BOARD IS:\n\n");
    for(int i=100; i>0; i--){

        //  for printing a ladder 1
        if (i>30 && i<90){
            if(arr[i]%11==0){ 
                printf("#");}
        }
        // for printing ladder 2
        if(arr[i]==61 || arr[i]==72 || arr[i]==83 || arr[i]==94){
            printf("#");
        }

        // for printing ladder 3
        if(arr[i]==20 || arr[i]==30 || arr[i]==40 || arr[i]==50 || arr[i]==60){
            printf("#");
        }

        // for printing ladder 4
        if(arr[i]==80 || arr[i]==89 || arr[i]==98){
            printf("#");
        }

        // for printing ladder 5
        if(arr[i]==6 || arr[i]==16){
            printf("#");
        }

         // for printing  snake  1
        if (i>0 && i<50){
            if (arr[i]%9==0){
                printf("*");
            }
        }
        // for printing snake 2
        if(arr[i]==91|| arr[i]==82 || arr[i]==73 || arr[i]==64){
            printf("*");
        }


        // for printing snake 3
        if(arr[i]==11 || arr[i]==21 || arr[i]==31 || arr[i]==41){
            printf("*");
        }

        //  for printing snake 4
        if(arr[i]==99 || arr[i]==89 || arr[i]==79){
            printf("*");
        }

        // for printing snake 5
        if(arr[i]==85 || arr[i]==75 || arr[i]==65){
            printf("*");
        }


        // printing the numbers
        printf("%d\t", arr[i]);

        // for printing a newline
        if (arr[i-1]%10==0){
                printf("\n\n");
        }
    }
}

// printing the rules
void rules(){
    printf("\nHOW TO PLAY\n");
    printf("\n-After deciding who will play the game first, the players start moving their game pieces by following the numbers on the board according to the numbers on the die in each turn.\n");
    printf("-They start from the number one and keep on following the other numbers on the board.\n");
    printf("\nGAME RULES\n");
    printf("-When a piece comes on a number which lies on the top of a snake (face of the snake), then the piece/token will land below to the bottom of the snake (tail of it)\nthat can also be said as an unlucky move.\n");
    printf("-If somehow the piece falls on the ladder base, it will immediately climb to the top of the ladder (which is considered to be a lucky move).\n");
    printf("-Whereas if a player lands on the bottom of the snake or top of a ladder, the player will remain in the same spot (same number) and will not get affected by any particular rule.\n-The players can never move down ladders.\n");
    printf("-The pieces of different players can overlap each other without knocking out anyone.\n-There is no concept of knocking out by opponent players in Snakes and Ladders.\n");
    printf("\nWINNING\n");
    printf("-To win, the player needs to roll the exact number of die to land on the number 100.\n-If he/she fails to do so, then the player needs to roll the die again in the next turn.\n");
     printf("-To win, the player needs to roll the exact number of die to land on the number 100.\n-If he/she fails to do so, then the player needs to roll the die again in the next turn.\n");
    printf("-For example, if a player is on the number 98 and the die roll shows the number 4,\nthen the player cannot move its piece until he/she gets a 2 to win or 1 to be on the 99th number.\n");
    printf("-The player who manages to be the first person to reach the top/final square on the board (100) wins.");
}