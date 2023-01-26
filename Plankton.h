#ifndef PLANKTON_H
#define PLANKTON_H

#include <string>
#include <vector>
#include <algorithm>

// c:  Slavkovic Filip

#include "Bauer.h"

class Plankton : public Bauer {
protected:
    char char0;
    char char1;
    int rangeddmg;
public:
    Plankton() {
        strcpy(autorName, "Slakvovic Filip");
        strcpy(heroName, "Plankton");

        life = MAX_LIFE;
        damage = STD_DAMAGE;
        range = 33;
        rangeddmg = STD_DAMAGE + 20;
        mana = MAX_MANA / 10 * 3;
        move = MAX_MOVE / 2 + 10;

        height = 8;
        width = 14;
        leg = 1;

        bodyCol = GREEN;
        headCol = YELLOW;
        handCol = WHITE;

        weaponC = ' ';
        bodyC = 219;
        char0 = 219;
        char1 = 177;
    }


    //void clearPreviousDrawing(){
    //  sf::RectangleShape rectangle;
    // rectangle.setSize(sf::Vector2f(width, height));
    // rectangle.setPosition(x, y);
    //   rectangle.setFillColor(sf::Color::Black);
    //  window.draw(rectangle); // where window is an instance of sf::RenderWindow



    // };
    // void clearPreviousDrawing(){
    //  gotoxy(x, y);
    //  for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j < width; j++)
    //    {
    //       printf(" ");
    //    }
    //     printf("\n");
    // }
    // }

    /*void ClearArray(int x, int y, int arrayLength, int arrayWidth) {
        std::string arr[] = {
                "                               ",
                "                            ",
                "                    ",
                "                ",
                "              ",
                "                 ",
                "                  ",
                "                ",
                "            ",
                "             ",
                "            ",
                "             ",
                "                ",
                "                 ",
                "               ",
                "                ",
                "                     ",
                "                    ",

        };


        setcolor(headCol);
        drawArray(arr, 17, x, height + 15);
    }
*/


    void ShowMan()
    {
        if(life<MAX_LIFE/2){

            std::string arr3[]={
                    "                               ",
                    "                            ",
                    "        00       00            ",
                    "       0  0     0  0           ",
                    "          0     0             ",
                    "           00000              ",
                    "         000000000            ",
                    "         030000030            ",
                    "         003333300            ",
                    "        00066666000           ",
                    "       0 006555600 0          ",
                    "       0 006555600 0          ",
                    "         006555600            ",
                    "         006555600            ",
                    "         006555600            ",
                    "         006555600            ",
                    "         006666600            ",
                    "         006666600            ",
                    "         000000000            ",
                    "         000000000            ",
                    "         000000000            ",
                    "         000000000            ",
                    "         000000000            ",
                    "         000000000            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         111111111            ",
                    "         000000000            ",
                    "          0000000           ",
                    "           00000              ",
                    "           0   0              ",
                    //"         333   333           ",


            };

          //  Plankton::Clear();



            setcolor(headCol);
            drawArray(arr3,17,x,height+13);
        }
        else{
           // clearPreviousDrawing();
            //int y;
            //ClearArray(x, y, 17, 17);
            std::string arr4[]={
                    "                               ",
                    "        0         0           ",
                    "         0       0            ",
                    "          0     0             ",
                    "          0     0             ",
                    "           00000              ",
                    "         000000000            ",
                    "         003333300            ",
                    "         006666600            ",
                    "        00066566000           ",
                    "       0 006666600 0          ",
                    "       0 000000000 0          ",
                    "         003000000            ",
                    "         000333300            ",
                    "          0000000           ",
                    "           00000              ",
                    "           0   0              ",
                    //"         333   333           ",

            };



            drawArray(arr4,17,x,height+10);
        }

    }

    void ShowWeapon(){}

    void ShowMagic() {
        if(mana>=20){
            ShowMagicThrow();
        }
        else {
            ShowMagicLoad();

            //Linie(x - 13, 0, 26, 0, char0);
        }
        ShowMan();
    }

