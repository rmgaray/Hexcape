#ifndef PLAYSCENE_HPP
#define PLAYSCENE_HPP

#include <SFML/Graphics.hpp>
#include "Laberinto.h"
#include "BaseScene.hpp"
#include "Player.hpp"
#include "Bola.hpp"

class PlayScene: public BaseScene {
private:
	sf::View view;
	sf::Texture bola;

	Laberinto lab;
	Player* player;

	vector<Bola*> bolas;
	sf::Clock bolas_clock;
	float tiempo_spawn_bolas;
	unsigned int max_bolas;
public:
	PlayScene(float _tiempo_spawn_bolas);
	void update(float elapsed) override;
	void draw(sf::RenderWindow &w) override;
};

#endif
