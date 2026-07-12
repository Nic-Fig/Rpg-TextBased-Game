/*
-- What i want to code. First i want to create a class for my characters.
Then I want to create a class for the npcs.
-- I want to create a function to check if the player has <= life over 0 so he doesnt die.
I want to generate a combat system 
I want to create a level up system
I want to add gear
I want to create a menu for you to change your gear for example or leveling up
I want to create a story behind it
*/
#include <iostream>
#include <string>

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
    Archer,

};

struct Characters {
    std::string name;
    Jobclass role;
    int health;
    int attackDmg;
    int abilityPower;
    int maxHealth;
};

bool isAlive (Characters player){
    if (player.health <= 0){
        return false;
    }   
}

int main (){
    
    
}