    void ShowMagicLoad(){
        int i;
        std::string arr[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300     55      ",
                "          006666600      5      ",
                "         00066566000    333       ",
                "       0 006666600 0000 333         ",
                "       0 000000000     333     ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };


        drawArray(arr,17,x,height+10);
        Sleep(120);
        Clear();

        std::string arr1[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300           ",
                "          006666600  5553333        ",
                "         00066566000  330333        ",
                "       0 006666600 0000033          ",
                "       0 000000000          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };
        drawArray(arr1,17,x,height+10);
        Clear();


        std::string arr2[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300     55      ",
                "          006666600      5      ",
                "         00066566000    333       ",
                "       0 006666600 0000 333         ",
                "       0 000000000     333     ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };


        drawArray(arr2,17,x,height+10);
        Sleep(120);
        Clear();

    }

  //  void ClearArray(std::string *arr, int width, int height) {
   //     for(int i = 0; i < height; i++) {
     //       for(int j = 0; j < width; j++) {
     //           arr[i*width + j] = "";
     //       }
    //    }
  //  }








    void ShowMagicThrow() {
        int i;

        std::string arr[] = {
                "   55       5555555555555    55",
                "     55555555555555555555520200000",
                "     55555555555555555555555511000",
                "   55    55555555555555555555555",
                "                               55"
        };
        for(i = 0; i <= enemy->x; i++) {

            drawArray(arr, 5 , x - 4 - i, height - 2);
         //   ClearArray(arr, 5, 5);
        }
        std::string arr1[]={
                "                               ",
                "                                  ",
                "                                  ",
                "                                ",
                "                                 ",
        };
        //ClearArray(arr1, 3, 4);
        drawArray(arr1, 5, x - 4 - i, height - 2);
    }

    int DoMagicAttack(){
        if(mana>=20){
            mana-=20;
            ShowLife();
            return rangeddmg;
        }
        else {
            for (int i = 0; i < 10; i++) {
                if (mana < MAX_MANA) { mana++; }
                if (life < MAX_LIFE) { life++; }
                ShowLife();
                Sleep(10);
            }
        }
        return 0;
    }

    void ShowBlock()
    {
        Clear();
        ShowBlocking();
    }

    void ShowBlocking(){
        std::string arr[]={
                "                               ",
                "        0         0           ",
                "         0       0            ",
                "          0     0             ",
                "          0     0             ",
                "           00000              ",
                "         000000000            ",
                "         003333300            ",
                "         006666600            ",
                "        00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         000000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
                //"         333   333           ",
        };

        drawArray(arr,17,x,height+10);
    }

    int DoAttack(){
        if(x+enemy->x >= enemy->width+range)

          //  return 0;
        return damage;
    }
    void ShowAttack()
    {

        for(int i=0;i<60;i++)
        {
            Kreis(x-i,height,2,'#');
            Sleep(50);
            Kreis(x-i,height,2,' ');
            Show(); //to show character consistently


        }


    }



    // setcolor(RED);
    //    for (int i = 0; i < 32; i++) {
     //       Linie(x - 2, height - 6, -i, 0, char0);
     //       Sleep(10);
     //   }
     //   Sleep(50);
      //  Linie(x - 2, height - 6, -32, 0, ' ');
     //   ShowMan();
   // }

    // MOVE THINGS START
    void ShowMove(){
        std::string arr[]={
                "                               ",
                "            0         0           ",
                "             0       0            ",
                "              0     0             ",
                "              0     0             ",
                "               00000              ",
                "             000000000            ",
                "             003333300            ",
                "             006666600            ",
                "            00066566000           ",
                "          0 006666600 0          ",
                "          0 000000000 0          ",
                "            000000000            ",
                "            000333300            ",
                "             0000000           ",
                "              00000              ",
                "              0   0              ",
                //"         333   333           ",
        };


        drawArray(arr,17,x,height+10);
    }

    void ShowMoveStart(){
        std::string arr[]={
                "                               ",
                "            0         0           ",
                "             0       0            ",
                "              0     0             ",
                "              0     0             ",
                "               00000              ",
                "             000000000            ",
                "             003333300            ",
                "             006666600            ",
                "            00066566000           ",
                "          0 006666600 0          ",
                "          0 000000000 0          ",
                "            000000000            ",
                "            000333300            ",
                "             0000000           ",
                "              00000              ",
                "              0   0              ",
                //"         333   333           ",
        };


        drawArray(arr,17,x,height+10);
        Sleep(120);
        Clear();
        std::string arr1[]={
                "                               ",
                "            0         0           ",
                "             0       0            ",
                "              0     0             ",
                "              0     0             ",
                "               00000              ",
                "             000000000            ",
                "             003333300            ",
                "             006666600            ",
                "            00066566000           ",
                "          0 006666600 0          ",
                "          0 000000000 0          ",
                "            003000000            ",
                "            000333300            ",
                "             0000000           ",
                "              00000              ",
                "              0   0              ",
                //"         333   333           ",
        };


        drawArray(arr1,17,x,height+10);
        Sleep(120);
        std::string arr2[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
                //"         333   333           ",
        };


        drawArray(arr2,17,x,height+10);
        Sleep(120);
        Clear();
    }

    void Move(int wohin){
        bool temp=false;
        if(wohin > +move) wohin = +move;
        if(wohin < -move) wohin = -move;

        Clear();
        ShowMoveStart();
        for(int i=0; i<wohin; i++)
        {
            if( x<=-MIDDLE+width ) break;
            if( x + enemy->x <= MIN_DISTANCE
                                + width + enemy->width ) break;
            Clear();
            x--;
            ShowMove();
            Sleep(50);
        }
        // negativ wohin => NACH AUSSEN
        for(int i=0; i>wohin; i--)
        {
            if( x >= MIDDLE-width) break;
            if(!temp){
                x=-x;
                SetLeft2Right(side=='l'?'r':'l');
            }
            temp=true;
            Clear();
            x--;
            ShowMove();
            Sleep(50);
        }
        if(temp){
            x=-x;
            SetLeft2Right(side=='l'?'r':'l');
        }
        Draw(x+1,0,' ');
        Show();
    }

    //MOVE THINGS END

    //START VICTORY FUNCTION
    void ShowWinTrans(){
        std::string arr2[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };


        drawArray(arr2,17,x,height+10);

        Sleep(100);
        std::string arr1[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0000          ",
                "       0 000000000           ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };

        int i;
        for(i=0; i<15;i++){
            drawArray(arr1,17,x,height+10);
            Sleep(60);
            Clear();
        }
        std::string arr3[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000   00        ",
                "       0 006666600 00000         ",
                "       0 000000000           ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };
        drawArray(arr3,17,x,height+10);
        Sleep(120);
        Clear();
        std::string arr5[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000   00        ",
                "       0 006666600 00000         ",
                "       0 000000000           ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
        };
        drawArray(arr5,17,x,height+10);
        Sleep(120);
        Clear();
        std::string arr4[]={
                "                            ",
                "     00        11           ",
                "        00           11     ",
                "   00      00  100            ",
                "    1  1       00   1    11        ",
                "    0  0                      ",
                "       1550     000         ",
                "              00            ",
                "                       00     ",//converting 0 to â–ˆ, 1 to â–€, 2 to â–„
        };
        drawArray(arr4,9,x,height+10);
        Sleep(120);
        Clear();
        std::string arr6[]={
                "    55                00    ",
                "          00   11         55",
                "                            ",
                "   00      00150          11",
                "    55       00   11        ",
                "          00           05   ",
                "        11   55  00         ",
                "     00       00            ",
                "                     55     ",
        };
        drawArray(arr6,9,x,height+10);
        Sleep(120);
        Clear();

        std::string arr7[]={
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "                            ",
        };
        drawArray(arr7,9,x,height+10);
    }
    void ShowVictory(){
        ShowWinTrans();
    }

    //START FUNCTIONS START
    void ShowLoad(){
        std::string arr2[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "                   ",
                "                ",
                "               ",
                "                    ",
                "                   ",
                "                   ",
                "                     ",
                "                     ",
                //"         333   333           ",
        };


        drawArray(arr2,17,x,height+10);
        Sleep(120);
        std::string arr1[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "              ",
                "                   ",
                "                ",
                "                   ",
                "                       ",
                "                       ",
                //"         333   333           ",
        };


        drawArray(arr1,17,x,height+10);
        Sleep(120);
        Clear();

        std::string arr[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "                   ",
                "                      ",
                "                      ",
                //"         333   333           ",
        };


        drawArray(arr,17,x,height+10);
        Sleep(120);
        Clear();
        std::string arr5[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "                        ",
                "                       ",
                //"         333   333           ",
        };


        drawArray(arr5,17,x,height+10);
        Sleep(120);
        Clear();
        std::string arr4[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
                //"         333   333           ",
        };


        drawArray(arr4,17,x,height+10);
        Sleep(120);

    }

    void MoveStart(int wohin){
        int state=0;

        if(wohin > +move) wohin = +move;
        if(wohin < -move) wohin = -move;

        Clear();
        for(int i=0; i<wohin; i++)
        {
            if( x<=-MIDDLE+width ) break;
            if( x + enemy->x <= MIN_DISTANCE
                                + width + enemy->width ) break;
            Clear();
            x--;
            ShowMove();
            Sleep(50);
        }
        // negativ wohin => NACH AUSSEN
        for(int i=0; i>wohin; i++)
        {
            Clear();
            x--;
            ShowMove();
            Sleep(50);
        }
        Draw(x+1,0,' ');
        Show();
    }

    void ShowStart()
    {
        int   endPosition = x;
        int   saveMove    = move;

        Clear();
        move    = WIDTH;
        x       = MIDDLE-width;

        MoveStart(x-endPosition);
        ShowLoad();
        move    = saveMove;

    }

    //START FUNCTIONS END

    //DEATH FUNCTION START
    void ShowDeath()
    {
        if( life > 0 ) return;


        Bauer::ClearDeath();
        Clear();

        std::string arr[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          003333300            ",
                "          006666600            ",
                "         00066566000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
                //"         333   333           ",
        };


        drawArray(arr,9,x,height);
        Sleep(200);
        std::string arr1[]={
                "                               ",
                "         0         0           ",
                "          0       0            ",
                "           0     0             ",
                "           0     0             ",
                "            00000              ",
                "          000000000            ",
                "          000000000            ",
                "          000000000            ",
                "         00000000000           ",
                "       0 006666600 0          ",
                "       0 000000000 0          ",
                "         003000000            ",
                "         000333300            ",
                "          0000000           ",
                "           00000              ",
                "           0   0              ",
                //"         333   333           "
                };
        Sleep(200);
        Clear();
        drawArray(arr1,9,x,height);
        std::string arr2[]={
                "                            ",
                "                            ",
                "         0000000000000      ",
                "      000000000000000000 ",
                "  00000000000000000000",
                " 00001011 0000000000000",
                " 000010111 000000000000000",
                "00000000001111 00000000000000",
                "0000000000000000000000000000",};
        drawArray(arr2,9,x,height);
        Sleep(200);
        Clear();
        std::string arr3[]={
                "                            ",
                "                            ",
                "                            ",
                "                            ",
                "             000000         ",
                "         0000000001101      ",
                "   0010110000100100101100   ",
                " 000000000111101010100001101",
                "0000000000000000000000000000",};
        drawArray(arr3,9,x,height);

    }
    //DEATH FUNCTION END

    void drawArray(std::string array[], int length, int x1, int y1){
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < array[i].length(); ++j) {

                if(array[i][j]=='1') {
                    array[i][j]=char1;
                    setcolor(bodyCol);
                }
                else if(array[i][j]=='2') {
                    array[i][j]=char0;
                    setcolor(headCol);
                }
                else if(array[i][j]=='0') {
                    array[i][j]=char0;
                    setcolor(bodyCol);
                }
                else if(array[i][j]=='4') {
                    array[i][j]=char1;
                    setcolor(headCol);
                }
                else if(array[i][j]=='3') {
                    array[i][j]=char0;
                    setcolor(DARKGRAY);
                }
                else if(array[i][j]=='5') {
                    array[i][j]=char0;
                    setcolor(RED);
                }
                else if(array[i][j]=='6') {
                    array[i][j]=char0;
                    setcolor(headCol);
                }



                Draw( x1 - j+width, y1-i, (bodyC != ' ') ? array[i][j] : ' ');       }
        }
    }
};

#endif
