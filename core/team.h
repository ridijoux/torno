#ifndef TEAM_H
#define TEAM_H

#pragma once
#include <string>

class Team
{
public:
    Team(const std::string &name);
    ~Team();

    inline const std::string &get_name() const { return this->m_name; }

private:
    const std::string m_name;
};

#endif