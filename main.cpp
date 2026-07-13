/*
-- What i want to code. First i want to create a class for my characters.
-- Then I want to create a class for the npcs.
-- I want to create a function to check if the player has <= life over 0 so he doesnt die.
-- I want to generate a combat system 
(add a defend system)
I want to create a level up system
I want to add gear
I want to create a menu for you to change your gear for example or leveling up
I want to create a story behind it
*/
#include <iostream>
#include <string>
#include <windows.h>
#include <chrono>
#include <thread>
using namespace std;

enum class Gamestate{
    Playing,
    Pause,
    GameOver,
    InventoryMenu,
    Exit,
    LevelUpMenu,
    MainMenu,

};

enum class Jobclass {
    Warrior,
    Mage,

};

struct Characters {
    string name;
    Jobclass role;
    int health;
    int attackDmg;
    int abilityPower;
    int maxHealth;
    int level;
};

bool isAlive (Characters target){
    if (target.health <= 0){
        return false;
    }   
}

void wait(int sec){
    this_thread::sleep_for(chrono::seconds(sec));
}

void startCombat(Characters& player, Characters& enemy){
    cout << enemy.name << " Wants some smoke" << endl;

    while (isAlive(player) && isAlive(enemy))
    {
        int choice;
        cout << "Its your turn" << endl;
        cout << "1- Attack \n" << "2- Defend \n" << "3- Items \n" << "4- Run \n";
        cin >> choice;
        if (choice == 1){
            cout << "How do you want to attack? \n";
            cout << "1- Quick Slash \n" << "2- Fireball" << "3- Back";
            cin >> choice;

            if(choice == 1){
                cout << "You used Quick Slash";
                enemy.health -= player.attackDmg;
                wait(1);
                cout << "You delt " << player.attackDmg << "dmg!";
                wait(0.5);
                cout << "The " << enemy.name << "has " << enemy.health << "/" << enemy.maxHealth << " hp! \n";
            }
            else if (choice == 2){
                cout << "You used Fireball!";
                enemy.health -= player.abilityPower;
                wait(1);
                cout << "You delt " << player.abilityPower << "dmg!";
                wait (0.5);
                cout << "The " << enemy.name << "has " << enemy.health << "/" << enemy.maxHealth << " hp! \n";
            }
            else{
                continue;
            }
            
        }
        else if (choice == 2){
            // Add later a defend
        }  

        else if (choice == 3){
            // Add later a menu for items
        }

        else {
            cout << "You escaped";
            break;
        }
    }
    
}


int main (){
    while (isAlive){
        if (GetAsyncKeyState (VK_ESCAPE) & 0x8000){
            Gamestate currentState = Gamestate::MainMenu;
            cout << "Main menu";
        };
    };
    
}