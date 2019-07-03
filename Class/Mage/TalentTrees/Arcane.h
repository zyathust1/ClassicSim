#pragma once

#include "TalentTree.h"

class Mage;
class MageSpells;

class Arcane: public TalentTree {
public:
    Arcane(Mage* mage);

private:
    Mage* mage;
    MageSpells* spells;

    void add_arcane_subtlety(QMap<QString, Talent*>& talent_tier);
};