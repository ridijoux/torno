#include "abstractstage.h"

#include <iostream>

AbstractStage::AbstractStage(Ranking &ranking) : m_ranking(ranking)
{
    std::cout << "Create Stage" << std::endl;
}

AbstractStage::~AbstractStage()
{
    std::cout << "Delete Stage" << std::endl;
}