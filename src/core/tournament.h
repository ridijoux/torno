#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#pragma once

#include "ranking.h"
#include "stage/abstractstage.h"

class Tournament
{
public:
    Tournament();
    ~Tournament();

private:
    Ranking m_ranking;
    AbstractStage *m_stage;
};

#endif