#ifndef __STAGE__
#define __STAGE__
#include <ncurses.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <random>
#include <unistd.h>
#include "Something.h"

//방향키 인덱스 정의
#define UP KEY_UP
#define DOWN KEY_DOWN
#define RIGHT KEY_RIGHT
#define LEFT KEY_LEFT

//항목별 인덱스 정의
#define EMPTY 0
#define WALL 1
#define IMMUNE_WALL 2
#define SNAKE_HEAD 3
#define SNAKE_BODY 4
#define GROWTH_ITEM 5
#define POISON_ITEM 6
#define GATE 8

using namespace std;

class Stage
{
public:
    int ***stage;

    // window variables
    WINDOW *game;
    WINDOW *score;
    WINDOW *mission;

    // mission variables
    int stat[4];
    int statMission[4];

    // mission check variables
    char chkMission[4];
<<<<<<< HEAD

=======
    
>>>>>>> 0ce4952782dc20996afa563c9806ca53ad2d0f53
    Something *Bam;
    Something *gate1;
    Something *gate2;

    Stage();
    ~Stage();
    int getStageNum() const { return STAGE_NUM; }
    int getMapRow() const { return MAP_ROW; }
    int getMapCol() const { return MAP_COL; }
    int getNlines() const { return NLINES; }
    int getNcols() const { return NCOLS; }
    void setMap(int ***&stage);
    int **copyMap(int nStage);
    void drawMap(int **map);

    void setMission();
    void pause();
    void resume();

    void eatItem(int item, int dir, int **map);
    void makeSnake(int **map);
<<<<<<< HEAD
    void move(int **map);

    void appearItem(int **&map);
    void appearGate(int **&map);
    void enterGate(Something *head, int **map);
=======
    void move(int direction, int **map);

    void appearItem(int **&map);
    void appearGate(int **&map);
    void enterGate(Something *head, int **map, int dir);
>>>>>>> 0ce4952782dc20996afa563c9806ca53ad2d0f53

    pair<int, int> numOfItems(int **map);
    bool isMissionClear();

    bool checkfinish() { return finish; }
    void Gameover();
    void alert(int color, int bkgdColor, const string msg);

<<<<<<< HEAD
    void findRoot(Something *gate,int **map);
    void Setdir(int direction) {dir = direction;}
    int Getdir() { return dir;}
=======
    int findRoot(Something *gate, int dir, int **map);
>>>>>>> 0ce4952782dc20996afa563c9806ca53ad2d0f53

private:
    const int STAGE_NUM = 4; //스테이지 개수
    const int NLINES = 40,
              NCOLS = 110;
    const int MAP_ROW = 25,
              MAP_COL = 50;
    const int ROW_END = MAP_ROW - 1,
              COL_END = MAP_COL - 1;
    const string itemIndex = " ^X@=+-%";

    bool finish;
    int dir;
};
#endif
