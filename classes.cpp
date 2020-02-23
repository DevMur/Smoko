#include "classes.hpp"
#include <stdlib.h>
//#include <SFMT/graphics.hpp>

Player::Player()
{
    player_name = "AAA";
    score = 0;
    lives = 3;
    artillery.push_back("pew");
}

void Player::set_name(string p_name)
{
    player_name = p_name;
}
void Player::add_score(int points)
{
    score += points;
}
void Player::add_weapon(string new_weapon)
{
    artillery.push_back(new_weapon);

}

Weapon::Weapon()
{
    weapon_type.push_back("pew_gun");
    speed.push_back(10);
    //enter pew_gun sprite
    weapon_type.push_back("yeet_cannon");
    speed.push_back(25);
    //enter pew_gun sprite
    weapon_type.push_back("battle_rattle");
    speed.push_back(1);
    //enter pew_gun sprite
    weapon_type.push_back("devils_rimjob");
    speed.push_back(3);
    //enter pew_gun sprite
}
string Weapon::get_weapon_type(int choice)
{
    return weapon_type[choice];
}
string Weapon::get_weapon_speed(int choice)
{
    return speed[choice];
}
// string Weapon::get_weapon_sprite(int choice)
// {
//     return sprite[choice];
// }

Ship::Ship()
{
    ship_type.push_back("basic");
    position = 50; //percent 
    PLayer abuser;
    artillery = abuser.get_weapons();
    //sprite = sprite
}
string Ship::get_ship_type(int using)
{
    return ship_type[using];
}

SpaceBoard::SpaceBoard()
{
    for (int i = 0; i < 100; i++)
    {
        stars.push_back(rand()%3);
    }
    player_position = 50; //percent i.e. center
}
void SpaceShip::displayBoard()
{

}
// void SpaceShip::displayPosition(crug num_crug, modem num_modem, hardum num_hardum){}

crug::crug() 
{
    easy_power = 20;
    //set health to ships
    trajectory_of_crug.push_back(1);
    trajectory_of_crug.push_back(2);
    trajectory_of_crug.push_back(3);
}
int crug::get_trajectory(int direction)
{
    return trajectory_of_crug[direction]; //direction is random
}

modem::modem() 
{
    trajectory_of_modem.push_back(1);
    trajectory_of_crug.push_back(2);
    trajectory_of_crug.push_back(3);
    trajectory_of_crug.push_back(4);
    trajectory_of_modem_missile = "vertical";
    //set sprite
}


