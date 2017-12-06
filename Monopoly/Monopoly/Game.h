#include <vector>
#include <array>
#include <string>
#include "Player.h"
#include "Space.h"
#include "validator.h"
#include "Formatter.h"

#pragma once
class Game
{
public:
	Game();
	~Game();
	
	//getters
	std::vector<Player> getTurnOrder();
	std::vector<Player> getPlayers();
	std::array<Space, 40> getBoard();
	Player getCurPlayer();
	std::string getInstructions();
	//setters
	void setTurnOrder(std::vector<Player>newTurnOrder);
	void setCurPlayer(int newPlayerNum);
	//methods which control the game
	void spaceEvent(Space space);
	void menu();
	void startGame();
	std::vector<Player> assignTurnOrder();
	void runTurn(Player player);
	void buyHouse(Player player);

private:
	std::vector<Player> players;
	std::vector<Player> turnOrder;
	std::array<Space, 40> board;
	Player curPlayer;
	std::string instructions;
	//helper methods
	int rollDice();
	char getChoice();
	void setupBoard(std::vector<Player> players);
	void movePlayer(Player player, int roll);
	void nextVector(Player player);
	Player createPlayer();
};

