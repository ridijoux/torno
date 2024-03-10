#ifndef ABSTRACTPHASE_H
#define ABSTRACTPHASE_H

#pragma once
#include "ranking.h"

class AbstractStage
{
public:
    AbstractStage(Ranking &ranking);
    ~AbstractStage();

protected:
    Ranking &m_ranking;
};

#endif