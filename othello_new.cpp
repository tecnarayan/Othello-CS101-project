#include<iostream>
#include<iostream>
#define DEPTH 12
using namespace std;

int count_w(char o[][10],char t){
int z=0;
for(int i=1;i<9;i++){
  for(int j=1;j<9;j++){
  if(o[i][j]==t)z++;
  }
}
return z;
}

void print(char o[][10]){//use print(o) to print present state
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++){
        cout<<"   ";
        for(int j=0;j<10;j++){
            cout<<o[i][j]<<"    ";
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl;
}

void equate (char o[][10],char oo[][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            oo[i][j]=o[i][j];
        }
    }


}

int legal(char o[][10],int r,int c,char t){

if(o[r][c]!='-')return -1;
int i=2;
if(t=='W'){
    if(!(o[r+1][c]=='B'||o[r-1][c]=='B'||o[r][c+1]=='B'||o[r][c-1]=='B'||o[r+1][c+1]=='B'||o[r+1][c-1]=='B'||o[r-1][c+1]=='B'||o[r-1][c-1]=='B'))return -1;

    while(o[r+1][c]=='B'){

    if(o[r+i][c]=='W')return 1;
    if(o[r+i][c]!='W'&&o[r+i][c]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c]=='B'){

    if(o[r-i][c]=='W')return 1;
    if(o[r-i][c]!='W'&&o[r-i][c]!='B')break;
    i++;
    }i=2;

    while(o[r][c+1]=='B'){

    if(o[r][c+i]=='W')return 1;
    if(o[r][c+i]!='W'&&o[r][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r][c-1]=='B'){

    if(o[r][c-i]=='W')return 1;
    if(o[r][c-i]!='W'&&o[r][c-i]!='B')break;
    i++;
    }i=2;

    while(o[r+1][c+1]=='B'){

    if(o[r+i][c+i]=='W')return 1;
    if(o[r+i][c+i]!='W'&&o[r+i][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r+1][c-1]=='B'){

    if(o[r+i][c-i]=='W')return 1;
    if(o[r+i][c-i]!='W'&&o[r+i][c-i]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c+1]=='B'){

    if(o[r-i][c+i]=='W')return 1;
    if(o[r-i][c+i]!='W'&&o[r-i][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c-1]=='B'){

    if(o[r-i][c-i]=='W')return 1;
    if(o[r-i][c-i]!='W'&&o[r-i][c-i]!='B')break;
    i++;
    }i=2;
return -1;
}


if(t=='B'){
    if(!(o[r+1][c]=='W'||o[r-1][c]=='W'||o[r][c+1]=='W'||o[r][c-1]=='W'||o[r+1][c+1]=='W'||o[r+1][c-1]=='W'||o[r-1][c+1]=='W'||o[r-1][c-1]=='W'))return -1;

    while(o[r+1][c]=='W'){

    if(o[r+i][c]=='B')return 1;
    if(o[r+i][c]!='B'&&o[r+i][c]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c]=='W'){

    if(o[r-i][c]=='B')return 1;
    if(o[r-i][c]!='B'&&o[r-i][c]!='W')break;
    i++;
    }i=2;

    while(o[r][c+1]=='W'){

    if(o[r][c+i]=='B')return 1;
    if(o[r][c+i]!='B'&&o[r][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r][c-1]=='W'){

    if(o[r][c-i]=='B')return 1;
    if(o[r][c-i]!='B'&&o[r][c-i]!='W')break;
    i++;
    }i=2;

    while(o[r+1][c+1]=='W'){

    if(o[r+i][c+i]=='B')return 1;
    if(o[r+i][c+i]!='B'&&o[r+i][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r+1][c-1]=='W'){

    if(o[r+i][c-i]=='B')return 1;
    if(o[r+i][c-i]!='B'&&o[r+i][c-i]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c+1]=='W'){

    if(o[r-i][c+i]=='B')return 1;
    if(o[r-i][c+i]!='B'&&o[r-i][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c-1]=='W'){

    if(o[r-i][c-i]=='B')return 1;
    if(o[r-i][c-i]!='B'&&o[r-i][c-i]!='W')break;
    i++;
    }i=2;
return -1;
}


}


void turn(char o[][10],int r,int c,char t){
int i=2;
if(t=='W'){

    while(o[r+1][c]=='B'){

    if(o[r+i][c]=='W'){for(int j=0;j<i;j++)o[r+j][c]='W';break;}
    if(o[r+i][c]!='W'&&o[r+i][c]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c]=='B'){

    if(o[r-i][c]=='W'){for(int j=0;j<i;j++)o[r-j][c]='W';break;}
    if(o[r-i][c]!='W'&&o[r-i][c]!='B')break;
    i++;
    }i=2;

    while(o[r][c+1]=='B'){

    if(o[r][c+i]=='W'){for(int j=0;j<i;j++)o[r][c+j]='W';break;}
    if(o[r][c+i]!='W'&&o[r][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r][c-1]=='B'){

    if(o[r][c-i]=='W'){for(int j=0;j<i;j++)o[r][c-j]='W';break;}
    if(o[r][c-i]!='W'&&o[r][c-i]!='B')break;
    i++;
    }i=2;

    while(o[r+1][c+1]=='B'){

    if(o[r+i][c+i]=='W'){for(int j=0;j<i;j++)o[r+j][c+j]='W';break;}
    if(o[r+i][c+i]!='W'&&o[r+i][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r+1][c-1]=='B'){

    if(o[r+i][c-i]=='W'){for(int j=0;j<i;j++)o[r+j][c-j]='W';break;}
    if(o[r+i][c-i]!='W'&&o[r+i][c-i]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c+1]=='B'){

    if(o[r-i][c+i]=='W'){for(int j=0;j<i;j++)o[r-j][c+j]='W';break;}
    if(o[r-i][c+i]!='W'&&o[r-i][c+i]!='B')break;
    i++;
    }i=2;

    while(o[r-1][c-1]=='B'){

    if(o[r-i][c-i]=='W'){for(int j=0;j<i;j++)o[r-j][c-j]='W';break;}
    if(o[r-i][c-i]!='W'&&o[r-i][c-i]!='B')break;
    i++;
    }i=2;

}


if(t=='B'){

    while(o[r+1][c]=='W'){

    if(o[r+i][c]=='B'){for(int j=0;j<i;j++)o[r+j][c]='B';break;}
    if(o[r+i][c]!='B'&&o[r+i][c]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c]=='W'){

    if(o[r-i][c]=='B'){for(int j=0;j<i;j++)o[r-j][c]='B';break;}
    if(o[r-i][c]!='B'&&o[r-i][c]!='W')break;
    i++;
    }i=2;

    while(o[r][c+1]=='W'){

    if(o[r][c+i]=='B'){for(int j=0;j<i;j++)o[r][c+j]='B';break;}
    if(o[r][c+i]!='B'&&o[r][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r][c-1]=='W'){

    if(o[r][c-i]=='B'){for(int j=0;j<i;j++)o[r][c-j]='B';break;}
    if(o[r][c-i]!='B'&&o[r][c-i]!='W')break;
    i++;
    }i=2;

    while(o[r+1][c+1]=='W'){

    if(o[r+i][c+i]=='B'){for(int j=0;j<i;j++)o[r+j][c+j]='B';break;}
    if(o[r+i][c+i]!='B'&&o[r+i][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r+1][c-1]=='W'){

    if(o[r+i][c-i]=='B'){for(int j=0;j<i;j++)o[r+j][c-j]='B';break;}
    if(o[r+i][c-i]!='B'&&o[r+i][c-i]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c+1]=='W'){

    if(o[r-i][c+i]=='B'){for(int j=0;j<i;j++)o[r-j][c+j]='B';break;}
    if(o[r-i][c+i]!='B'&&o[r-i][c+i]!='W')break;
    i++;
    }i=2;

    while(o[r-1][c-1]=='W'){

    if(o[r-i][c-i]=='B'){for(int j=0;j<i;j++)o[r-j][c-j]='B';break;}
    if(o[r-i][c-i]!='B'&&o[r-i][c-i]!='W')break;
    i++;
    }i=2;

}


}



int bita(char oo[][10], char t, int depth, int &s, int alpha, int beta) {
    int dum = 0;
    char ooo[10][10];

    if (depth == 0) {
        return (count_w(oo, 'W') - count_w(oo, 'B'));
    }
    if(count_w(oo, 'W') + count_w(oo, 'B') == 64){
        return (count_w(oo, 'W') - count_w(oo, 'B'));
    }

    if (t == 'W') {
        int val = -100;
        int p = 0; // p=100r+c;

        for (int i = 1; i < 9; i++) {
            for (int j = 1; j < 9; j++) {
                if (legal(oo, i, j, 'W') == 1) {
                    equate(oo, ooo);
                    turn(ooo, i, j, 'W');
                    int alpha_new = bita(ooo, 'B', depth - 1, dum, alpha, beta);
                    if (alpha_new > val) {
                        val = alpha_new;
                        p = 100 * i + j;
                    }
                    if (val >= beta) {
                        return val; // Beta cutoff
                    }
                    alpha = std::max(alpha, val);
                }
            }
        }

        if (depth == DEPTH) {
            s = p;
        }

        return val;
    }

    if (t == 'B') {
        int val = 100;
        int p = 0; // p=100r+c;

        for (int i = 1; i < 9; i++) {
            for (int j = 1; j < 9; j++) {
                if (legal(oo, i, j, 'B') == 1) {
                    equate(oo, ooo);
                    turn(ooo, i, j, 'B');
                    int alpha_new = bita(ooo, 'W', depth - 1, dum, alpha, beta);
                    if (alpha_new < val) {
                        val = alpha_new;
                        p = 100 * i + j;
                    }
                    if (val <= alpha) {
                        return val; // Alpha cutoff
                    }
                    beta = std::min(beta, val);
                }
            }
        }

        return val;
    }

    return 0; // Default return
}



int main(){//print//   //turn//     //legal//   //equate//  //count_w//

char o[10][10];

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
    o[i][j]='-';
    }
}
o[0][0]=' ';o[0][9]=' ';o[9][0]=' ';o[9][9]=' ';
o[0][1]='1';o[0][2]='2';o[0][3]='3';o[0][4]='4';o[0][5]='5';o[0][6]='6';o[0][7]='7';o[0][8]='8';
o[1][9]='1';o[2][9]='2';o[3][9]='3';o[4][9]='4';o[5][9]='5';o[6][9]='6';o[7][9]='7';o[8][9]='8';
o[9][1]='1';o[9][2]='2';o[9][3]='3';o[9][4]='4';o[9][5]='5';o[9][6]='6';o[9][7]='7';o[9][8]='8';
o[1][0]='1';o[2][0]='2';o[3][0]='3';o[4][0]='4';o[5][0]='5';o[6][0]='6';o[7][0]='7';o[8][0]='8';
o[5][5]='W';o[4][4]='W';o[5][4]='B';o[4][5]='B';

char oo[10][10];

cout<<"WELCOME TO GAME ZONE BY TEC"<<endl<<endl;
cout<<"    ENTER MOVES WHEN YOU ARE SAID : YOU ARE FIRST PLAYER : YOU ARE PLAYING WITH BLACK COINS "<<endl;
cout<<" METHOD TO ENTER MOVE : ROW(HORIZONTAL) NUMBER :<SPACE_BAR>: COLUMN(VERTICAL) NUMBER "<<endl<<"ENTER PLAY TO START";
string s;cin>>s;
print(o);

while(true){

    equate (o,oo);

    int a,b;cout<<"enter your move";cin>>a>>b;

    turn(o,a,b,'B');

    print(o);

    equate (o,oo);

    //string s;cout<<"enter and char and enter for computer to play";cin>>s;

    int p=0;

    bita(oo, 'W', DEPTH, p, -100, 100);

    //cout<<"c m"<<" "<<p;

    turn(o,p/100,p%100,'W');

    print(o);

}

}
