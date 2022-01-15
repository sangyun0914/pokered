#include "Moves.h"

/*
move: MACRO
    db \1 ; animation (interchangeable with move id)
    db \2 ; effect
    db \3 ; power
    db \4 ; type
    db \5 percent ; accuracy
    db \6 ; pp
ENDM
*/

const move POUND{"NO_ADDITIONAL_EFFECT", 40, "NORMAL", 100, 35};
const move KARATE_CHOP{"NO_ADDITIONAL_EFFECT", 50, "NORMAL", 100, 25};
const move DOUBLESLAP{"TWO_TO_FIVE_ATTACKS_EFFECT", 15, "NORMAL", 85, 10};
const move COMET_PUNCH{"TWO_TO_FIVE_ATTACKS_EFFECT", 18, "NORMAL", 85, 15};
const move MEGA_PUNCH{"NO_ADDITIONAL_EFFECT", 80, "NORMAL", 85, 20};
const move PAY_DAY{"PAY_DAY_EFFECT", 40, "NORMAL", 100, 20};
const move FIRE_PUNCH{"BURN_SIDE_EFFECT1", 75, "FIRE", 100, 15};
const move ICE_PUNCH{"FREEZE_SIDE_EFFECT", 75, "ICE", 100, 15};
const move THUNDERPUNCH{"PARALYZE_SIDE_EFFECT1", 75, "ELECTRIC", 100, 15};
const move SCRATCH{"NO_ADDITIONAL_EFFECT", 40, "NORMAL", 100, 35};
const move VICEGRIP{"NO_ADDITIONAL_EFFECT", 55, "NORMAL", 100, 30};
const move GUILLOTINE{"OHKO_EFFECT", 1, "NORMAL", 30, 5};
const move RAZOR_WIND{"CHARGE_EFFECT", 80, "NORMAL", 75, 10};
const move SWORDS_DANCE{"ATTACK_UP2_EFFECT", 0, "NORMAL", 100, 30};
const move CUT{"NO_ADDITIONAL_EFFECT", 50, "NORMAL", 95, 30};
const move GUST{"NO_ADDITIONAL_EFFECT", 40, "NORMAL", 100, 35};
const move WING_ATTACK{"NO_ADDITIONAL_EFFECT", 35, "FLYING", 100, 35};
const move WHIRLWIND{"SWITCH_AND_TELEPORT_EFFECT", 0, "NORMAL", 85, 20};
const move FLY{"FLY_EFFECT", 70, "FLYING", 95, 15};
const move BIND{"TRAPPING_EFFECT", 15, "NORMAL", 75, 20};
const move SLAM{"NO_ADDITIONAL_EFFECT", 80, "NORMAL", 75, 20};
const move VINE_WHIP{"NO_ADDITIONAL_EFFECT", 35, "GRASS", 100, 10};
const move STOMP{"FLINCH_SIDE_EFFECT2", 65, "NORMAL", 100, 20};
const move DOUBLE_KICK{"ATTACK_TWICE_EFFECT", 30, "FIGHTING", 100, 30};
const move MEGA_KICK{"NO_ADDITIONAL_EFFECT", 120, "NORMAL", 75, 5};
const move JUMP_KICK{"JUMP_KICK_EFFECT", 70, "FIGHTING", 95, 25};
const move ROLLING_KICK{"FLINCH_SIDE_EFFECT2", 60, "FIGHTING", 85, 15};
const move SAND_ATTACK{"ACCURACY_DOWN1_EFFECT", 0, "NORMAL", 100, 15};
const move HEADBUTT{"FLINCH_SIDE_EFFECT2", 70, "NORMAL", 100, 15};
const move HORN_ATTACK{"NO_ADDITIONAL_EFFECT", 65, "NORMAL", 100, 25};
const move FURY_ATTACK{"TWO_TO_FIVE_ATTACKS_EFFECT", 15, "NORMAL", 85, 20};
const move HORN_DRILL{"OHKO_EFFECT", 1, "NORMAL", 30, 5};
const move TACKLE{"NO_ADDITIONAL_EFFECT", 35, "NORMAL", 95, 35};
const move BODY_SLAM{"PARALYZE_SIDE_EFFECT2", 85, "NORMAL", 100, 15};
const move WRAP{"TRAPPING_EFFECT", 15, "NORMAL", 85, 20};
const move TAKE_DOWN{"RECOIL_EFFECT", 90, "NORMAL", 85, 20};
const move THRASH{"THRASH_PETAL_DANCE_EFFECT", 90, "NORMAL", 100, 20};
const move DOUBLE_EDGE{"RECOIL_EFFECT", 100, "NORMAL", 100, 15};
const move TAIL_WHIP{"DEFENSE_DOWN1_EFFECT", 0, "NORMAL", 100, 30};
const move POISON_STING{"POISON_SIDE_EFFECT1", 15, "POISON", 100, 35};
const move TWINEEDLE{"TWINEEDLE_EFFECT", 25, "BUG", 100, 20};
const move PIN_MISSILE{"TWO_TO_FIVE_ATTACKS_EFFECT", 14, "BUG", 85, 20};
const move LEER{"DEFENSE_DOWN1_EFFECT", 0, "NORMAL", 100, 30};
const move BITE{"FLINCH_SIDE_EFFECT1", 60, "NORMAL", 100, 25};
const move GROWL{"ATTACK_DOWN1_EFFECT", 0, "NORMAL", 100, 40};
const move ROAR{"SWITCH_AND_TELEPORT_EFFECT", 0, "NORMAL", 100, 20};
const move SING{"SLEEP_EFFECT", 0, "NORMAL", 55, 15};
const move SUPERSONIC{"CONFUSION_EFFECT", 0, "NORMAL", 55, 20};
const move SONICBOOM{"SPECIAL_DAMAGE_EFFECT", 1, "NORMAL", 90, 20};
const move DISABLE{"DISABLE_EFFECT", 0, "NORMAL", 55, 20};
const move ACID{"DEFENSE_DOWN_SIDE_EFFECT", 40, "POISON", 100, 30};
const move EMBER{"BURN_SIDE_EFFECT1", 40, "FIRE", 100, 25};
const move FLAMETHROWER{"BURN_SIDE_EFFECT1", 95, "FIRE", 100, 15};
const move MIST{"MIST_EFFECT", 0, "ICE", 100, 30};
const move WATER_GUN{"NO_ADDITIONAL_EFFECT", 40, "WATER", 100, 25};
const move HYDRO_PUMP{"NO_ADDITIONAL_EFFECT", 120, "WATER", 80, 5};
const move SURF{"NO_ADDITIONAL_EFFECT", 95, "WATER", 100, 15};
const move ICE_BEAM{"FREEZE_SIDE_EFFECT", 95, "ICE", 100, 10};
const move BLIZZARD{"FREEZE_SIDE_EFFECT", 120, "ICE", 90, 5};
const move PSYBEAM{"CONFUSION_SIDE_EFFECT", 65, "PSYCHIC_TYPE", 100, 20};
const move BUBBLEBEAM{"SPEED_DOWN_SIDE_EFFECT", 65, "WATER", 100, 20};
const move AURORA_BEAM{"ATTACK_DOWN_SIDE_EFFECT", 65, "ICE", 100, 20};
const move HYPER_BEAM{"HYPER_BEAM_EFFECT", 150, "NORMAL", 90, 5};
const move PECK{"NO_ADDITIONAL_EFFECT", 35, "FLYING", 100, 35};
const move DRILL_PECK{"NO_ADDITIONAL_EFFECT", 80, "FLYING", 100, 20};
const move SUBMISSION{"RECOIL_EFFECT", 80, "FIGHTING", 80, 25};
const move LOW_KICK{"FLINCH_SIDE_EFFECT2", 50, "FIGHTING", 90, 20};
const move COUNTER{"NO_ADDITIONAL_EFFECT", 1, "FIGHTING", 100, 20};
const move SEISMIC_TOSS{"SPECIAL_DAMAGE_EFFECT", 1, "FIGHTING", 100, 20};
const move STRENGTH{"NO_ADDITIONAL_EFFECT", 80, "NORMAL", 100, 15};
const move ABSORB{"DRAIN_HP_EFFECT", 20, "GRASS", 100, 20};
const move MEGA_DRAIN{"DRAIN_HP_EFFECT", 40, "GRASS", 100, 10};
const move LEECH_SEED{"LEECH_SEED_EFFECT", 0, "GRASS", 90, 10};
const move GROWTH{"SPECIAL_UP1_EFFECT", 0, "NORMAL", 100, 40};
const move RAZOR_LEAF{"NO_ADDITIONAL_EFFECT", 55, "GRASS", 95, 25};
const move SOLARBEAM{"CHARGE_EFFECT", 120, "GRASS", 100, 10};
const move POISONPOWDER{"POISON_EFFECT", 0, "POISON", 75, 35};
const move STUN_SPORE{"PARALYZE_EFFECT", 0, "GRASS", 75, 30};
const move SLEEP_POWDER{"SLEEP_EFFECT", 0, "GRASS", 75, 15};
const move PETAL_DANCE{"THRASH_PETAL_DANCE_EFFECT", 70, "GRASS", 100, 20};
const move STRING_SHOT{"SPEED_DOWN1_EFFECT", 0, "BUG", 95, 40};
const move DRAGON_RAGE{"SPECIAL_DAMAGE_EFFECT", 1, "DRAGON", 100, 10};
const move FIRE_SPIN{"TRAPPING_EFFECT", 15, "FIRE", 70, 15};
const move THUNDERSHOCK{"PARALYZE_SIDE_EFFECT1", 40, "ELECTRIC", 100, 30};
const move THUNDERBOLT{"PARALYZE_SIDE_EFFECT1", 95, "ELECTRIC", 100, 15};
const move THUNDER_WAVE{"PARALYZE_EFFECT", 0, "ELECTRIC", 100, 20};
const move THUNDER{"PARALYZE_SIDE_EFFECT1", 120, "ELECTRIC", 70, 10};
const move ROCK_THROW{"NO_ADDITIONAL_EFFECT", 50, "ROCK", 65, 15};
const move EARTHQUAKE{"NO_ADDITIONAL_EFFECT", 100, "GROUND", 100, 10};
const move FISSURE{"OHKO_EFFECT", 1, "GROUND", 30, 5};
const move DIG{"CHARGE_EFFECT", 100, "GROUND", 100, 10};
const move TOXIC{"POISON_EFFECT", 0, "POISON", 85, 10};
const move CONFUSION{"CONFUSION_SIDE_EFFECT", 50, "PSYCHIC_TYPE", 100, 25};
const move PSYCHIC_M{"SPECIAL_DOWN_SIDE_EFFECT", 90, "PSYCHIC_TYPE", 100, 10};
const move HYPNOSIS{"SLEEP_EFFECT", 0, "PSYCHIC_TYPE", 60, 20};
const move MEDITATE{"ATTACK_UP1_EFFECT", 0, "PSYCHIC_TYPE", 100, 40};
const move AGILITY{"SPEED_UP2_EFFECT", 0, "PSYCHIC_TYPE", 100, 30};
const move QUICK_ATTACK{"NO_ADDITIONAL_EFFECT", 40, "NORMAL", 100, 30};
const move RAGE{"RAGE_EFFECT", 20, "NORMAL", 100, 20};
const move TELEPORT{"SWITCH_AND_TELEPORT_EFFECT", 0, "PSYCHIC_TYPE", 100, 20};
const move NIGHT_SHADE{"SPECIAL_DAMAGE_EFFECT", 0, "GHOST", 100, 15};
const move MIMIC{"MIMIC_EFFECT", 0, "NORMAL", 100, 10};
const move SCREECH{"DEFENSE_DOWN2_EFFECT", 0, "NORMAL", 85, 40};
const move DOUBLE_TEAM{"EVASION_UP1_EFFECT", 0, "NORMAL", 100, 15};
const move RECOVER{"HEAL_EFFECT", 0, "NORMAL", 100, 20};
const move HARDEN{"DEFENSE_UP1_EFFECT", 0, "NORMAL", 100, 30};
const move MINIMIZE{"EVASION_UP1_EFFECT", 0, "NORMAL", 100, 20};
const move SMOKESCREEN{"ACCURACY_DOWN1_EFFECT", 0, "NORMAL", 100, 20};
const move CONFUSE_RAY{"CONFUSION_EFFECT", 0, "GHOST", 100, 10};
const move WITHDRAW{"DEFENSE_UP1_EFFECT", 0, "WATER", 100, 40};
const move DEFENSE_CURL{"DEFENSE_UP1_EFFECT", 0, "NORMAL", 100, 40};
const move BARRIER{"DEFENSE_UP2_EFFECT", 0, "PSYCHIC_TYPE", 100, 30};
const move LIGHT_SCREEN{"LIGHT_SCREEN_EFFECT", 0, "PSYCHIC_TYPE", 100, 30};
const move HAZE{"HAZE_EFFECT", 0, "ICE", 100, 30};
const move REFLECT{"REFLECT_EFFECT", 0, "PSYCHIC_TYPE", 100, 20};
const move FOCUS_ENERGY{"FOCUS_ENERGY_EFFECT", 0, "NORMAL", 100, 30};
const move BIDE{"BIDE_EFFECT", 0, "NORMAL", 100, 10};
const move METRONOME{"METRONOME_EFFECT", 0, "NORMAL", 100, 10};
const move MIRROR_MOVE{"MIRROR_MOVE_EFFECT", 0, "FLYING", 100, 20};
const move SELFDESTRUCT{"EXPLODE_EFFECT", 130, "NORMAL", 100, 5};
const move EGG_BOMB{"NO_ADDITIONAL_EFFECT", 100, "NORMAL", 75, 10};
const move LICK{"PARALYZE_SIDE_EFFECT2", 20, "GHOST", 100, 30};
const move SMOG{"POISON_SIDE_EFFECT2", 20, "POISON", 70, 20};
const move SLUDGE{"POISON_SIDE_EFFECT2", 65, "POISON", 100, 20};
const move BONE_CLUB{"FLINCH_SIDE_EFFECT1", 65, "GROUND", 85, 20};
const move FIRE_BLAST{"BURN_SIDE_EFFECT2", 120, "FIRE", 85, 5};
const move WATERFALL{"NO_ADDITIONAL_EFFECT", 80, "WATER", 100, 15};
const move CLAMP{"TRAPPING_EFFECT", 35, "WATER", 75, 10};
const move SWIFT{"SWIFT_EFFECT", 60, "NORMAL", 100, 20};
const move SKULL_BASH{"CHARGE_EFFECT", 100, "NORMAL", 100, 15};
const move SPIKE_CANNON{"TWO_TO_FIVE_ATTACKS_EFFECT", 20, "NORMAL", 100, 15};
const move CONSTRICT{"SPEED_DOWN_SIDE_EFFECT", 10, "NORMAL", 100, 35};
const move AMNESIA{"SPECIAL_UP2_EFFECT", 0, "PSYCHIC_TYPE", 100, 20};
const move KINESIS{"ACCURACY_DOWN1_EFFECT", 0, "PSYCHIC_TYPE", 80, 15};
const move SOFTBOILED{"HEAL_EFFECT", 0, "NORMAL", 100, 10};
const move HI_JUMP_KICK{"JUMP_KICK_EFFECT", 85, "FIGHTING", 90, 20};
const move GLARE{"PARALYZE_EFFECT", 0, "NORMAL", 75, 30};
const move DREAM_EATER{"DREAM_EATER_EFFECT", 100, "PSYCHIC_TYPE", 100, 15};
const move POISON_GAS{"POISON_EFFECT", 0, "POISON", 55, 40};
const move BARRAGE{"TWO_TO_FIVE_ATTACKS_EFFECT", 15, "NORMAL", 85, 20};
const move LEECH_LIFE{"DRAIN_HP_EFFECT", 20, "BUG", 100, 15};
const move LOVELY_KISS{"SLEEP_EFFECT", 0, "NORMAL", 75, 10};
const move SKY_ATTACK{"CHARGE_EFFECT", 140, "FLYING", 90, 5};
const move TRANSFORM{"TRANSFORM_EFFECT", 0, "NORMAL", 100, 10};
const move BUBBLE{"SPEED_DOWN_SIDE_EFFECT", 20, "WATER", 100, 30};
const move DIZZY_PUNCH{"NO_ADDITIONAL_EFFECT", 70, "NORMAL", 100, 10};
const move SPORE{"SLEEP_EFFECT", 0, "GRASS", 100, 15};
const move FLASH{"ACCURACY_DOWN1_EFFECT", 0, "NORMAL", 70, 20};
const move PSYWAVE{"SPECIAL_DAMAGE_EFFECT", 1, "PSYCHIC_TYPE", 80, 15};
const move SPLASH{"SPLASH_EFFECT", 0, "NORMAL", 100, 40};
const move ACID_ARMOR{"DEFENSE_UP2_EFFECT", 0, "POISON", 100, 40};
const move CRABHAMMER{"NO_ADDITIONAL_EFFECT", 90, "WATER", 85, 10};
const move EXPLOSION{"EXPLODE_EFFECT", 170, "NORMAL", 100, 5};
const move FURY_SWIPES{"TWO_TO_FIVE_ATTACKS_EFFECT", 18, "NORMAL", 80, 15};
const move BONEMERANG{"ATTACK_TWICE_EFFECT", 50, "GROUND", 90, 10};
const move REST{"HEAL_EFFECT", 0, "PSYCHIC_TYPE", 100, 10};
const move ROCK_SLIDE{"NO_ADDITIONAL_EFFECT", 75, "ROCK", 90, 10};
const move HYPER_FANG{"FLINCH_SIDE_EFFECT1", 80, "NORMAL", 90, 15};
const move SHARPEN{"ATTACK_UP1_EFFECT", 0, "NORMAL", 100, 30};
const move CONVERSION{"CONVERSION_EFFECT", 0, "NORMAL", 100, 30};
const move TRI_ATTACK{"NO_ADDITIONAL_EFFECT", 80, "NORMAL", 100, 10};
const move SUPER_FANG{"SUPER_FANG_EFFECT", 1, "NORMAL", 90, 10};
const move SLASH{"NO_ADDITIONAL_EFFECT", 70, "NORMAL", 100, 20};
const move SUBSTITUTE{"SUBSTITUTE_EFFECT", 0, "NORMAL", 100, 10};
const move STRUGGLE{"RECOIL_EFFECT", 50, "NORMAL", 100, 10};