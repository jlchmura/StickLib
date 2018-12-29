#ifndef _AREAS_H
#define _AREAS_H

/* Let's comment out path defs for the areas not included
 * in the StickLib... This way we'll hopefully find out
 * rooms that have 'wrong' exits.
 */
#define AREA_AL_TANIA		"/areas/al-tania/"
#define AREA_ABYSS		"/areas/abyss/"
#define	AREA_ASAHI		"/areas/asahi/"
#define AREA_ANCHTAGON          "/areas/anchtagon/"
#define AREA_BEEHIVE		"/areas/bee_hive/"
#define	AREA_CASTLES		"/areas/castles/"
#define AREA_CATECOMBS		"/areas/catecombs/"
#define AREA_CENTAUR		"/areas/centaur/"
#define AREA_COLLEGE            "/areas/s/college/"
#define AREA_COT		"/areas/cot/"
#define	AREA_CRAG		"/areas/w/crag/"
#define AREA_DWARVEN_CAVES	"/areas/dwarven_caves/"
#define	AREA_DESERT		"/areas/desert/"
#define AREA_DINO		"/areas/dino/"
#define	AREA_DUEL_ARENA		"/areas/tristeza/duel/"
#define AREA_DRAGON_CAVES	"/areas/dragon_caves/"
#define	AREA_EAST		"/areas/east_area/"
#define	AREA_EAST_FOREST	"/areas/east_forest/"
#define AREA_ERED               "/areas/ered-mithrin/"
#define	AREA_EVIL_CASTLE	"/areas/evil_castle/"
#define	AREA_FARAWAY		"/areas/faraway/"
//#define AREA_FINLAND		"/areas/finland/"
#define AREA_GAUNTLET		"/areas/gauntlet/"
#define AREA_GOBMOUNT           "/areas/gobmount/"
#define AREA_GV			"/areas/gv/"
#define AREA_HAUNTED		"/areas/haunted_house/"
#define	AREA_HIGHWAYS		"/areas/highways/"
#define AREA_HILL_GIANT         "/areas/hill_giant/"
#define AREA_ICELANDS		"/areas/icelands/"
#define AREA_ICEMOUNTAIN		"/areas/ice_mountain/"
#define	AREA_ISLANDS		"/areas/islands/"
#define AREA_KLAMORKAN          "/areas/east_forest/klamorkan/"
#define AREA_MAZE_OF_FAME      "/areas/maze_of_fame/"
#define AREA_MAGICMANSION	"/areas/magic_mansion/"
#define	AREA_MEREDICOL		"/areas/meredicol/"
#define AREA_OCTAGON            "/areas/octagon/"
#define	AREA_OGRE_VALLEY	"/areas/ogre_valley/"
#define AREA_ORCLAIR		"/areas/orclair/"
#define	AREA_PLAYER_HOMES	"/areas/player_homes/"
#define AREA_PONTOS             "/areas/pontos/"
#define AREA_REDHEN		"/areas/redhen/"
#define AREA_SCORPION_CAVES    "/areas/scorpion_caves/"
#define AREA_SOUTH              "/areas/s/"
#define	AREA_SOUTH_FOREST	"/areas/south_forest/"
#define AREA_SHAKARI		"/areas/shakari/"
#define	AREA_SWEDISH_CLUB	"/areas/swedish_club/"
#define AREA_SKYE               "/areas/skye/"
#define AREA_SWAMPS             "/areas/swamps/"
#define AREA_TOWER              "/areas/tower/"
#define	AREA_TRISTEZA		"/areas/tristeza/"
#define	AREA_TRISTEZA_FNAME	"areas/tristeza/"
#define AREA_T_TOWN       "/areas/t_town/"
#define	AREA_TWS		"/areas/landover/"
#define AREA_UNDERGD_CHURCH	"/areas/undergd_church/"
#define AREA_ULTIMA_THULE       "/areas/ultima_thule/"
#define AREA_VALLEY             "/areas/valley/"
#define	AREA_W			"/areas/w/"
#define	AREA_WEST		"/areas/west_area/"
#define AREA_WONDERLAND        "/areas/wonderland/"
#define	AREA_ZOO		"/areas/zoo/"

// Coder practice area: read/writable to all. Never for players.
#define AREA_PRACTICE           "/areas/practice/"

/* And then the areas present in StickMUD but not in StickLib: */

//#define	AREA_ORCTOWN		"/areas/orctown/"
//#define AREA_DROW		"/areas/drow/"
//#define	AREA_CRYPT		"/areas/sewers/crypt/"
// These two areas seem to be half-ready
//#define	AREA_AHAN               "/u/enjorlas/areas/ahan/"
//#define	AREA_CLOUDS             "/u/fafnir/clouds/"
// Demonworld is too much of a trademark of StickMud. Funny,
// imaginative... And not much of an example for clean coding:
//#define	AREA_DEMONWORLD		"/areas/demonworld/"
//#define	AREA_DOD		"/u/baccata/areas/dungeons/"
// The Inn is bit too old, and perhaps also one of the things that
// makes StickMud StickMud... not to be copied:
//#define	AREA_FROBOZZ_INN	"/areas/frobozz_inn/"
// Ghost Town is a specific punishment place, hopefully not necessary
// for muds that are build on StickLib:
//#define	AREA_GHOSTTOWN		"/areas/ghost/rooms/"
// Hobbit Village was horribly buggy, typo-ridden and illogical:
//#define	AREA_HOBBIT_VILLAGE	"/areas/hobbit_village/"
// Kalevala was considered to be so much part of StickMud that
// it was not included, although it certainly would deserve to
// be present. Kalevala (the book as well as the area) rules!
//#define	AREA_KALEVALA		"/areas/kalevala/"
// Mansion of Kantele was left out due to copyright reasons; originally
// a freely distributable area, _heavily_ fixed/updated by Stick coders
// but in any case, not their production:
//#define	AREA_KANTELES		"/areas/mansion_of_kantele/"
// Monster Village was just way too buggy. Never seemed to work 100% ok
//#define	AREA_MONSTER_VILLAGE	"/areas/monster_village/"
// An unfinished area it seems:
//#define	AREA_MIRROR             "/u/baccata/areas/newbie/"
// SUE... Small(?) Ungerground Empire. Ancient (codewise), and probably
// not worth including here
//#define	AREA_SUE		"/areas/SUE/"
// Sewers are so StickMudish that it was left out. Imaginative at times,
// funny, and major pain in butt as most players claimed... :-)
//#define	AREA_SEWERS		"/areas/sewers/"

#endif