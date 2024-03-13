#ifndef POOLSTAGE_H
#define POOLSTAGE_H

#pragma once

#include "abstractstage.h"
#include "ranking.h"

class PoolStage : public AbstractStage
{
public:
    PoolStage(Ranking &ranking);
    ~PoolStage();

private:
};

#endif