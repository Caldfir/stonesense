#pragma once

#include "SpriteObjects.h"

class ItemSubConfiguration
{
public:
	c_sprite sprite;

	bool configured;
};

class ItemConfiguration
{
public:
	vector<ItemSubConfiguration*> subItems;
	c_sprite default_sprite;

	bool configured;

	ItemConfiguration();
	~ItemConfiguration();
};

bool addSingleItemConfig( TiXmlElement* elemRoot);

void flushItemConfig(vector<ItemConfiguration *> &config);