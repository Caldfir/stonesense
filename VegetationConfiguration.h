#pragma once

#include "tinyxml.h"
#include "TileTree.h"
class VegetationConfiguration
{
public:
    int gameID;
    bool live;
    bool grown;
    c_tile_tree tree;

    VegetationConfiguration() {}
    VegetationConfiguration(int gameID, c_tile_tree &tree, bool live, bool grown);
    ~VegetationConfiguration(void);
};


bool addSingleVegetationConfig( TiXmlElement* elemRoot,  vector<VegetationConfiguration>* vegetationConfigs, vector<t_matgloss>& plantNames );
c_tile_tree * getVegetationTree(vector<VegetationConfiguration>& vegetationConfigs,int index,bool live,bool grown);
