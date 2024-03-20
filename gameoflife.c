#include "raylib.h"

define enum gameState{
    LOGO = 0,
    MENU,
    GAMEPLAY,
    ENDING;
} gameState;

int main(){
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Game Of Life");
    SetTargetFPS(60);

    gameState currentState = LOGO;

    int frameCounter = 0;
    while(!WindowShouldClose()){
        switch(currentState){
            case LOGO:
                frameCounter++;
                if(frameCounter > 120){
                    frameCounter = 0;
                    currentState = MENU;
                }
                break;
            case MENU:
                break;
            case GAMEPLAY:
                break;
            case ENDING:
                break;
            default:
                break;
        }

        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}