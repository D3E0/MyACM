#include <iostream>
#include<windows.h>       
using namespace std;
const char dir[] = {'U', 'R', 'D', 'L'};
char mant[105][105];
int m, n, k;
struct Ant{
    int x, y;
    char dir;
};

void gotoxy(int x,int y){   
    COORD cd;
	cd.X = x;
	cd.Y = y;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, cd);  
 }     

int Locate(char c){
    for (int i = 0; i < 4 ; ++i) {
        if(c == dir[i])
            return i;
    }
    return -1;
}
void changeXY(int &x, int &y, char dir){
    switch (dir){
        case 'U':
            --x;
            break;
        case 'R':
            ++y;
            break;
        case 'D':
            ++x;
            break;
        default:
            --y;
            break;
    }
}

void showMap(){

	for(int i = 0;i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		cout<<mant[i][j];
		cout << endl;
	}
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mant[i][j];
        }
    }
    Ant ant;
    cin >> ant.x >> ant.y >> ant.dir >> k;
    while(1)
    {
        if (mant[ant.x][ant.y] == '1'){
            mant[ant.x][ant.y] = '0';
            ant.dir = dir[(Locate(ant.dir) + 1) % 4];
            changeXY(ant.x, ant.y, ant.dir);
        }
        else{
            mant[ant.x][ant.y] = '1';
            ant.dir = dir[(Locate(ant.dir) - 1 + 4) % 4];
            changeXY(ant.x, ant.y, ant.dir);
        }
        gotoxy(0, 10);
        showMap();
        Sleep(1000);
    }
    cout << ant.x << ' ' << ant.y << endl;
    return 0;
}
