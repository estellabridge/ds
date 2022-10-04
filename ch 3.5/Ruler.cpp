#include <iostream>

using namespace std;

void drawOneTick(int tickLength, int tickLabel = -1) {
    for (int i = 0; i < tickLength; i++)
    {
        cout << "-";
    }
    if (tickLabel >= 0)
    {
        cout << " " << tickLabel;
    }
    cout << "\n";
}
void drawTicks(int tickLength) {
    if (tickLength > 0)
    {
        drawTicks(tickLength-1); //2 1 0
        drawOneTick(tickLength); // 0
        drawTicks(tickLength-1); // -1
    }
}
void drawRuler(int nlnches, int majorLength) {
    drawOneTick(majorLength, 0);
    for (int i = 1; i <= nlnches; i++)
    {
        drawTicks(majorLength-1);
        drawOneTick(majorLength, i);
    }
}
int main() {
    // drawRuler(2, 4);
    // cout << drawRuler << endl;
    // drawRuler(1, 5);
    // cout << drawRuler <<endl;
    
    drawRuler(3, 3);
    cout << drawRuler << endl;

}