struct Something{
int x;
int y; // 10을 곱함
int who;
Something* link;
public:
Something(int row,int col,int what){
  who = what;
  y = row;
  x = col;
  link = 0;
}
friend class Stage;
};
