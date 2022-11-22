/*

*/
#include<iostream>
using namespace std;

class GamePlayer {
public:
    static const double Fudger;
    static const int NumTurns = 5;

    enum {
        Num = 5
    };
    int scores[Num];

    static const int N;
    static int A;
    const int B = 3;
    int C = 3;
};
const double GamePlayer::Fudger = 5;
const int GamePlayer::NumTurns;
const int GamePlayer::N = 4;
int GamePlayer::A = 3;

int main() {
    GamePlayer g;
    cout << sizeof(g);
}