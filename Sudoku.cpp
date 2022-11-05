#include <iostream>
#include<windows.h>
#include<ctime>
using namespace std;
int main()
{A: HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
    int i,j,n,k=0,r,c,tries=0,check=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,grid[9][9],counter;
    string choice,cont;
    for(i=0;i<9;i++)
    for(j=0;j<9;j++)
        grid[i][j]=0;
         cout<<"HI, WELCOME"<<endl;
    cout<<"PLEASE SELECT A LEVEL:"<<endl<<endl;
    cout<<"FOR BEGINNER     TYPE: B"<<endl;
    cout<<"FOR NORMAL       TYPE: E"<<endl;
    cout<<"FOR HARD         TYPE: H"<<endl;
    cout<<"FOR EXPERT       TYPE: EX"<<endl;
    cout<<"TO EXIT          TYPE: 101"<<endl<<endl;
    cin>>choice;
    system("cls");
        if(choice=="B"){
            cout<<"THE AIM OF A SUDOKU GAME IS USING THE NUMBERS 1-9 WITHOUT REPITITION IN EVERY ROW, COLUMN AND EACH 3x3 BOXES INSIDE"<<endl;
            cout<<"THE NUMBERS THAT ARE COLOURED BLUE CANNNOT BE CHANGED"<<endl;
            cout<<"THE NUMBERS YOU CAN CHANGE ARE COLOURED WHITE AND HAVE BEEN GIVEN A VALUE OF 0(N.B THE VALUE WILL BE CHANGED FROM ZERO WHEN YOU INSERT A VALUE)"<<endl;
system("cls");grid[0][0]=5;
 grid[0][2]=8;
 grid[0][3]=3;
 grid[0][5]=9;
 grid[0][6]=4;
 grid[0][8]=2;
 grid[1][7]=6;
 grid[1][1]=9;
 grid[1][4]=5;
 grid[1][5]=2;
 grid[2][0]=2;
 grid[2][2]=4;
 grid[2][3]=6;
 grid[2][6]=5;
 grid[2][8]=1;
 grid[3][2]=9;
 grid[3][3]=5;
 grid[3][5]=4;
 grid[3][6]=7;
 grid[3][7]=2;
 grid[4][0]=3;
 grid[4][1]=2;
 grid[4][4]=9;
 grid[4][8]=4;
 grid[5][1]=8;
 grid[5][2]=7;
 grid[5][3]=2;
 grid[5][4]=3;
 grid[5][6]=9;
 grid[5][8]=5;
 grid[6][1]=4;
 grid[6][2]=3;
 grid[6][3]=8;
 grid[6][6]=2;
 grid[6][8]=9;
 grid[7][0]=8;
 grid[7][4]=2;
 grid[7][5]=3;
 grid[7][7]=4;
 grid[8][1]=7;
 grid[8][3]=1;
 grid[8][6]=8;
 grid[8][8]=6;
 grid[8][1]=7;
 grid[8][2]=2;
 grid[8][5]=5;
 grid[8][6]=8;}
 else if(choice=="E"){
             grid[0][1]=2;
             grid[0][2]=7;
             grid[0][4]=5;
             grid[0][7]=9;
             grid[1][1]=6;
             grid[1][4]=2;
             grid[1][5]=7;
             grid[1][6]=1;
             grid[1][8]=8;
             grid[2][0]=3;
             grid[2][3]=6;
             grid[2][8]=2;
             grid[3][0]=5;
             grid[3][4]=6;
             grid[3][7]=7;
             grid[4][0]=4;
             grid[4][2]=2;
             grid[4][3]=5;
             grid[4][6]=6;
             grid[4][8]=9;
             grid[5][1]=1;
             grid[5][4]=7;
             grid[5][5]=2;
             grid[5][7]=3;
             grid[6][0]=7;
             grid[6][5]=5;
             grid[6][7]=1;
             grid[6][8]=4;
             grid[7][1]=5;
             grid[7][3]=7;
             grid[7][4]=9;
             grid[8][1]=3;
             grid[8][2]=9;
             grid[8][5]=1;
             grid[8][6]=5;
             grid[8][7]=6;}
 else if(choice=="H"){
            grid[0][1]=9;
            grid[0][5]=8;
            grid[0][7]=7;
            grid[1][2]=4;
            grid[1][5]=2;
            grid[1][7]=1;
            grid[2][0]=7;
            grid[2][3]=6;
            grid[2][8]=9;
            grid[3][3]=8;
            grid[3][6]=3;
            grid[4][0]=9;
            grid[4][1]=3;
            grid[4][5]=6;
            grid[4][7]=5;
            grid[4][8]=7;
            grid[5][2]=8;
            grid[5][4]=3;
            grid[6][1]=6;
            grid[6][4]=5;
            grid[6][7]=9;
            grid[7][0]=8;
            grid[7][3]=7;
            grid[7][5]=4;
            grid[7][8]=2;
            grid[8][2]=2;
            grid[8][6]=7;}
 else if(choice=="EX"){string cont1;
        cout<<"EXPERT LEVEL GAMES MAYBE UNSOLVABLE"<<endl;
        cout<<"ARE YOU SURE YOU WANT TO CONTINUE(yes/no)"<<endl;
        cin>>cont1;
    if(cont1=="yes"){
             system("cls");
                srand(time(0));
                grid[0][7]=(rand()%9+1);
                grid[1][1]=(rand()%9+1);
                grid[2][5]=(rand()%9+1);
                grid[3][0]=(rand()%9+1);
                grid[4][4]=(rand()%9+1);
                grid[5][8]=(rand()%9+1);
                grid[6][3]=(rand()%9+1);
                grid[7][2]=(rand()%9+1);
                grid[8][6]=(rand()%9+1);}
                else{ goto A;}}
 else if(choice=="101"){
        cout<<"ARE YOU SURE YOU WANT TO EXIT ALL SAVED PROGRESS WILL BE LOST(yes/no)"<<endl;
        cin>>choice;
        if(choice=="yes"){ goto Z;}
        else{ goto A;}}
 else{
    cout<<"WRONG OPERATION SELECTED!!! PLEASE TRY AGAIN"<<endl;
    goto A;}
 for(i=0;i<9;i++)
 for(j=0;j<9;j++){
    if(grid[i][j]!=0){
        SetConsoleTextAttribute(out,1);
        cout<<grid[i][j]<<"    ";
         if(j==8)
            cout<<endl;}
        else{
        SetConsoleTextAttribute(out,15);
        cout<<grid[i][j]<<"    ";
        if(j==8)
            cout<<endl;}}
        SetConsoleTextAttribute(out,15);
        //#########################################################################################################################################################################################################################################
             do{
                    counter=0;
    cout<<"A VALUE OF ZERO(0) MEANS AN EMPTY VALUE"<<endl;
    cout<<"YOU MADE "<<tries<<" VALUE CHANGES"<<endl;
    cout<<"TO QUIT THE GAME TYPE: 101 "<<endl;
 ROW: cout<<"PLEASE ENTER THE ROW"<<endl;
    cin>>r;
    if(r==101){
        cout<<"DO YOU REALLY WANT TO LEAVE THE GAME ALL PROGRESS WILL BE LOST(yes/no)"<<endl;
        cin>>choice;
        if(choice=="yes"){
            goto A;}
        else {
            goto ROW;}}
    else if(r<=0||r>=10){
        cout<<"NUMBER OF ROW MUST BE BETWEEN 1 & 9(INCLUSIVE)"<<endl;
        goto ROW;}
        else{
            COLUMN:cout<<"PLEASE ENTER THE COLUMN"<<endl;
            cin>>c;
            if(c==101){
        cout<<"DO YOU REALLY WANT TO LEAVE THE GAME ALL PROGRESS WILL BE LOST(yes/no)"<<endl;
        cin>>choice;
        if(choice=="yes"){
            goto A;}
        else{
            goto COLUMN;}}
    else if(c<=0||c>=10){
            cout<<"NUMBER OF COLUMN MUST BE BETWEEN 1 & 9(INCLUSIVE)"<<endl;
            goto COLUMN;}
    else{
            if((choice=="B")&&(r==1&&c==1||r==1&&c==6||r==3&&c==9||r==4&&c==6||r==6&&c==3||r==6&&c==9||r==7&&c==3||r==9&&c==4||r==9&&c==7||r==2&&c==5||r==2&&c==8||r==3&&c==1||r==5&&c==2||r==5&&c==9||r==6&&c==4||r==8&&c==1||r==8&&c==5||r==9&&c==9||r==1&&c==3||r==1&&c==4||r==1&&c==7||r==1&&c==9||r==2&&c==2||r==2&&c==6||r==3&&c==3||r==3&&c==4||r==3&&c==7||r==4&&c==3||r==4&&c==4||r==4&&c==7||r==4&&c==8||r==5&&c==1||r==5&&c==5||r==6&&c==2||r==6&&c==5||r==6&&c==7||r==7&&c==2||r==7&&c==4||r==8&&c==8||r==7&&c==9||r==8&&c==6||r==9&&c==2||r==9&&c==3||r==9&&c==6)){
                    cout<<"WRONG ROW AND COLUMN INDEX INSERTED. THE VALUES AT THE INDEX YOU ENTERED CAN NOT BE CHANGED"<<endl;
                    goto ROW;}
            else if((choice=="E")&&(r==1&&c==2||r==1&&c==3||r==1&&c==5||r==1&&c==8||r==2&&c==2||r==2&&c==5||r==2&&c==6||r==2&&c==7||r==2&&c==9||r==3&&c==1||r==3&&c==4||r==3&&c==9||r==4&&c==1||r==4&&c==5||r==4&&c==8||r==5&&c==1||r==5&&c==3||r==5&&c==4||r==5&&c==7||r==5&&c==9||r==6&&c==2||r==6&&c==5||r==6&&c==6||r==6&&c==8||r==7&&c==1||r==7&&c==6||r==7&&c==8||r==7&&c==9||r==8&&c==2||r==8&&c==4||r==8&&c==5||r==9&&c==2||r==9&&c==3||r==9&&c==6||r==9&&c==7||r==9&&c==8)){
                 cout<<"WRONG ROW AND COLUMN INDEX INSERTED. THE VALUES AT THE INDEX YOU ENTERED CAN NOT BE CHANGED"<<endl;
                 goto ROW;}
                else if((choice=="H")&&(r==1&&c==2||r==1&&c==6||r==1&&c==8||r==2&&c==3||r==2&&c==6||r==2&&c==8||r==3&&c==1||r==3&&c==4||r==3&&c==9||r==4&&c==4||r==4&&c==7||r==5&&c==1||r==5&&c==2||r==5&&c==6||r==5&&c==6||r==5&&c==8||r==5&&c==9||r==6 && c==3||r==6&&c==5||r==7&&c==2||r==7&&c==5||r==7&&c==8||r==8&&c==1||r==8&&c==4||r==8&&c==6||r==8&&c==9||r==9&&c==3||r==9&&c==7)){
                     cout<<"WRONG ROW AND COLUMN INDEX INSERTED. THE VALUES AT THE INDEX YOU ENTERED CAN NOT BE CHANGED"<<endl;
                    goto ROW;}
                else if((choice=="EX")&&(r==1&&c==8||r==2&&c==2||r==3&&c==6||r==4&&c==1||r==5&&c==5||r==6&&c==9||r==7&&c==4||r==8&&c==3||r==9&&c==7)){
                         cout<<"WRONG ROW AND COLUMN INDEX INSERTED. THE VALUES AT THE INDEX YOU ENTERED CAN NOT BE CHANGED"<<endl;
                    goto ROW;}
                    else{
                        VALUE: cout<<"PLEASE ENTER THE VALUE YOU WANT TO STORE"<<endl;
        cin>>n;
        if(n==101){
        cout<<"DO YOU REALLY WANT TO LEAVE THE GAME ALL PROGRESS WILL BE LOST(yes/no)"<<endl;
        cin>>choice;
        if(choice=="yes"){
            goto A;}
        else{ goto VALUE;}}
    else if(n<=0||n>=10){
            cout<<"WRONG ENTRY VALUE YOU ENTER MUST BE BETWEEN 1 & 9(INCLUSIVE)"<<endl;
            goto VALUE;}
        else{
            grid[r-1][c-1]=n;
            system("cls");
            cout<<"YOUR UPDATED LIST IS:"<<endl;
                       for(i=0;i<9;i++){
    for(j=0;j<9;j++)
    if(choice=="B"){
        if(i==0&&j==0||i==0&&j==2||i==0&&j==3||i==0&&j==5||i==0&&j==6||i==0&&j==8||i==1&&j==1||i==1&&j==4||i==1&&j==5||i==1&&j==7||i==2&&j==0||i==2&&j==2||i==2&&j==3||i==2&&j==6||i==2&&j==8||i==3&&j==2||i==3&&j==3||i==3&&j==5||i==3&&j==6||i==3&&j==7||i==4&&j==0||i==4&&j==1||i==4&&j==4||i==4&&j==8||i==5&&j==1||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==5&&j==6||i==5&&j==8||i==6&&j==1||i==6&&j==2||i==6&&j==3||i==6&&j==6||i==6&&j==8||i==7&&j==0||i==7&&j==4||i==7&&j==5||i==7&&j==7||i==8&&j==1||i==8&&j==2||i==8&&j==3||i==8&&j==5||i==8&&j==6||i==8&&j==8){
         SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{
              SetConsoleTextAttribute(out,15);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="E"){
 if(i==0&&j==1||i==0&&j==2||i==0&&j==4||i==0&&j==7||i==1&&j==1||i==1&&j==4||i==1&&j==5||i==1&&j==6||i==1&&j==8||i==2&&j==0||i==2&&j==3||i==2&&j==8||i==3&&j==0||i==3&&j==4||i==3&&j==7||i==4&&j==0||i==4&&j==2||i==4&&j==3||i==4&&j==6||i==4&&j==8||i==5&&j==1||i==5&&j==4||i==5&&j==5||i==5&&j==7||i==6&&j==0||i==6&&j==5||i==6&&j==7||i==6&&j==8||i==7&&j==1||i==7&&j==3||i==7&&j==4||i==8&&j==1||i==8&&j==2||i==8&&j==5||i==8&&j==6||i==8&&j==7){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{
              SetConsoleTextAttribute(out,15);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="H"){
    if(i==0&&j==1||i==0&&j==5||i==0&&j==7||i==1&&j==2||i==1&&j==5||i==1&&j==7||i==2&&j==0||i==2&&j==3||i==2&&j==8||i==3&&j==3||i==3&&j==6||i==4&&j==0||i==4&&j==1||i==4&&j==5||i==4&&j==7||i==4&&j==8||i==5&&j==2||i==5&&j==4||i==6&&j==1||i==6&&j==4||i==6&&j==7||i==7&&j==0||i==7&&j==3||i==7&&j==5||i==7&&j==8||i==8&&j==2||i==8&&j==6){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
        else{
            SetConsoleTextAttribute(out,15);
              cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="EX"){
 if(i==0&&j==7||i==1&&j==1||i==2&&j==5||i==3&&j==0||i==4&&j==4||i==5&&j==8||i==6&&j==3||i==7&&j==2||i==8&&j==6){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{
              SetConsoleTextAttribute(out,15);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}}
         SetConsoleTextAttribute(out,15);
         tries++;
            for(i=0;i<9;i++)
         for(j=0;j<9;j++){
            if(grid[i][j]!=0){
                counter++;}}
          if(counter==81){
        cout<<"YOU HAVE UPDATED ALL VALUES!!! DO YOU WANT TO CONTINUE(yes/no)"<<endl;
        cin>>cont;}}}}}
         }while(counter!=81||cont=="yes");
         // TO CHECK FOR REPITITION OVERALL
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(j=0;j<9;j++)
    for(i=0;i<9;i++){
        if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;}
    if(n1!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 1 "<<n1<<" TIMES"<<endl;
        goto Z;}
    if(n2!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 2 "<<n2<<" TIMES"<<endl;
        goto Z;}
    if(n3!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 3 "<<n3<<" TIMES"<<endl;
        goto Z;}
    if(n4!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 4 "<<n4<<" TIMES"<<endl;
        goto Z;}
    if(n5!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 5 "<<n5<<" TIMES"<<endl;
        goto Z;}
    if(n6!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 6 "<<n6<<" TIMES"<<endl;
        goto Z;}
    if(n7!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 7 "<<n7<<" TIMES"<<endl;
        goto Z;}
    if(n8!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 8 "<<n8<<" TIMES"<<endl;
        goto Z;}
    if(n9!=9){
        cout<<"GAME OVER YOU USED THE NUMBER 9 "<<n9<<" TIMES"<<endl;
        goto Z;}
    // TO CHECK FOR REPITITION IN THE ROWS
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=0;i<9;i++)
    for(j=0;j<9;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==8){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!!"<<endl;
                cout<<"row";
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // TO CHECK FOR REPITITION IN THE COLUMNS
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(j=0;j<9;j++)
    for(i=0;i<9;i++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(i==8){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!!"<<endl;
                cout<<"column"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the inner boxes
    // to check for repetition in the first box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==3){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 1"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the second box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=0;i<3;i++)
    for(j=3;j<6;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==6){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 2"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the third box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=0;i<3;i++)
    for(j=6;j<9;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==9){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 3"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the fourth box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=3;i<6;i++)
    for(j=0;j<3;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==3){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 4"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
// to check for repetition in the fifth box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=3;i<6;i++)
    for(j=3;j<6;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==6){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 5"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
        // to check for repetition in the sixth box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=3;i<6;i++)
    for(j=6;j<9;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==9){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 6"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
        // to check for repetition in the seventh box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=6;i<9;i++)
    for(j=0;j<3;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==3){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 7"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the eighth box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=6;i<9;i++)
    for(j=3;j<6;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==6){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 8"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
    // to check for repetition in the ninth box
    n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
    for(i=6;i<9;i++)
    for(j=6;j<9;j++){
            if(grid[i][j]==1)
            n1++;
        else if(grid[i][j]==2)
            n2++;
        else if(grid[i][j]==3)
            n3++;
        else if(grid[i][j]==4)
            n4++;
        else if(grid[i][j]==5)
            n5++;
        else if(grid[i][j]==6)
            n6++;
        else if(grid[i][j]==7)
            n7++;
        else if(grid[i][j]==8)
            n8++;
        else if(grid[i][j]==9)
            n9++;
        if(j==9){
            if(n1!=1||n2!=1||n3!=1||n4!=1||n5!=1||n6!=1||n7!=1||n8!=1||n9!=1){
                cout<<"GAMEOVER!!! YOU REPEATED A NUMBER IN BOX 9"<<endl;
                goto Z;}
            else{
                 n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;}}}
                 system("cls");
    cout<<"CONGRATULATIONS YOU HAVE FINISHED THE GAME"<<endl;
    cout<<"HERE IS YOUR SOLVED PUZZLE: "<<endl<<endl;
    for(i=0;i<9;i++){
    for(j=0;j<9;j++)
    if(choice=="B"){
                if(i==0&&j==0||i==0&&j==2||i==0&&j==3||i==0&&j==5||i==0&&j==6||i==0&&j==8||i==1&&j==1||i==1&&j==4||i==1&&j==5||i==1&&j==7||i==2&&j==0||i==2&&j==2||i==2&&j==3||i==2&&j==6||i==2&&j==8||i==3&&j==2||i==3&&j==3||i==3&&j==5||i==3&&j==6||i==3&&j==7||i==4&&j==0||i==4&&j==1||i==4&&j==4||i==4&&j==8||i==5&&j==1||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==5&&j==6||i==5&&j==8||i==6&&j==1||i==6&&j==2||i==6&&j==3||i==6&&j==6||i==6&&j==8||i==7&&j==0||i==7&&j==4||i==7&&j==5||i==7&&j==7||i==8&&j==1||i==8&&j==2||i==8&&j==3||i==8&&j==5||i==8&&j==6||i==8&&j==8){
         SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{
              SetConsoleTextAttribute(out,4);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="E"){
 if(i==0&&j==1||i==0&&j==2||i==0&&j==4||i==0&&j==7||i==1&&j==1||i==1&&j==4||i==1&&j==5||i==1&&j==6||i==1&&j==8||i==2&&j==0||i==2&&j==3||i==2&&j==8||i==3&&j==0||i==3&&j==4||i==3&&j==7||i==4&&j==0||i==4&&j==2||i==4&&j==3||i==4&&j==6||i==4&&j==8||i==5&&j==1||i==5&&j==4||i==5&&j==5||i==5&&j==7||i==6&&j==0||i==6&&j==5||i==6&&j==7||i==6&&j==8||i==7&&j==1||i==7&&j==3||i==7&&j==4||i==8&&j==1||i==8&&j==2||i==8&&j==5||i==8&&j==6||i==8&&j==7){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{SetConsoleTextAttribute(out,4);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="H"){
    if(i==0&&j==1||i==0&&j==5||i==0&&j==7||i==1&&j==2||i==1&&j==5||i==1&&j==7||i==2&&j==0||i==2&&j==3||i==2&&j==8||i==3&&j==3||i==3&&j==6||i==4&&j==0||i==4&&j==1||i==4&&j==5||i==4&&j==7||i==4&&j==8||i==5&&j==2||i==5&&j==4||i==6&&j==1||i==6&&j==4||i==6&&j==7||i==7&&j==0||i==7&&j==3||i==7&&j==5||i==7&&j==8||i==8&&j==2||i==8&&j==6){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
        else{
            SetConsoleTextAttribute(out,4);
              cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}
    else if(choice=="EX"){
 if(i==0&&j==7||i==1&&j==1||i==2&&j==5||i==3&&j==0||i==4&&j==4||i==5&&j==8||i==6&&j==3||i==7&&j==2||i==8&&j==6){
        SetConsoleTextAttribute(out,1);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}
         else{SetConsoleTextAttribute(out,4);
         cout<<grid[i][j]<<"    ";
         if(j==8)
        cout<<endl;}}}
        SetConsoleTextAttribute(out,4);
Z: return 0;
}
