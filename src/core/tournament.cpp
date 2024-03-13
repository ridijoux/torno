#include "tournament.h"
#include "stage/poolstage.h"

Tournament::Tournament() : m_stage(nullptr)
{
    m_stage = new PoolStage(m_ranking);
}

Tournament::~Tournament()
{
    if (m_stage != nullptr)
    {
        delete m_stage;
        m_stage = nullptr;
    }
}