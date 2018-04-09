
#include "DeathWishTalent.h"
#include "DeathWish.h"
#include "DeathWishBuff.h"
#include "Warrior.h"

DeathWishTalent::DeathWishTalent(Character *pchar, TalentTree* tree) :
    Talent(pchar, tree, "Death Wish", "5ML", "Assets/warrior/fury/tier5/Spell_shadow_deathpact.png", 1)
{
    QString base_str = "When activated, increases your physical damage by 20% and makes you immune to Fear effects, but lowers your armor and all resistances by 20%. Lasts 30 sec.";
    rank_descriptions.insert(0, base_str);
    rank_descriptions.insert(1, base_str);
}

DeathWishTalent::~DeathWishTalent() {

}

void DeathWishTalent::apply_rank_effect() {
    dynamic_cast<Warrior*>(pchar)->get_death_wish_buff()->increase_rank();
    dynamic_cast<Warrior*>(pchar)->get_death_wish()->increase_effect_via_talent();
}

void DeathWishTalent::remove_rank_effect() {
    dynamic_cast<Warrior*>(pchar)->get_death_wish_buff()->decrease_rank();
    dynamic_cast<Warrior*>(pchar)->get_death_wish()->decrease_effect_via_talent();
}
